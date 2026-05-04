/**
 ******************************************************************************
 * @file    session_kding.c
 * @author  
 * @brief   

 *****************************************************************************
*/

/* Inclusions */
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <debug_print.h>
#include <mem_pool.h>
#include <user_g3_common.h>
#include <session_comm.h>
#include <session_kd.h>
#include <session_kd_helper.h>

// #if ENABLE_SECURE_SESSION



/* Definitions ---------------------------------------------------------------*/

#define KD_TIMEOUT         (10000U)    /* In ms */

/* Maximum number of device-pairs the Trusted server can handle in parallel */
#define KD_MAX_SESSION     (16U)

/* Sentinel value: an entry whose first_dev_id equals this is considered free */
#define KD_ENTRY_FREE_ID   (0xFFU)


/* Types ---------------------------------------------------------------------*/

typedef enum kd_state_enum
{
    SESSION_ST_KD_IDLE,
    SESSION_ST_KD_WAIT_FIRST,
    SESSION_ST_KD_WAIT_SECOND,
    SESSION_ST_KD_WAIT_THIRD,
    SESSION_ST_KD_SUCCESS,
    SESSION_ST_KD_CNT
} kd_state_t;


typedef enum kd_event_enum
{
    SESSION_EV_KD_NONE = 0,
    SESSION_EV_KD_START_TRUSTED,
    SESSION_EV_KD_START_INIT, 
    SESSION_EV_KD_START_NINIT,  
    SESSION_EV_KD_REC_FIRST, 
    SESSION_EV_KD_REC_SECOND, 
    SESSION_EV_KD_REC_THIRD,
    SESSION_EV_KD_CNT
} kd_event_t;



/* Non-Trusted single FSM context (client) */
typedef struct kd_fsm_str
{
    kd_state_t          curr_state;
    kd_event_t          curr_event;
    kd_error_code_t     error_code;

    uint8_t             handle;
    uint32_t            operation_counter;
} kd_fsm_t;


/* External variables --------------------------------------------------------*/
extern uint32_t             user_task_operation_counter;
extern uint8_t              udp_handle;
extern osMessageQueueId_t   user_queueHandle;
extern osTimerId_t          sessionTimerHandle;


/* Private variables ---------------------------------------------------------*/


/* TRUSTED */
static kd_entry_t  kd_entry_table[KD_MAX_SESSION];



/* NON TRUSTED */
static kd_context_t    ctx; 
static kd_fsm_t        kd_fsm;
static session_msg_t  *pending_msg;




/* Private function prototypes -----------------------------------------------*/


static kd_state_t kd_fsm_default   (const session_msg_t *s_msg);
static kd_state_t kd_fsm_timeout   (const session_msg_t *s_msg);

typedef kd_state_t kd_srv_fsm_func (const session_msg_t *s_msg, kd_fsm_t *fsm);




typedef kd_state_t kd_fsm_func(const session_msg_t *s_msg, const kd_entry_t *entry);

static kd_fsm_func* const kd_fsm_tbl[SESSION_ST_KD_CNT][SESSION_EV_KD_CNT] =
{
/*                    NONE              START,                REC_FIRST,            REC_SECOND,          REC_THIRD,         TIMEOUT           */
/* IDLE          */ { kd_fsm_default,   kd_fsm_start,         kd_fsm_default,       kd_fsm_default,      kd_fsm_default,    kd_fsm_default    },
/* WAIT_FIRST    */ { kd_fsm_default,   kd_fsm_default,       kd_fsm_rec_first,     kd_fsm_default,      kd_fsm_default,    kd_fsm_default    },
/* WAIT_SECOND   */ { kd_fsm_default,   kd_fsm_default,       kd_fsm_default,       kd_fsm_rec_second,   kd_fsm_rec_third,  kd_fsm_default    },
/* WAIT_THIRD    */ { kd_fsm_default,   kd_fsm_default,       kd_fsm_default,       kd_fsm_default,      kd_fsm_default,    kd_fsm_default    },
/* SUCCESS       */ { kd_fsm_default,   kd_fsm_default,       kd_fsm_default,       kd_fsm_default,      kd_fsm_default,    kd_fsm_default    },
};



static kd_state_t kd_fsm_default(const session_msg_t *s_msg, kd_entry_t *entry)
{
    /* TODO: implement */
    (void)s_msg;
    (void)entry;
    return entry->curr_state;
}


static kd_state_t kd_fsm_timeout(const session_msg_t *s_msg, kd_entry_t *entry)
{
    /* TODO: implement */
    (void)s_msg;
    (void)entry;
    return SESSION_ST_KD_IDLE;
}




/* Operazione del Trusted */
void send_kd_first_msg(){ 

    kd_msg1_t msg1; 
    session_msg_t out_msg; 
    kd_build_msg1(&msg1, entry->ctx, &out_msg); //  da capire la questione entry 

    entry->handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                             entry->device_addr,
                             &out_msg, sizeof(out_msg));

    
    entry->curr_event  = SESSION_EV_KD_NONE; 
}

