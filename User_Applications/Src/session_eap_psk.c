/**
 ******************************************************************************
 * @file    session_eap_psk.c
 * @author  Simone Di Fraia
 * @brief   Implementation of the EAP-PSK mutual authentication protocol.
 *
 ******************************************************************************
 */

/* Inclusions */
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <debug_print.h>
#include <mem_pool.h>
#include <user_g3_common.h>
#include <session_comm.h>
#include <session_eap_psk.h>

// #if ENABLE_SECURE_SESSION


/* Definitions ---------------------------------------------------------------*/

#define EAP_PSK_TIMEOUT     (10000U)    /* In ms */

/* Maximum number of devices the Trusted server can authenticate in parallel */
#define SESSION_EAP_MAX_DEVICES     (16U)

/* Sentinel value: an entry whose device_id equals this is considered free */
#define SESSION_EAP_ENTRY_FREE_ID   (0xFFU)




/* External variables --------------------------------------------------------*/
extern uint32_t             user_task_operation_counter;
extern uint8_t              udp_handle;
extern osMessageQueueId_t   user_queueHandle;
extern osTimerId_t          sessionTimerHandle;


/* Private variables ---------------------------------------------------------*/


/* TRUSTED */
static session_eap_entry_t  eap_entry_table[SESSION_EAP_MAX_DEVICES];


/* NON TRUSTED*/
static session_eap_psk_context_t eap_context; 
static session_eap_psk_fsm_t     eap_psk_fsm;
static session_msg_t             *pending_msg; 




/* Private function prototypes -----------------------------------------------*/


/* FSM TRUSTED */

/* Server-side FSM action functions (each returns the next state) */
static session_eap_psk_state_t session_eap_psk_fsm_default        (const session_msg_t *s_msg, session_eap_entry_t *entry);
static session_eap_psk_state_t session_eap_psk_fsm_timeout        (const session_msg_t *s_msg, session_eap_entry_t *entry);
static session_eap_psk_state_t session_eap_psk_fsm_send_first     (const session_msg_t *s_msg, session_eap_entry_t *entry);
static session_eap_psk_state_t session_eap_psk_fsm_rec_second     (const session_msg_t *s_msg, session_eap_entry_t *entry);
static session_eap_psk_state_t session_eap_psk_fsm_rec_fourth     (const session_msg_t *s_msg, session_eap_entry_t *entry);

/* Server-side FSM function pointer type */
typedef session_eap_psk_state_t session_eap_srv_fsm_func(const session_msg_t *s_msg, session_eap_entry_t *entry);

/* Server-side FSM dispatch table [state][event] */
static session_eap_srv_fsm_func* const session_eap_psk_fsm_tbl[SESSION_ST_EAP_CNT][SESSION_EV_EAP_CNT] =
{
/*                    NONE,                          START,                          REC_SECOND,                       REC_FOURTH,                         TIMEOUT                      */
/* IDLE          */ { session_eap_psk_fsm_default,   session_eap_psk_fsm_send_first, session_eap_psk_fsm_default,      session_eap_psk_fsm_default,		  session_eap_psk_fsm_default   },
/* WAIT_SECOND   */ { session_eap_psk_fsm_default,   session_eap_psk_fsm_default,    session_eap_psk_fsm_rec_second,   session_eap_psk_fsm_default,    	  session_eap_psk_fsm_timeout   },
/* WAIT_FOURTH   */ { session_eap_psk_fsm_default,   session_eap_psk_fsm_default,    session_eap_psk_fsm_default, 	   session_eap_psk_fsm_rec_fourth,    session_eap_psk_fsm_timeout   },
/* SUCCESS       */ { session_eap_psk_fsm_default,   session_eap_psk_fsm_default,    session_eap_psk_fsm_default, 	   session_eap_psk_fsm_default,       session_eap_psk_fsm_default   },
};


/* FSM NON TRUSTED */

