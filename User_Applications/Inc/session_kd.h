/**
  ******************************************************************************
  * @file    session_layer.h
  * @author  
  * @brief   Header file for the Session Layer implementation.
  *
  *******************************************************************************/


#ifndef SESSION_KD_H
#define SESSION_KD_H

#ifdef __cplusplus
extern "C" {
#endif

/* Inclusions */
#include <settings.h>
#include <hi_msgs_impl.h>
#include "session_comm.h"


typedef struct kd_context_str{

  uint8_t      valid; 
  uint8_t      id_session; 
  uint8_t      nonce[NONCE_LEN]; 

  uint8_t      tagTicket[TAG_LEN]; 
  uint8_t      TicketB[TICKET_LEN]; 
  uint8_t      sks[SESSION_KEY_LEN]; 

  uint8_t      mac[16]; 

  uint8_t      tagMSG[TAG_LEN]; 
  uint8_t      cipherMSG1[MSG1_CPAYLOAD_LEN]; 

} kd_context_t; 



#if ENABLE_SECURE_SESSION

/* Public Functions */
void								Kd_Init(void); 
void								Kd_MsgHandler(const session_msg_t *msg);
void								Kd_FsmManager(void);


#endif /* ENABLE_SECURE_SESSION */

#ifdef __cplusplus
}
#endif

#endif /* SESSION_TICKETING_H */

/***************************/