static kd_state_t kd_fsm_start(const session_msg_t *s_msg, const kd_entry_t *entry){ 

    kd_state_t next_state; 

    switch(kd_fsm.curr_event)
    {
        case SESSION_EV_KD_START_INIT: 
            next_state = SESSION_ST_KD_WAIT_FIRST;
            break;  
        case SESSION_EV_KD_START_TRUSTED: 
            next_state = SESSION_ST_KD_SUCCESS; 
            send_kd_first_msg(entry); 
            break; 
        case SESSION_EV_KD_START_NINIT:
            next_state = SESSION_ST_KD_WAIT_SECOND; 
            break; 

    }


    kd_fsm.curr_event = SESSION_EV_KD_NONE; 
    return next_state; 
}




static kd_fsm_rec_first(const session_msg_t *s_msg){

    // Initiator 
    // Valida ed elabora il primo messaggio 
    // invia il secodno messaggio al Device B 
    
    decode_msg1(s_msg, &ctx);

    kd_msg2_t msg2; 
    session_msg_t out_msg; 
    kd_build_msg2(&msg2, &ctx, &out_msg); 

    kd_fsm.handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                            second_dev_addr,  // da capire questione indirizzo
                            &out_msg, sizeof(out_msg));
    

    kd_fsm.curr_event = SESSION_EV_KD_NONE; 
    return SESSION_ST_KD_WAIT_THIRD; 

}

static kd_fsm_rec_second(const session_msg_t *s_msg){

    // Non initiator
    // Valida ed elabora il secondo messaggio 
    // invia il terzo messaggio all'Initiator 

    if(!kd_validate_msg2(s_msg, &ctx)){
        return; //?  
    }

    kd_msg3_t msg3; 
    session_msg_t out_msg; 
    kd_build_msg2(&msg3, &ctx, &out_msg); 

    kd_fsm.handle = UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID,
                            first_dev_addr,  // da capire questione indirizzo
                            &out_msg, sizeof(out_msg));
    

    kd_fsm.curr_event = SESSION_EV_KD_NONE; 
    return SESSION_ST_KD_SUCCESS; 

}


static kd_fsm_rec_third(const session_msg_t *s_msg){

    // Initiator
    // Valida il terzo messaggio 

    if(!kd_validate_msg3(s_msg, &ctx)){
        return;  // ?
    } 

 

    kd_fsm.curr_event = SESSION_EV_KD_NONE; 
    return SESSION_ST_KD_SUCCESS; 

}




/* ============================================================================
 * Public functions
 * ========================================================================= */


void Kd_Init(void)
{

#if TRUSTED
    for (uint32_t i = 0; i < KD_MAX_SESSION; i++)
    {
        memset(&kd_entry_table[i], 0, sizeof(kd_entry_t));
        kd_entry_table[i].first_dev_id = KD_ENTRY_FREE_ID;
    }
    
#else

    memset(&kd_fsm, 0, sizeof(kd_fsm));
    kd_fsm.curr_state = SESSION_ST_KD_IDLE;
    kd_fsm.curr_event = SESSION_EV_KD_NONE;
    pending_msg = NULL;

#endif

}



void Kd_MsgHandler(const session_msg_t *s_msg)
{
    assert(s_msg != NULL);
    assert(s_msg->payload != NULL); 

    /* NOTA: Il trusted non riceve alcun messaggio 
        Esso riceve un messaggio di controllo di Richiesta di Sessione, è in quel momento che dovrebbe creare 
        la entry nella table KD con le informazioni necessarie. 
    */

    switch(s_msg->msg_subtype)
    {
        case SESSION_MSG_KD_MSG1:   /* Initiator */
            assert(SESSION_ST_KD_WAIT_FIRST == kd_fsm.curr_state);
            pending_msg = s_msg: 
            kd_fsm.curr_event = SESSION_EV_KD_REC_FIRST;
            break;
        
        case SESSION_MSG_KD_MSG2:  /* NON Initiator */
            assert(SESSION_ST_KD_WAIT_SECOND == kd_fsm.curr_state);
            pending_msg = s_msg; 
            kd_fsm.curr_event = SESSION_EV_KD_REC_SECOND;
            break; 
        
        case SESSION_MSG_KD_MSG3:  /* Initiator */
            assert(SESSION_ST_KD_WAIT_THIRD == kd_fsm.curr_state);
            pending_msg = s_msg; 
            kd_fsm.curr_event = SESSION_EV_KD_REC_THIRD; 
            break;
        
    }; 

}




/**
 * @brief  Advances all active FSM entries by one tick.
 *         Must be called periodically from the main task loop.
 */
void Kd_FsmManager(void)
{
#if TRUSTED

    for (uint32_t i = 0; i < KD_MAX_SESSION; i++)
    {
        kd_entry_t *entry = &kd_entry_table[i];

        /* Skip free slots */
        if (entry->first_dev_id == KD_ENTRY_FREE_ID)
        {
            continue;
        }

        /* Skip entries with nothing to do, but still check for timeout */
        if (entry->curr_event == SESSION_EV_KD_NONE)
        {
           
            continue;
        }

        /* Dispatch to the FSM action for this entry */
        entry->curr_state =
            kd_fsm_tbl[entry->curr_state][entry->curr_event](
                entry->pending_msg, entry);

        /* Clear the consumed message pointer and event */
        entry->pending_msg  = NULL;
        entry->curr_event   = SESSION_EV_KD_NONE;
    }

#else

    kd_fsm.curr_state =
        kd_fsm_tbl[kd_fsm.curr_state][kd_fsm.curr_event](pending_msg);

    pending_msg = NULL;

#endif
}


// #endif /* ENABLE_SECURE_SESSION */
/****************************END OF FILE****/