static session_eap_psk_state_t session_layer_fsm_default    (void);
static session_eap_psk_state_t session_layer_fsm_timeout    (void);
static session_eap_psk_state_t session_layer_fsm_abort      (void);
static session_eap_psk_state_t session_eap_psk_fsm_rec_start  (const session_msg_t *s_msg);
static session_eap_psk_state_t session_eap_psk_fsm_rec_first  (const session_msg_t *s_msg);
static session_eap_psk_state_t session_eap_psk_fsm_rec_third  (const session_msg_t *s_msg);
static session_eap_psk_state_t session_eap_psk_fsm_rec_accept (const session_msg_t *s_msg);

typedef session_eap_psk_state_t session_eap_psk_fsm_func(const session_msg_t *s_msg);

static session_eap_psk_fsm_func* const session_eap_psk_fsm_tbl[SESSION_ST_EAP_CNT][SESSION_EV_EAP_CNT] =
{
/*                   NONE,                         START,                           REC_FIRST,                      REC_THIRD,					 	TIMEOUT                       
/* IDLE          */ { session_layer_fsm_default,   session_eap_psk_fsm_rec_start,   session_layer_fsm_default,      session_layer_fsm_default,   	session_layer_fsm_default},
/* WAIT_FIRST    */ { session_layer_fsm_default,   session_layer_fsm_default,       session_eap_psk_fsm_rec_first,  session_layer_fsm_default,   	session_layer_fsm_default},
/* WAIT_THIRD    */ { session_layer_fsm_default,   session_layer_fsm_default,       session_layer_fsm_default,      session_eap_psk_fsm_rec_third,  session_layer_fsm_default},
/* SUCCESS       */ { session_layer_fsm_default,   session_layer_fsm_default,       session_layer_fsm_default,      session_layer_fsm_default,   	session_layer_fsm_default}
};







/* PRIVATE FSM functions */


static session_eap_psk_state_t session_eap_psk_fsm_default(const session_msg_t *s_msg, session_eap_entry_t *entry)
{
    UNUSED(s_msg);
    entry->curr_event = SESSION_EV_EAP_NONE;
    return entry->curr_state;
}

static session_eap_psk_state_t session_eap_psk_fsm_timeout(const session_msg_t *s_msg, session_eap_entry_t *entry)
{
    UNUSED(s_msg);
    PRINT_USER_IT_WARNING("EAP-PSK: timeout for device %u (state=%u)\n",
                          entry->device_id, entry->curr_state);
    session_eap_entry_remove(entry);
    return SESSION_ST_EAP_IDLE;
}



/* FUNZIONE DELLA FSM TRUSTED */
static session_eap_psk_state_t session_eap_psk_fsm_send_msg1(const session_msg_t *s_msg, session_eap_entry_t *entry)
{
    /* NOTA: Funzione invocata quando si è in Idle per il Device corrispondente ma arriva da esso 
    una richiesta di Autenticazione.
    */
    
    /* ATTENZIONE: NON é STATO IMPLEMENTATO MA ANCHE IL TRUSTED DOVREBBE AVERE UN LAYER SUPERIORE PER I MESSAGGI DI CONTROLLO 
       QUANDO ARRIVA UN MESSAGGIO REQ_AUTH GENERA L'EVENTO SESSION_EV_EAP_START. 
       NEL CASO DEL DEVICE INVECE L'EVENTO EV_EAP_START é generato dalla richiesta di autenticazione. 
    */

    UNUSED(s_msg);

    eap_msg1_t msg1; 
    session_msg_t out_msg; 
    eap_psk_build_msg1(&msg1, entry, &s_msg); 

    entry->handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                             entry->device_addr,
                             &out_msg, sizeof(out_msg));

    
    entry->curr_event   = SESSION_EV_EAP_NONE;

    // Si transita nello stato di attesa del secondo messaggio 
    return SESSION_ST_EAP_WAIT_SECOND;
}



