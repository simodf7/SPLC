/**
 ******************************************************************************
 * @file    session_layer.c
 * @author  
 * @brief   Implementation that handles the Secure Session Layer.
 *
 * THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
 * AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
 * INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
 * CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
 * INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 *
 *******************************************************************************/


/* Inclusions */
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <utils.h>
#include <main.h>
#include <crc.h>
#include <debug_print.h>
#include <mem_pool.h>
#include <image_management.h>
#include <g3_app_config.h>
#include <user_g3_common.h>
#include <session_layer.h>
#include <session_comm.h>
#include <session_eap_psk.h>
#include <session_kd.h>


// #if ENABLE_SECURE_SESSION 

/* Definitions */
#if DEBUG_USER_IT
#define HANDLE_CNF_ERROR(cnf_id, status) if (status != G3_SUCCESS) PRINT_USER_IT_CRITICAL("ERROR, received negative CNF (%u=%s) for %s\n", status, g3_app_translate_g3_result(status), translateG3cmd(cnf_id));
#else
#define HANDLE_CNF_ERROR(cnf_id, status)
#endif

/* Timing */
#define SESSION_INFO_TIMEOUT                		(120000U)	/* In ms */
#define SESSION_DATA_TIMEOUT                		(90000U)	/* In ms */

/* Max retries on timeout before aborting */
#define SESSION_TIMEOUT_RETRY_MAX					(3U)

/* Custom types */

typedef enum session_layer_role_enum
{
	SESSION_RL_NOTDEFINED = 0,
	SESSION_RL_INITIATOR,
	SESSION_RL_NOT_INITIATOR
} session_layer_role_t;

typedef enum session_layer_event_enum
{
	SESSION_EV_NONE = 0,
	SESSION_EV_REQ_AUTH, 
	SESSION_EV_REC_REQ_SESSION, 
	SESSION_EV_EAP_DONE, 
	SESSION_EV_REQ_SESSION, 
	SESSION_EV_DEV_BUSY,
	SESSION_EV_DEV_READY, 
	SESSION_EV_KD_DONE,
	SESSION_EV_CLOSE_SESSION, 
	SESSION_EV_TIMEOUT,
	SESSION_EV_EXPIRY,
	SESSION_EV_CNT
} session_layer_event_t;

typedef enum session_layer_state_enum
{
	SESSION_ST_IDLE,
	SESSION_ST_EAP_LOADING,
	SESSION_ST_AUTH_COMPLETE, 
	SESSION_ST_WAIT_DEV, 
	SESSION_ST_KD_LOADING,
	SESSION_ST_ACTIVE,
	SESSION_ST_CNT
} session_layer_state_t;


typedef struct session_layer_fsm_str
{
	/* MAIN FSM */
	session_layer_state_t		curr_state;		/* Current state of the session layer  */
	session_layer_event_t		curr_event;		/* Current event of the session layer  */
	session_layer_error_code_t	error_code;		/* Error code of the session layer     */

	/* EAP_PSK FSM */
	session_eap_fsm_t			*eap_fsm;

	/* KD FSM */
	session_kd_fsm_t		 	*kd_fsm;

	uint8_t						handle;
	uint32_t					operation_counter;

} session_layer_fsm_t;


typedef struct session_context_str
{
	session_layer_role_t	role;				 				  /*  Initiator / non-initiator           */
	ip6_addr_t				second_device_addr;	 				  /*  IPv6 address of the peer device     */
	uint8_t					id_second_device [DEVICE_ID_LEN];	  /*  ID of the peer device               */
} session_context_t;


/* External Variables */
extern uint32_t 			user_task_operation_counter;
extern uint8_t      		udp_handle;
extern osMessageQueueId_t	user_queueHandle;
extern osTimerId_t 			sessionTimerHandle;


/* Private variables */
static session_layer_fsm_t			 session_layer_fsm;
static session_context_t			 ctx;


/* Rx buffer – contiene l'ultimo payload applicativo ricevuto */
static struct {
    uint8_t  data[SESSION_RX_BUFFER_SIZE];  
    uint16_t len;
    bool     pending;
} session_rx_buf;



