/**********
 * AES in Counter Mode
 * Author: Simone Di Fraia
 * Copyright 2026
 * NOTA: è presente anche una versione Modified Counter Mode utilizzata in EAP-PSK 
**********/ 

#ifndef AES_CTR_H_
#define AES_CTR_H_

#include "sm_hardware_aes.h" // hardware functions
#include "aes.h" // software functions

int sm_software_aes_encrypt_ctr(const BYTE pt[], BYTE ct[], size_t in_len, const WORD key[], int keysize, const BYTE counter[]); 
int sm_software_aes_encrypt_mctr(const BYTE pt[], BYTE ct[], size_t in_len, size_t out_len, const WORD key[], int keysize); 

int sm_hardware_aes_encrypt_ctr(const uint8_t *pt, uint8_t *ct, size_t in_len, const uint8_t *key, uint8_t *counter);  
int sm_hardware_aes_encrypt_mctr(const uint8_t *pt, uint8_t *ct, size_t in_len, size_t out_len, const uint8_t *key); 

/* Helper Functions */
void increment_counter(uint8_t *counter, size_t len); 

#endif /* AES_CTR_H_ */ 
