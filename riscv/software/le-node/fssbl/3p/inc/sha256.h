/*
 * SHA-256 internal definitions
 * Copyright (c) 2003-2011, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef SHA256_H
#define SHA256_H

#include <stdint.h>
#include <stddef.h>

#define SHA256_BLOCK_SIZE 64

struct sha256_state {
	uint64_t length;
	uint32_t state[8], curlen;
	uint8_t buf[SHA256_BLOCK_SIZE];
};

void sha256_init(struct sha256_state *md);
int sha256_process(struct sha256_state *md, const unsigned char *in,
		   unsigned long inlen);
int sha256_done(struct sha256_state *md, unsigned char *out);

int sha256_vector(size_t num_elem, const uint8_t *addr[], const size_t *len,
		  uint8_t *mac);

#endif /* SHA256_H */