/* Private function pointer type */
typedef session_layer_state_t session_layer_fsm_func(void);

/* Private function prototypes */
static void session_layer_send_close(session_close_reason_t reason);
static void handle_start_session_request(const void *payload);


/* Private FSM function prototypes */
static session_layer_state_t session_layer_fsm_default(void);
static session_layer_state_t session_layer_fsm_timeout(void);


static session_layer_state_t session_layer_fsm_wait_eap(void); 
static session_layer_state_t session_layer_fsm_start_kd(void); 
static session_layer_state_t session_layer_fsm_send_reject(void); 
static session_layer_state_t session_layer_fsm_reject(void); 
static session_layer_state_t session_layer_fsm_rec_eap_done(void); 
static session_layer_state_t session_layer_fsm_req_session(void); 
static session_layer_state_t session_layer_fsm_set_active(void); 


/* Private FSM function pointer array */

static session_layer_fsm_func *session_layer_fsm_func_tbl[SESSION_ST_CNT][SESSION_EV_CNT] = {
/*                    NONE,                        REQ_AUTH,               		REC_REQ_SESSION,           	 	EAP_DONE,                    	 REQ_SESSION,                     DEV_BUSY, 					DEV_READY, 					  KD_DONE, 					    TIMEOUT,                       EXPIRY,                     CLOSE_SESSION              */
/* IDLE           */ {session_layer_fsm_default,   session_layer_fsm_wait_eap,  session_layer_fsm_wait_eap,  	session_layer_fsm_default,   	 session_layer_fsm_default,       session_layer_fsm_default,    session_layer_fsm_default,    session_layer_fsm_default,    session_layer_fsm_default,     session_layer_fsm_default,  session_layer_fsm_default },
/* EAP_LOADING    */ {session_layer_fsm_default,   session_layer_fsm_default,   session_layer_fsm_send_reject,  session_layer_fsm_rec_eap_done,  session_layer_fsm_default,       session_layer_fsm_default, 	session_layer_fsm_default,    session_layer_fsm_default,    session_layer_fsm_default, 	   session_layer_fsm_default,  session_layer_fsm_default },
/* AUTH_COMPLETE  */ {session_layer_fsm_default,   session_layer_fsm_default,   session_layer_fsm_start_kd,   	session_layer_fsm_default,  	 session_layer_fsm_req_session,   session_layer_fsm_default,  	session_layer_fsm_default,    session_layer_fsm_default,    session_layer_fsm_default, 	   session_layer_fsm_default,  session_layer_fsm_default },
/* WAIT_DEV       */ {session_layer_fsm_default,   session_layer_fsm_default,   session_layer_fsm_send_reject,  session_layer_fsm_default,   	 session_layer_fsm_default,   	  session_layer_fsm_reject,  	session_layer_fsm_start_kd,   session_layer_fsm_default,    session_layer_fsm_default, 	   session_layer_fsm_default,  session_layer_fsm_default },
/* KD_LOADING     */ {session_layer_fsm_default,   session_layer_fsm_default,   session_layer_fsm_send_reject,  session_layer_fsm_default,   	 session_layer_fsm_default,   	  session_layer_fsm_default,  	session_layer_fsm_default,    session_layer_fsm_set_active, session_layer_fsm_default, 	   session_layer_fsm_default,  session_layer_fsm_default },
/* ACTIVE         */ {session_layer_fsm_default,   session_layer_fsm_default,   session_layer_fsm_send_reject,  session_layer_fsm_default,   	 session_layer_fsm_default,   	  session_layer_fsm_default, 	session_layer_fsm_default,    session_layer_fsm_default,    session_layer_fsm_default,	   session_layer_fsm_default,  session_layer_fsm_close   },
};


/* -----------------------------------------------------------------------
 * Timer helpers
 * -------------------------------------------------------------------- 
*/


