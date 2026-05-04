#ifndef EAP_PSK_CRYPTO_H
#define EAP_PSK_CRYPTO_H

#include <stdint.h>
#include <stdbool.h>
#include "session_kd.h"

/* Random generation */
void kd_generate_rand(uint8_t *buf, uint16_t size);

/* EAX encryption / decryption */
void kd_eax_ticket(const char *key_label, kd_context_t *ctx);
void kd_eax_encrypt_msg1(const char *key_label, uint8_t msg_type, uint8_t msg_subtype, size_t size, kd_context_t *ctx);
void kd_eax_decrypt_msg1(const char *key_label, uint8_t msg_type, uint8_t msg_subtype, size_t size, kd_context_t *ctx);
bool kd_eax_decrypt_ticket(const char *key_label, kd_context_t *ctx);

/* Key derivation */
void kd_derive_session_key(const char *key_label, kd_context_t *ctx);

/* Key storage */
void save_key(const char *key_label, const uint8_t *key);

/* MAC calculations */
void kd_generate_mac(const char *key_label, kd_context_t *ctx);

/* MAC verification */
bool kd_verify_mac(const char *key_label, const uint8_t *expected_mac, const uint8_t *nonce, uint32_t session_id);


#endif
