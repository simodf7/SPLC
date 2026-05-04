#ifndef AES_TYPES_H_
#define AES_TYPES_H_

#include <stdint.h>
#include <stddef.h>

typedef struct {
    uint8_t *nonce;
    size_t nonce_len;
    uint8_t *in;
    size_t in_len;
    uint8_t *header;
    size_t header_len;
} eax_params;

typedef struct {
    char *new_keysID;
    size_t *keys_len;
    size_t keys_tot_len;
    uint8_t num_keys_gen;
} kd_params;

#endif