static void session_layer_set_timeout(uint32_t timeout)
{
	osStatus_t os_result = osTimerStart(sessionTimerHandle, timeout);

	if (os_result != osOK)
	{
		PRINT_USER_IT_WARNING("Session timer could not be started\n\r");
	}
}

static void session_layer_remove_timeout(void)
{
	osTimerStop(sessionTimerHandle);
}


/* -----------------------------------------------------------------------
 * Internal helpers
 * -------------------------------------------------------------------- */


static void session_layer_reset_state(void)
{
	session_layer_fsm.curr_state  = SESSION_ST_IDLE;
	session_layer_fsm.curr_event  = SESSION_EV_NONE;
	session_layer_fsm.error_code  = 0;
	session_layer_fsm.retry_count = 0;

	memset(&ctx, 0, sizeof(ctx));
}


static void session_layer_send_close(session_close_reason_t reason)
{
	close_msg_t close_payload;
	close_payload.reason = reason;

	session_msg_t msg;
	msg.msg_type = SESSION_MSG_SESSION_CLOSE;
	msg.size     = sizeof(close_msg_t);
	msg.payload  = &close_payload;

	(void)UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID, ctx.second_device_addr, &msg, sizeof(msg));

	PRINT_USER_IT_INFO("Session close sent (reason=%u)\n", reason);
}


/* -----------------------------------------------------------------------
 * FSM action functions
 * -------------------------------------------------------------------- */

static session_layer_state_t session_layer_fsm_default(void)
{
	session_layer_fsm.curr_event = SESSION_EV_NONE;
	return session_layer_fsm.curr_state;
}


static session_layer_state_t session_layer_fsm_wait_eap(void)
{

	/* questa funzione viene eseguita dall'FSM Manager quando
	  1) quando siamo in ST_IDLE e viene richiamata esternamente la funzione Request_auth
	  2) quando siamo in ST_IDLE e ci arriva una richiesta di Sessione 
	*/

	session_layer_fsm.retry_count = 0;

	// dobbiamo triggerare la FSM dell'EAP con l'evento EAP_EV_START
	session_layer_fsm.eap_fsm->curr_ev = SESSION_EAP_EV_START;

	session_layer_set_timeout(SESSION_INFO_TIMEOUT);

	session_layer_fsm.curr_event = SESSION_EV_NONE;

	// transitiamo nello stato EAP LOADING
	return SESSION_ST_EAP_LOADING;
}


static session_layer_state_t session_layer_fsm_rec_eap_done(void)
{
	/* NOTA questa funzione della FSM deve essere eseguita a seguito di un trigger dell'evento SESSION_EV_EAP_DONE 
	   Questo Trigger dovrebbe essere dato dal layer EAP sottostante  
	*/
	
	// L'effetto è quello di transitare nello stato AUTH Complete da questo punto in poi è possibile stabilire sessioni */ 

	session_layer_fsm.curr_event = SESSION_EV_NONE;
	return SESSION_ST_AUTH_COMPLETE;
}


static session_layer_state_t session_layer_fsm_req_session(void) {

	/* questa funzione viene eseguita quando viene triggerato l'evento REQ_SESSION (causato dalla funzione Establish Session)*/ 

	// Si transita nello stato Wait Device (si aspetta che il Device sia pronto o meno)
	session_layer_fsm.curr_event = SESSION_EV_NONE;
	return SESSION_ST_WAIT_DEV;

}; 


static session_layer_state_t session_layer_fsm_reject(void) {

	// questa funzione viene eseguita quando viene triggerato l'evento DEV_BUSY 
	// NOTA: Dev Busy accade quando arriva un messaggio di Reject 

	// Si ritorna nello statp AUTH COMPLETE 
	session_layer_fsm.curr_event = SESSION_EV_NONE;
	return SESSION_ST_AUTH_COMPLETE;

}; 



