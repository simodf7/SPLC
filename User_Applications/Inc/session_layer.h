/**
  ******************************************************************************
  * @file    session_layer.h
  * @author  
  * @brief   Header file for the Session Layer implementation.
  *
  *******************************************************************************/


#ifndef SESSION_LAYER_H
#define SESSION_LAYER_H

#ifdef __cplusplus
extern "C" {
#endif

/* Inclusions */
#include <settings.h>
#include <hi_msgs_impl.h>

#if ENABLE_SECURE_SESSION

/* Custom types */
typedef enum user_image_transfer_error_code_enum
{
	uit_no_error,
	uit_info_timeout_error,
	uit_data_timeout_error,
	uit_crc_error,
	uit_aborted,
} user_image_transfer_error_code_t;

/* Public Functions */
void								SessionLayer_Init(void);
bool								SessionLayer_MsgNeeded(const g3_msg_t *msg);
void								SessionLayer_MsgHandler(const g3_msg_t *msg);
void								SessionLayer_FsmManager(void);


void                SessionLayer_RequestAuth(void)
bool                SessionLayer_EstablishSession(uint8_t *device_id, ip6_addr_t ip_addr); 
void 								SessionLayer_SendData(void); 
void 								SessionLayer_ReceiveData(void); 
void								SessionLayer_CloseSession(void); 


#endif /* ENABLE_SECURE_SESSION */

#ifdef __cplusplus
}
#endif

#endif /* SESSION_LAYER_H */

/***************************/