/* FUNZIONE DELLA FSM DEVICE */
static session_eap_psk_state_t session_eap_psk_fsm_rec_first(const session_msg_t *s_msg)
{
    /* Funzione invocata quando il Device riceve il #1 MSG EAP dal Trusted */

    assert(s_msg != NULL);
    const eap_psk_msg1_t *msg1 = (const eap_psk_msg1_t *)s_msg->payload;


    // Si inseriscono nel contesto eap, i dati utili 
    decode_msg1(msg1, &eap_context); 


    // Si valida il messaggio 
    if(!eap_psk_validate_msg1(msg1)) {
        /* QUi ci dovrebbe essere un Silently Discard e quindi un conseguente retry ma non è ancora implementato */
        entry->curr_event = SESSION_EV_EAP_NONE;
        return SESSION_ST_EAP_WAIT_FIRST;
    }

    


    // si costruisce il messaggio 2 
    // Nelle funzioni di costruzione dovranno essere invocate le funzioni crypto

    eap_psk_msg2_t msg2;
    session_msg_t out_msg; 
    eap_psk_build_msg2(&msg2, &eap_context, &out_msg); 
    
    eap_psk_fsm.handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                            TRUSTED_IP_ADDR,
                            &out_msg, sizeof(out_msg));

    eap_psk_fsm.curr_event = SESSION_EV_EAP_NONE;
    
    // si transita nello stato di attesa del terzo messaggio 
    return SESSION_ST_EAP_WAIT_THIRD;
}




/* FUNZIONE DELLA FSM TRUSTED */
static session_eap_psk_state_t session_eap_psk_fsm_rec_second(const session_msg_t *s_msg, session_eap_entry_t *entry)
{
    assert(s_msg != NULL);
    assert(s_msg->payload != NULL);

    const eap_psk_msg2_t *msg2 = (const eap_psk_msg2_t *)s_msg->payload;

    decode_msg2(msg2, entry); 


    if(!eap_psk_validate_msg2(msg2, entry)){
        /* silently discard */
        entry->curr_event = SESSION_EV_EAP_NONE;
        return SESSION_ST_EAP_WAIT_SECOND;
    }
    
            
    
    eap_psk_msg3_t msg3;
    session_msg_t out_msg;
    eap_psk_build_msg3(&msg3, entry, &out_msg);     


    entry->handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                             entry->device_addr,
                             &out_msg, sizeof(out_msg));


    entry->curr_event  = SESSION_EV_EAP_NONE;

    // si pone in attesa del quarto messaggio 
    return SESSION_ST_EAP_WAIT_FOURTH;
}


/* FUNZIONE DELLA FSM DEVICE */
static session_eap_psk_state_t session_eap_psk_fsm_rec_third(const session_msg_t *s_msg)
{
    assert(s_msg != NULL);
    const eap_psk_msg3_t *msg3 = (const eap_psk_msg3_t *)s_msg->payload;

    if(!eap_psk_validate_msg3(msg3, &eap_context)){
        eap_psk_fsm.curr_event = SESSION_EV_EAP_NONE;
        return SESSION_ST_EAP_WAIT_THIRD; /* RFC 4764 — silently discard */
    }

    eap_psk_msg4_t msg4;
    session_msg_t out_msg;
    eap_psk_build_msg4(&msg4, &eap_context, &out_msg);    

    entry->handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                             TRUSTED_IP_ADDR,
                             &out_msg, sizeof(out_msg));


    eap_psk_fsm.curr_event = SESSION_EV_EAP_NONE;
    return SESSION_ST_EAP_SUCCESS;
}


/* FUNZIONE DELLA FSM TRUSTED */
static session_eap_psk_state_t session_eap_psk_fsm_rec_fourth(const session_msg_t *s_msg, session_eap_entry_t *entry)
{
    assert(s_msg != NULL);
    assert(s_msg->payload != NULL);

    const eap_psk_msg4_t *msg4 = (const eap_psk_msg4_t *)s_msg->payload;

    if(!eap_psk_validate_msg4(msg4, entry)){
        entry->curr_event = SESSION_EV_EAP_NONE;
        return; 
    }

    entry->curr_event = SESSION_EV_EAP_NONE;

    /* Notify the outer session layer that EAP for this device is complete */
    session_eap_notify_layer_done();

    return SESSION_ST_EAP_SUCCESS;
}










/* Public functions */