static session_layer_state_t session_layer_fsm_start_kd(void)
{	

	/* NOTA: funzione che viene chiamata in due casi: 
		1) UN device ha fatto richiesta di Sessione (quindi è nello stato WAIT_DEV e arriva un messaggio DEV_READY che triggera l'evento omonimo)
		2) Il device non initiator ha già completato l'autenticazione, è libero e gli arriva una richiesta di session
		3) Il device non initator ha ricevuto una richiesta di sessione quando non era autenticato e quindi subito dopo l'autenticazione transita qui
	*/

	session_layer_remove_timeout();


	/* Si attiva la fsm del layer del Key Distribution */
	session_layer_fsm.kd_fsm->curr_ev = SESSION_KD_EV_START;

	session_layer_set_timeout(SESSION_DATA_TIMEOUT);

	session_layer_fsm.curr_event = SESSION_EV_NONE;
	
	// Si transita nello stato KD_LOADING
	return SESSION_ST_KD_LOADING;
}


static session_layer_state_t session_layer_fsm_set_active(void)
{
	/* NOTA: questa funzione viene richiamata quando la distribuzione della chiave di sessione è terminata
		La sessione dunque può cominciare. In particolare quando i Device sono nello stato KD_LOADING e viene triggherato l'evento KD_DONE
		per effetto del layer sottostante.  
	*/

	session_layer_remove_timeout();
	session_layer_fsm.retry_count = 0;

	/* Arm the session activity watchdog */
	session_layer_set_timeout(SESSION_DATA_TIMEOUT);

	session_layer_fsm.curr_event = SESSION_EV_NONE;

	// Si passa nello stato Session_ST_ACTIVE, da ora si possono inviare dati e riceverli
	return SESSION_ST_ACTIVE;
}


static session_layer_state_t session_layer_fsm_timeout(void)
{

}

static session_layer_state_t session_layer_fsm_expire(void)
{
	
}

static session_layer_state_t session_layer_fsm_close(void)
{
	
	session_layer_send_close(SESSION_CLOSE_NORMAL);
	session_layer_reset_state();

	RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);

	return SESSION_ST_IDLE;
}



/* -----------------------------------------------------------------------
 * Incoming message handlers
 * -------------------------------------------------------------------- */

static void handle_session_request(const session_msg_t *s_msg)
{

	const req_session_msg_t *session_req = (const req_session_msg_t *) s_msg->payload;

	memcpy(ctx.id_second_device, session_req->initiator_id, DEVICE_ID_LEN); 
	ctx.second_device_addr  = session_req->initiator_addr;
	ctx.role                = SESSION_RL_NOT_INITIATOR;

	session_layer_fsm.curr_event = SESSION_EV_REC_REQ_SESSION;
}

static void handle_appl_data(const session_msg_t *s_msg)
{
    /* Scarta dati se la sessione non è attiva */
    if (session_layer_fsm.curr_state != SESSION_ST_ACTIVE)
    {
        return;
    }

    if (s_msg->payload == NULL || s_msg->size == 0)
    {
        return;
    }

    uint16_t copy_len = s_msg->size;
    if (copy_len > SESSION_RX_BUFFER_SIZE)
    {
        copy_len = SESSION_RX_BUFFER_SIZE;
    }

    memcpy(session_rx_buf.data, s_msg->payload, copy_len);
    session_rx_buf.len     = copy_len;
    session_rx_buf.pending = true;
}


static void session_layer_handle_udp_data_cnf(const void *payload)
{
	const IP_G3UdpDataConfirm_t *udp_data_cnf = payload;
	assert(udp_data_cnf != NULL);

	if (udp_data_cnf->handle == session_layer_fsm.handle)
	{
		if (udp_data_cnf->status != G3_SUCCESS)
		{
			HANDLE_CNF_ERROR(HIF_UDP_DATA_CNF, udp_data_cnf->status);

			/* Treat a failed UDP delivery as a timeout so the retry logic fires */
			session_layer_fsm.curr_event = SESSION_EV_TIMEOUT;
		}
	}
}

