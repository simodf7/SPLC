#define DEFINE_SEHEAD
#include "se.h"
#include "smapi.h"
#include "user.h"
#include "errno.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>




// Funzioni di test per la verifica del funzionamento dell'enclave
long func1(void *p)
{
    int i = *(int *)p;
    return i + 1;
}

long func2(void *p)
{
    int i = *(int *)p;
    return 2*i;
}

/***** 
 * Funzione dell'enclave per la generazione di Nonce 
 * Es: RAND_S, RAND_P o Nonce per EAX in EAP_PSK
 * Nonce_len è la dimensione in byte del Nonce da Generare  
*****/ 

long func3(void *p) 
{

    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk*)p;
    
    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;
    if (sh->nonce_len == 0 || sh->nonce_len > NONCE_LEN_MAX) return -1;


    int num_times = sh->nonce_len / 4; 
    if(sh->nonce_len % 4 != 0) num_times +=1; 


    uint32_t r = 0; 
    for(int i = 0; i < num_times; i++) {
	r = (uint32_t) smapi_random_num(); 
	memcpy(sh->input + i * 4, &r, 4);
    } 

    return 0; 
} 


/* 
 * EAP-PSK 1: Function to derive AK (Auth Key) and KDK (Key Derivation Key) 
 * from PSK (Pre-Shared Key) 
 *

struct shared_crypto_eap_psk{
	uint8_t input[16]; 
	char src_keyID[KEY_ID_MAX]; 
	char new_keysID[2][KEY_ID_MAX]; 
	long retval; 
}; 
 
*/
long func4(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;


    // 2) Deriva la nuova chiave usando src_keyID e seed=digest
    //    new_keyID deve essere fornito nella shared memory
    if (sh->src_keyID[0] == '\0' ||	
	sh->new_keysID[0][0] == '\0' ||
	sh->new_keysID[1][0] == '\0') {
        sh->retval = -1;
        return -1;
    }

/** 
typedef struct {
    char *new_keysID;
    size_t *keys_len;
    size_t keys_tot_len;
    uint8_t num_keys_gen;
} kd_params;
**/ 
 

    kd_params kd_p; 
    char nkID[2][KEY_ID_MAX];
    strncpy(nkID[0], sh->new_keysID[0], KEY_ID_MAX-1); 
    strncpy(nkID[1], sh->new_keysID[1], KEY_ID_MAX-1); 

    kd_p.new_keysID = (char *) nkID; 

    size_t keys_len[2] = {0}; 
    keys_len[0] = 16; 
    keys_len[1] = 16; 
   
    kd_p.keys_len = keys_len; 
    kd_p.keys_tot_len = 32; 
    kd_p.num_keys_gen = 2; 


    r = smapi_derive_key_mctr(&kd_p, sh->src_keyID, sh->input, 16); 	
    if(!r)
    {
	sh->retval = r;
	return r; 
    } 
    
    sh->retval = 0;
    return 0;
}

/* 
 * EAP-PSK 2: Function to derive TEK (Transient Eap Key) and MSK (Master Session Key) 
 * from KDK (Key Derivation Key)  
*/
long func5(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;


    if (sh->src_keyID[0] == '\0' ||	
	sh->new_keysID[0][0] == '\0' ||
	sh->new_keysID[1][0] == '\0') {
        sh->retval = -1;
        return -1;
    }

    kd_params kd_p; 
    char nkID[2][KEY_ID_MAX];
    strncpy(nkID[0], sh->new_keysID[0], KEY_ID_MAX-1); 
    strncpy(nkID[1], sh->new_keysID[1], KEY_ID_MAX-1); 

    kd_p.new_keysID = (char *) nkID; 
   
    size_t keys_len[2] = {0}; 
    keys_len[0] = 16; 
    keys_len[1] = 64; 
   
    kd_p.keys_len = keys_len; 
    kd_p.keys_tot_len = 80; 
    kd_p.num_keys_gen = 2; 


    r = smapi_derive_key_mctr(&kd_p, sh->src_keyID, sh->input, 16); 	
    if(!r)
    {
	sh->retval = r;
	return r; 
    } 
    
    sh->retval = 0;
    return 0;
}

/********
static inline int smapi_hw_aes_cmac(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)

* Function to generate Message Authentication Code in EAP Exchange 
* NOTE: THIS IS FOR MAC_P
* MAC_P = AES_CMAC_128(AK, ID_P || ID_S || RAND_S || RAND_P) 

        char src_keyID[KEY_ID_MAX];
	uint8_t id_p[16]; 
	uint8_t id_s[16];
	uint8_t rand_s[16]; 
	uint8_t rand_p[16];
	uint8_t mac[16];
	long retval;							
 
********/ 


long func6(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk *) p; 

    int r;  
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
	sh->retval = -1;
	return -1;
    }
    
    uint8_t input[2 * DEVICE_ID_LEN + 2 * NONCE_LEN_MAX]; 
    memcpy(input, sh->id_p, DEVICE_ID_LEN); 
    memcpy(input + DEVICE_ID_LEN, sh->id_s, DEVICE_ID_LEN); 
    memcpy(input + 2 * DEVICE_ID_LEN, sh->rand_s, NONCE_LEN_MAX); 
    memcpy(input + 2 * DEVICE_ID_LEN + NONCE_LEN_MAX, sh->rand_p, NONCE_LEN_MAX); 
 
    r = smapi_aes_cmac(input, 2 * DEVICE_ID_LEN + 2 * NONCE_LEN_MAX, sh->mac, 16, sh->src_keyID);
    if(!r) 
    {
	sh->retval = r; 
	return r; 
    } 	    
    
    sh->retval = 0; 
    return sh->retval;
}; 

