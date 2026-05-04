#ifndef EAP_PSK_CRYPTO_H
#define EAP_PSK_CRYPTO_H

#include <stdint.h>
#include <stdbool.h>
#include "session_eap_psk.h"

/* Random generation */
void eap_psk_generate_rand(uint8_t *rand, uint16_t size);

/* MAC calculations */
void eap_psk_compute_mac_p(eap_psk_context_t *ctx); // Store result in mac_p
void eap_psk_compute_mac_s(eap_psk_context_t *entry); // store result in mac_s

/* MAC verification */
bool eap_psk_verify_mac_p(eap_psk_context_t *ctx);
bool eap_psk_verify_mac_s(eap_psk_context_t *ctx); 

/* Pchannel calculations */
void eap_psk_build_pchannel0(eap_psk_context_t *ctx, pchannel_flags_t flags); 
void eap_psk_build_pchannel1(eap_psk_context_t *ctx); 

/* Pchannel verifications */
bool eap_psk_verify_pchannel0(eap_psk_context_t *ctx); 
bool eap_psk_verify_pchannel1(eap_psk_context_t *ctx); 


#endif