static void SessionLayer_HandleControlRequest(const session_msg_t *s_msg){

	switch(s->msg_subtype)
	{
		case SESSION_MSG_REQ_SESSION: 
			session_layer_fsm.curr_event = SESSION_EV_REC_REQ_SESSION;
			break;

		case SESSION_MSG_DEV_READY:
			session_layer_fsm.curr_event = SESSION_EV_DEV_READY;
			break;

		case SESSION_MSG_REJECT_SESSION:
			session_layer_fsm.curr_event = SESSION_EV_DEV_BUSY;
			break;

		case SESSION_MSG_CLOSE_SESSION:
			session_layer_fsm.curr_event = SESSION_EV_CLOSE_SESSION;
			break;

		case SESSION_MSG_APPL:
			handle_appl_data(s_msg); 
			break;

		default: 
			break; 
	}

}

static void session_layer_handle_udp_data_ind(const void *payload)
{
	const IP_DataIndication_t    *udp_ind      = payload;
	assert(udp_ind != NULL);

	const IP_UdpDataIndication_t *udp_data_ind = hi_ipv6_extract_udp_from_ip(udp_ind);
	assert(udp_data_ind != NULL);

	/* Filter by port */
	if (udp_data_ind->dest_port != SECURE_SESSION_PROTOCOL_CNTRL_PORT &&
	    udp_data_ind->dest_port != SECURE_SESSION_PROTOCOL_DATA_PORT)
	{
		return;
	}

	uint8_t connection_id;
	if (udp_data_ind->dest_port == SECURE_SESSION_PROTOCOL_CNTRL_PORT)
	{
		connection_id = SECURE_SESSION_CNTRL_CONN_ID;
	}
	else
	{
		connection_id = SECURE_SESSION_DATA_CONN_ID;
	}

	udp_packet_t udp_packet_rx = UserG3_GetUdpData(connection_id);
	if (udp_packet_rx.payload == NULL)
	{
		return;
	}

	const session_msg_t *s_msg = (const session_msg_t *)udp_packet_rx.payload;

	switch (s_msg->msg_type)
	{
	case SESSION_MSG_EAP: 
		SessionEapPsk_MsgHandler(s_msg);
		break;
	case SESSION_MSG_KD:
		Kd_MsgHandler(s_msg);
		break;
	case SESSION_MSG_CTRL: 
		SessionLayer_HandleControlRequest(s_msg); 
		break;

	default:
		PRINT_USER_IT_WARNING("Session: unknown message type 0x%02X\n", s_msg->msg_type);
		break;
	}
}


/* -----------------------------------------------------------------------
 * Public API
 * -------------------------------------------------------------------- */


void SessionLayer_Init(void)
{
	session_layer_reset_state();
	session_layer_fsm.operation_counter = 0;
}


bool SessionLayer_MsgNeeded(const g3_msg_t *g3_msg)
{
	switch (g3_msg->command_id)
	{
	case HIF_UDP_DATA_CNF:
	case HIF_UDP_DATA_IND:
		return true;
	default:
		return false;
	}
}

void SessionLayer_MsgHandler(const g3_msg_t *g3_msg)
{
	assert(g3_msg->payload != NULL); /* All expected messages carry a payload */

	switch (g3_msg->command_id)
	{
	case HIF_UDP_DATA_CNF:
		session_layer_handle_udp_data_cnf(g3_msg->payload);
		break;
	case HIF_UDP_DATA_IND:
		session_layer_handle_udp_data_ind(g3_msg->payload);
		break;
	default:
		break;
	}
}


void SessionLayer_FsmManager(void)
{
	session_layer_fsm.operation_counter++;
	session_layer_fsm.curr_state =
			session_layer_fsm_func_tbl[session_layer_fsm.curr_state][session_layer_fsm.curr_event]();

	SessionEapPsk_FsmManager();
	// NOTA: dopo l'esecuzione della FSM di EAP è necessario controllare se siamo in EAP_SUCCESS.
	if(SESSION_ST_EAP_SUCCESS == session_layer_fsm.eap_fsm->curr_state){
		session_layer_fsm.curr_event = SESSION_EV_EAP_DONE; 
		
		/* Wake up the user task if it is not already running */
		if (user_task_operation_counter == session_layer_fsm.operation_counter)
		{
			RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);
		}

	} 


	KD_FsmManager();
}





