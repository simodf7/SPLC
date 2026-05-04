/*************
 * AES EAX MODE 
 * Author: Simone Di Fraia
 * Based on The EAX MODE of Operation 
 * Copyright 2026
**********/ 

#ifndef AES_EAX_H_
#define AES_EAX_H_

#include "aes_cmac.h"
#include "aes_types.h"

int sm_software_aes_eax_encrypt(eax_params *eax_p, BYTE *output, size_t tag_len, const WORD key[], int keysize);  
int sm_software_aes_eax_decrypt(eax_params *eax_p, BYTE *valid, BYTE *output, size_t tag_len, const WORD key[], int keysize); 


int sm_hardware_aes_eax_encrypt(eax_params *eax_p, uint8_t *output, size_t tag_len, const uint8_t *key); 
int sm_hardware_aes_eax_decrypt(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const uint8_t *key); 


#endif /* AES_EAX_H_ */ 
