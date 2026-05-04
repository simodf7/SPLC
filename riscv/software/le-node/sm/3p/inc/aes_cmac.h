/***********
 * AES-CMAC (Cipher Based Message Authentication Code)   
 * Implenetation is based on RFC 4493: The AES-CMAC Algorithm 
 * Author: Simone Di Fraia
 * Copyright 2026
**********/ 

#ifndef AES_CMAC_H_
#define AES_CMAC_H_

#define AES_BLOCK_SIZE 16

#include "aes_ctr.h"

typedef struct {
        uint8_t k1[AES_BLOCK_SIZE];
        uint8_t k2[AES_BLOCK_SIZE];
} keys_cmac;


/* Helper Functions */ 

void shift_string(uint8_t *b);
int get_msb_value(uint8_t *bt); 


/****** 
 * NOTA: sono definite due funzioni simili aes_cmac e aes_cmac_with_keys
 * aes_cmac richiama la funzione di generazione delle sottochiavi mentre aes_cmac no
 * Il senso di questo è che vogliamo evitare un inutile rigenerazione delle sottochiavi 
 * nel caso in cui si usa aes_cmac ripetutamente come nella funzione di derivazione chiavi ckdf 
******/ 

int sm_software_aes_cmac_subkey_gen(keys_cmac *k_cmac, const WORD key[], int keysize); 
int sm_software_aes_cmac(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, const WORD key[], int keysize); 
int sm_software_aes_cmac_with_keys(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, keys_cmac *k_cmac, const WORD key[], int keysize); 
int sm_software_aes_ckdf_counter(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, const WORD key[], int keysize); 


int sm_hardware_aes_cmac_subkey_gen(keys_cmac *kmac, const uint8_t *key); 
int sm_hardware_aes_cmac(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t *key); 
int sm_hardware_aes_cmac_with_keys(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, keys_cmac *k_cmac); 
int sm_hardware_aes_ckdf_feedback(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t iv[], const uint8_t *key); 
int sm_hardware_aes_ckdf_counter(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t *key); 

#endif /* AES_CMAC_H_ */ 
