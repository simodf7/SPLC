#ifndef EAP_PSK_HELPER_H
#define EAP_PSK_HELPER_H

#include <stdbool.h>
#include "session_kd.h"

/* Validation*/
bool kd_validate_msg2(const kd_msg2_t *msg, kd_context_t *ctx); 
bool kd_validate_msg3(const kd_msg3_t *msg, kd_context_t *ctx); 

/* Message builders */
void kd_build_msg1(kd_msg1_t *msg, kd_context_t *ctx, session_msg_t *out_msg); 
void kd_build_msg2(kd_msg2_t *msg, kd_context_t *ctx, session_msg_t *out_msg); 
void kd_build_msg3(kd_msg3_t *msg, kd_context_t *ctx, session_msg_t *out_msg); 

/* Decode */
void decode_msg1(const session_msg_t *msg, kd_context_t *ctx);


#endif


