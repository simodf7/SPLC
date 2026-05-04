/*
  ******************************************************************************
  * @file    session_eap_psk.h
  * @author  Simone Di Fraia
  * @brief   Header file for the Session Layer implementation.
  *
  *******************************************************************************/
*/ 

#ifndef SESSION_EAP_PSK_H
#define SESSION_EAP_PSK_H

#ifdef __cplusplus
extern "C" {
#endif

/* Inclusions */
#include <settings.h>
#include <hi_msgs_impl.h>
#include "session_comm.h"

// #if ENABLE_SECURE_SESSION

typedef enum session_eap_psk_state_enum
{
    SESSION_ST_EAP_IDLE,
#if TRUSTED
    SESSION_ST_EAP_WAIT_SECOND,
    SESSION_ST_EAP_WAIT_FOURTH,
#else
    SESSION_ST_EAP_WAIT_FIRST,
    SESSION_ST_EAP_WAIT_THIRD,
    SESSION_ST_EAP_WAIT_ACCEPT,
#endif
    SESSION_ST_EAP_SUCCESS,
    SESSION_ST_EAP_CNT
} session_eap_psk_state_t;


typedef enum session_layer_eap_event_enum
{
    SESSION_EV_EAP_NONE = 0,
    SESSION_EV_EAP_START,
#if TRUSTED 
	SESSION_EV_EAP_REC_SECOND, 
	SESSION_EV_EAP_REC_FOURTH,  
#else 
    SESSION_EV_EAP_REC_FIRST,   
    SESSION_EV_EAP_REC_THIRD,  
    SESSION_EV_EAP_REC_ACCEPT, 
#endif 
    SESSION_EV_EAP_TIMEOUT,
    SESSION_EV_EAP_CNT
} session_layer_eap_event_t;


typedef struct session_eap_psk_context_str{

    uint8_t    eap_id; 
    uint8_t    rand_s[16]; 
    uint8_t    rand_p[16]; 
    uint8_t    mac_s[16]; 
    uint8_t    mac_p[16];
    pchannel_t pchannel0; 
    pchannel_t pchannel1; 

} session_eap_psk_context_t; 


typedef struct session_eap_psk_fsm_str
{
  session_eap_psk_state_t         curr_state;
  session_layer_eap_event_t       curr_event;
  session_eap_psk_error_code_t    error_code;

  uint8_t                         handle;
  uint32_t                        operation_counter;
} session_eap_psk_fsm_t;








/* Public Functions */
void								SessionEapPsk_Init(void);
void								SessionEapPsk_MsgHandler(const session_msg_t *s_msg);
void								SessionEapPsk_FsmManager(const session_msg_t *s_msg);

// #endif /* ENABLE_SECURE_SESSION */

#ifdef __cplusplus
}
#endif

#endif /* SESSION_EAP_PSK_H */

/***************************/