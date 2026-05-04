#ifndef EAP_PSK_HELPER_H
#define EAP_PSK_HELPER_H

#include <stdbool.h>
#include "session_eap_psk.h"

/* Validation*/
bool eap_psk_validate_msg1(const eap_psk_msg1_t *msg);
bool eap_psk_validate_msg2(const eap_psk_msg2_t *msg, const session_eap_entry_t *entry);
bool eap_psk_validate_msg3(const eap_psk_msg3_t *msg, const session_eap_psk_context_t *ctx);
bool eap_psk_validate_msg4(const eap_psk_msg3_t *msg, const session_eap_entry_t *entry);

/* Message builders */
void eap_psk_build_msg1(eap_psk_msg1_t *msg, session_eap_entry_t *entry, session_msg_t* out_msg); 
void eap_psk_build_msg2(eap_psk_msg2_t *msg, session_eap_psk_context_t *ctx, session_msg_t* out_msg);
void eap_psk_build_msg3(eap_psk_msg3_t *msg, session_eap_entry_t *entry, session_msg_t* out_msg);
void eap_psk_build_msg4(eap_psk_msg4_t *msg, const session_eap_psk_context_t *ctx, session_msg_t* out_msg);


/* Decode */
void decode_msg1(const eap_psk_msg1_t *msg, session_eap_psk_context_t *ctx);
void decode_msg2(const eap_psk_msg2_t *msg, session_eap_entry_t *entry);



#endif