/*****
* Function to generate Message Authentication Code in EAP Exchange 
* NOTE: THIS IS FOR MAC_S 
* MAC_S = AES_CMAC_128 (AK, ID_S || RAND_P); 
*****/ 

long func7(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk *) p; 

    int r;  
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
	sh->retval = -1;
	return -1;
    }
    
    uint8_t input[DEVICE_ID_LEN + NONCE_LEN_MAX]; 
    memcpy(input, sh->id_s, DEVICE_ID_LEN); 
    memcpy(input + DEVICE_ID_LEN, sh->rand_p, NONCE_LEN_MAX); 
  
    r = smapi_aes_cmac(input, DEVICE_ID_LEN + NONCE_LEN_MAX, sh->mac, 16, sh->src_keyID);
    if(!r) 
    {
	sh->retval = r; 
	return r; 
    } 	    
    
    sh->retval = 0; 
    return sh->retval;
}; 


/*****
 * EAP-PSK EAX to create Protected Channel PChannel 
 * PARAMS: 
	const uint8_t nonce[4]; 
	const uint8_t pt; 
	const uint8_t header[22]; 
	char src_keyID[KEY_ID_MAX]; 
	uint8_t ct; // ciphertext  
	uint8_t tag[16]; // tag
	long retval;  
 * FUNCTION: static inline int smapi_hw_aes_eax(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID)
 *
 * CipherText (1), TAG (16) = EAX(TEK, Nonce (4) + Header (22) + PlainText (1));  
*****/


long func8(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk *)p;
    int r;  
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }
    
    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_EAX_EAP]; 
    eax_p.nonce = nonce;
    memcpy(eax_p.nonce, sh->nonce, NONCE_LEN_EAX_EAP);  
    eax_p.nonce_len = NONCE_LEN_EAX_EAP; 
    
    uint8_t in = sh->pt; 
    eax_p.in = &in; 
    eax_p.in_len = 1; 

    uint8_t header[HEADER_LEN_EAP]; 
    eax_p.header = header;
    memcpy(eax_p.header, sh->header, HEADER_LEN_EAP);  
    eax_p.header_len = HEADER_LEN_EAP; 

    uint8_t output[1 + TAG_LEN]; // 1 (in_len) + 16 (tag_len)  
    r = smapi_aes_eax_encrypt(&eax_p, output, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

    sh->ct = output[0]; 
    memcpy(sh->tag, output + 1, TAG_LEN); 

    
    sh->retval = 0; 
    return sh->retval;
}
 

/* Decryption counterpart of func8 
static inline int smapi_hw_aes_eax_decrypt(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const char *keyID)
*/ 
long func9(void *p)
{
    struct shared_crypto_eap_psk *sh = (struct shared_crypto_eap_psk *)p;
    int r;  
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }
    
    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_EAX_EAP]; 
    eax_p.nonce = nonce;
    memcpy(eax_p.nonce, sh->nonce, NONCE_LEN_EAX_EAP);  
    eax_p.nonce_len = NONCE_LEN_EAX_EAP; 
   
    // Questa volta come input abbiamo il ciphertext e il tag ricevuto concatenati 
    uint8_t input[1 + TAG_LEN]; 
    eax_p.in = input; 
    eax_p.in_len = 1 + TAG_LEN;  
    memcpy(eax_p.in, &sh->ct, 1); 
    memcpy(eax_p.in + 1, sh->tag, TAG_LEN);     
   

    uint8_t header[HEADER_LEN_EAP]; 
    eax_p.header = header;
    memcpy(eax_p.header, sh->header, HEADER_LEN_EAP);  
    eax_p.header_len = HEADER_LEN_EAP; 

    r = smapi_aes_eax_decrypt(&eax_p, &sh->valid, &sh->pt, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    
   

    sh->retval = 0; 
    return sh->retval;
}

/*
* Registrare le funzioni di servizio nell'enclave
* permette di potervi accedere dall'esterno facendo
* riferimento al rispettivo indice associato.
* E' un'operazione necessaria per richiamare le 
* funzioni di servizio dall'esterno.
*/

REGISTER_SE_SERVICE(func1, 0); // Test 1
REGISTER_SE_SERVICE(func2, 1); // Test 2
REGISTER_SE_SERVICE(func3, 2); // Generate Nonce 
REGISTER_SE_SERVICE(func4, 3); // Derive AK/KDK from PSK 
REGISTER_SE_SERVICE(func5, 4); // Derive TEK/MSK from KDK
REGISTER_SE_SERVICE(func6, 5); // Generate MAC_P 
REGISTER_SE_SERVICE(func7, 6); // Generate MAC_S
REGISTER_SE_SERVICE(func8, 7); // EAX Encryption
REGISTER_SE_SERVICE(func9, 8); // EAX Decryption   