/*API esterna del Session Layer */


void SessionLayer_RequestAuth(void)
{
	// Check first if Device is not already authenticated
	if(session_layer_fsm.curr_state != SESSION_ST_IDLE) return; 

	req_auth_msg_t req_msg;
	memcpy(req_msg.device_id, id_curr_device, DEVICE_ID_LEN); 
	req_msg.device_addr = DEVICE_IP_ADDR;

	session_msg_t msg;
	msg.msg_type = SESSION_MSG_REQ_AUTH;
	msg.size     = sizeof(req_auth_msg_t);
	msg.payload  = &req_msg;

	// Send request to Trusted
	session_layer_fsm.handle =
			UserG3_SendUdpData(SECURE_SESSION_CNTRL_CONN_ID, TRUSTED_IP_ADDR, &msg, sizeof(*msg));

	session_layer_set_timeout(SESSION_INFO_TIMEOUT);

	// Trigger event to change state from idle to eap loading 
	session_layer_fsm.curr_event = SESSION_EV_REQ_AUTH; 

	/* Wake up the user task if it is not already running */
	if (user_task_operation_counter == session_layer_fsm.operation_counter)
	{
		RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);
	}
}


bool SessionLayer_EstablishSession(uint8_t *device_id, ip6_addr_t ip_addr)
{
	bool success = true;

	/* NOTA: questa funzione è possibile richiamarla solo se abbiamo completato l'autenticazione 
	   Inoltre Non è possibile per ora stabilire una sessione se siamo impegnati in un'altra sessione 
	*/
	if(session_layer_fsm.curr_state != SESSION_ST_AUTH_COMPLETE){
		success = false; 
	}

	if (success)
	{
		memcpy(ctx.id_second_device, device_id, DEVICE_ID_LEN);
		ctx.second_device_addr = ip_addr; 
		ctx.role = SESSION_RL_INITIATOR; 

		// Triggera l'evento REQ_SESSION
		session_layer_fsm.curr_event = SESSION_EV_REQ_SESSION;

		/* Wake up the user task if it is not already running */
		if (user_task_operation_counter == session_layer_fsm.operation_counter)
		{
			RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);
		}
	}

	return success;
}


bool SessionLayer_SendData(const uint8_t *data, uint16_t len)
{
    if (data == NULL || len == 0)
    {
        return false;
    }

    /* Solo in stato ACTIVE è possibile inviare dati */
    if (session_layer_fsm.curr_state != SESSION_ST_ACTIVE)
    {
        return false;
    }


    session_msg_t msg;
    msg.msg_type = SESSION_MSG_APPL;
    msg.size     = len;
    msg.payload  = data;

    session_layer_fsm.handle =
            UserG3_SendUdpData(SECURE_SESSION_DATA_CONN_ID,
                               ctx.second_device_addr,
                               &msg, sizeof(msg));

    return true;
}

bool SessionLayer_ReceiveData()
{
    if (!session_rx_buf.pending)
    {
        *out_len = 0;
        return false;
    }

   // NOTA: QUi si dovrebbe avviare il processo di decifratura EAX decrypt
   // Per poter consumare il dato 

    
    session_rx_buf.pending = false;
    session_rx_buf.len     = 0;

    return true;
}


void SessionLayer_CloseSession(void)
{
	if (session_layer_fsm.curr_state != SESSION_ST_ACTIVE)
	{
		return; /* Nothing to close */
	}

	session_layer_fsm.curr_event = SESSION_EV_CLOSE_SESSION;

	/* Wake up the user task so the FSM runs immediately */
	if (user_task_operation_counter == session_layer_fsm.operation_counter)
	{
		RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);
	}
}


void SessionLayer_TimeoutCallback(void *argument)
{
	UNUSED(argument);

	session_layer_fsm.curr_event = SESSION_EV_TIMEOUT;

	RTOS_PUT_MSG(user_queueHandle, USER_MSG, NULL);
}

#endif /* ENABLE_SECURE_SESSION */
/****************************END OF FILE****/