void SessionEapPsk_Init(void)
{
	
#if TRUSTED 
    for (uint32_t i = 0; i < SESSION_EAP_MAX_DEVICES; i++)
    {
        memset(&eap_entry_table[i], 0, sizeof(session_eap_entry_t));
        eap_entry_table[i].device_id = SESSION_EAP_ENTRY_FREE_ID;
    }
    PRINT_USER_IT_INFO("EAP-PSK server: initialised (max %u concurrent devices)\n",
                       SESSION_EAP_MAX_DEVICES);
#else 
	memset(&eap_psk_fsm, 0, sizeof(eap_psk_fsm));
    eap_psk_fsm.curr_state = SESSION_ST_EAP_IDLE;
    eap_psk_fsm.curr_event = SESSION_EV_EAP_NONE;

#endif 
}


void SessionEapPsk_MsgHandler(const session_msg_t *s_msg)
{
	assert(s_msg != NULL);
    assert(s_msg->payload != NULL);

	/* NOTA: COme quasi tutte le funzioni il comportamento è differenziato tra Trusted e Device */


#if TRUSTED 


    /* Il trusted ogni volta che arriva un messaggio deve individuare la entry corrispondente al device. 
       Questa entry viene poi passata alle funzioni di stato. Se questa enty non esiste, 
       quando per esempio il device invia una richiesta di autenticaticazione, va creata una entry 
    */

    /* NOTA: le funzioni legate alla gestione della tabella mantenuta dal trusted 
       sono in session_table_handler.h
    */

    /*INCOMPLETO: Bisognerebbe modificare il pacchetto session per inserire ip addre e device id 
       per passsarli come parametri della creazione o dell'ottenimento dell'entry 
    */

    session_eap_entry_t *entry = session_eap_entry_get_or_create();
    if (entry == NULL)
    {
        return;
    }

    switch (s_msg->msg_subtype)
    {
    case SESSION_MSG_EAP_PSK_2:
        entry->curr_event = SESSION_EV_EAP_REC_SECOND;
        entry->pending_msg = s_msg;
        break;

    case SESSION_MSG_EAP_PSK_4:
        entry->curr_event = SESSION_EV_EAP_REC_FOURTH;
        entry->pending_msg = s_msg;
        break;

    default:  // Unexpected type
        break;
    }

#else 
    switch (s_msg->msg_subtype)
    {
	case SESSION_MSG_EAP_PSK_1:
        eap_psk_fsm.curr_event = SESSION_EV_EAP_REC_FIRST;
        break;
    case SESSION_MSG_EAP_PSK_3:
        eap_psk_fsm.curr_event = SESSION_EV_EAP_REC_THIRD;
        break;
    case SESSION_MSG_EAP_ACCEPT:
        eap_psk_fsm.curr_event = SESSION_EV_EAP_REC_ACCEPT;
        break;
	default:
        break;
    }

	pending_msg = s_msg; 
#endif 


}

void SessionEapPsk_FsmManager(void)
{

    /* NOTA: Nel caso trusted, scorre tutte le entry per eseguire le azioni corrispondenti
    Nel caso devcice invece basta eseguire la corrispondente azione */

#if TRUSTED

    for (uint32_t i = 0; i < SESSION_EAP_MAX_DEVICES; i++)
    {
        session_eap_entry_t *entry = &eap_entry_table[i];

        /* Skip free slots */
        if (entry->device_id == SESSION_EAP_ENTRY_FREE_ID)
        {
            continue;
        }

        /* Skip entries with nothing to do */
        if (entry->curr_event == SESSION_EV_EAP_NONE)
        {
    
            continue;
        }

        /* Dispatch to the FSM action for this entry */
        entry->curr_state =
            session_eap_psk_fsm_tbl[entry->curr_state][entry->curr_event](
                entry->pending_msg, entry);

        /* Clear the consumed message pointer */
        entry->pending_msg = NULL;
    }

#else 
    eap_psk_fsm.curr_state =
        session_eap_psk_fsm_tbl[eap_psk_fsm.curr_state][eap_psk_fsm.curr_event](pending_msg);
#endif 

}



// #endif /* ENABLE_SECURE_SESSION */

/****************************END OF FILE****/