#define DEFINE_SEHEAD
#include "se.h"
#include "smapi.h"
#include "user.h"
#include "errno.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

/* 
### Aspetti Crittografici 

Ricordiamo che AES-CKDF (Counter Mode): 
K(i) = AES-CMAC-128(Keying Input, Counter || Label || 0x00 || Context || [Length]_2)

* K-AT = AES-CMAC(MSK-AT, Counter || "KDP-AT" || 0x00 || ID-A || ID-T || Length)
* K-TB = AES-CMAC(MSK-TB, Counter || "KDP-TB" || 0x00 || ID-T || ID-B || Length)

Il Trusted deriva dalla sua PSK una chiave che usa per derivare le SessionID e le SK 
* Master Key Trusted (MKT) = AES-CMAC(ROOT-KEY-TRUSTED, Counter || "KD-MK" || 0x00 || ID-T || Length) 
* SKAB = AES-CMAC(MKT, Counter || "SESSION-AB" || 0x00 || ID-A || ID-B || SessionID || NonceT || Length)
* SessionID = AES-CMAC(MKT, Counter || "SESSION-ID" || 0x00 || ID-A || ID-B || Nonce-T || Length)

MAC: 
* MAC-A = AES-CMAC-128(SKAB, SessionID || NonceA); 
* MAC-B = AES-CMAC-128(SKAB, SessionID || NonceB); 


TicketB, TagTicketB = EAX(K\_TB, NonceT, SessionID || ID-A || ID-B) 
Payload cifrato, Tag = EAX(K\_AT, NonceT, Header || Payload) 
*/ 




/***** 
 * Funzione dell'enclave per la generazione di Nonce 
 * Es: RAND_S, RAND_P o Nonce per EAX in EAP_PSK
 * Nonce_len è la dimensione in byte del Nonce da Generare  
*****/ 

long func1(void *p) 
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    
    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;
    if (sh->nonce_len == 0 || sh->nonce_len > NONCE_LEN_MAX) return -1;


    int num_times = sh->nonce_len / 4; 
    if(sh->nonce_len % 4 != 0) num_times +=1; 


    uint32_t r = 0; 
    for(int i = 0; i < num_times; i++) {
	r = (uint32_t) smapi_random_num(); 
	memcpy(sh->nonce_buf + i * 4, &r, 4);
    } 

    return 0; 
} 


/* 
 * KDP 2: Function to derive K (_AT or _TB) from MSK (Master Session Key)
 * K is the key used by Trusted to Eax-encrypt MSG #1 and to Eax-Encrypt TicketB 

 Params needed: 
	char src_keyID[KEY_ID_MAX]; 
	char new_keyID[KEY_ID_MAX]; 
	char label[LABEL_MAX]; 
	uint8_t id_device[16]; 
	uint8_t id_trusted[16]; 
	long retval; 
 
*/
long func2(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0' ||	
	sh->new_keyID[0] == '\0' ||
	sh->label[0] == '\0') {
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
    char nkID[KEY_ID_MAX];
    strncpy(nkID, sh->new_keyID, KEY_ID_MAX-1); 

    kd_p.new_keysID = nkID; 

    size_t keys_len = 64; 
    kd_p.keys_len = &keys_len; 

    kd_p.keys_tot_len = 64; 
    kd_p.num_keys_gen = 1; 


    // Costruzione dell'input 
    // K-AT = AES-CMAC(MSK-AT, Counter || "KDP-AT" || 0x00 || ID-A || ID-T || Length)
    uint8_t input[LABEL_MAX + 1 + 2 * DEVICE_ID_LEN + 4] = {0};  // 1 = 0x00, 32 = Total Sum of IDS, Lenght = Byte dimension of KO  
    size_t pos = 0; 
	
    // Il primo campo è label 
    size_t label_len = strlen(sh->label); 
    memcpy(input, sh->label, label_len); 
    pos += label_len; 	

    // il secondo campo è 0x00
    input[pos++] = 0x00; 

    // il terzo campo è Context (concatenazione dei 2 ID) 
    memcpy(input + pos, sh->id_deviceA, DEVICE_ID_LEN);
    pos += DEVICE_ID_LEN;  
    memcpy(input + pos, sh->id_trusted, DEVICE_ID_LEN); 
    pos += DEVICE_ID_LEN; 

    // il quarto campo è la rappresentazione binaria della dimensione in byte della dimensione 
    // della Keying Output 
    // (64 byte =  bit)
    // dunque è pari a 0x00_00_02_00
    input[pos + 3] = 0x02; 
    pos += 4; 

    r = smapi_derive_key_ckdf(&kd_p, sh->src_keyID, input, pos); 
    if(!r)
    {
	sh->retval = r;
	return r; 
    } 
    
    sh->retval = 0;
    return 0;
}

/* 
 * Trusted
 * KDP 3: Function to derive MKT from Root Key
 * MKT is the key used by Trusted to derive Session Key SKAB and SessionID
 
 Params needed: 
	char src_keyID[KEY_ID_MAX]; 
	char new_keyID[KEY_ID_MAX]; 
	char label[LABEL_MAX]; 
	uint8_t id_trusted[16]; 
	long retval; 
 
* Master Key Trusted (MKT) = AES-CMAC(ROOT-KEY-TRUSTED, Counter || "KD-MK" || 0x00 || ID-T || Length) 
*/

long func3(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0' ||	
	sh->new_keyID[0] == '\0' ||
	sh->label[0] == '\0') {
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
    char nkID[KEY_ID_MAX];
    strncpy(nkID, sh->new_keyID, KEY_ID_MAX-1); 

    kd_p.new_keysID = nkID; 

    size_t keys_len = 64; 
    kd_p.keys_len = &keys_len; 

    kd_p.keys_tot_len = 64; 
    kd_p.num_keys_gen = 1; 


    // Costruzione dell'input 
    uint8_t input[LABEL_MAX + 1 + DEVICE_ID_LEN + 4] = {0};  // 1 = 0x00, 16 = ID_Trusted, Lenght = Byte dimension of counter  
    size_t pos = 0; 

    // Il primo campo è label 
    size_t label_len = strlen(sh->label); 
    memcpy(input, sh->label, label_len); 
    pos += label_len; 	

    // il secondo campo è 0x00
    input[pos++] = 0x00; 

    // il terzo campo è Context 
    memcpy(input + pos, sh->id_trusted, DEVICE_ID_LEN); 
    pos += DEVICE_ID_LEN; 

    // 0x00_00_02_00
    input[pos + 3] = 0x02; 
    pos += 4; 

    r = smapi_derive_key_ckdf(&kd_p, sh->src_keyID, input, pos); 
    if(!r)
    {
	sh->retval = r;
	return r; 
    } 
    
    sh->retval = 0;
    return 0;
}

/* 
 * Trusted
 * KDP 4: Function to derive SessionKey from Master Key of trusted
 
 Params needed: 
	char src_keyID[KEY_ID_MAX]; 
	char label[LABEL_MAX];
	uint8_t id_session; 
        uint8_t id_deviceA[16]; 
	uint8_t id_deviceB[16]; 
	uint8_t nonceT[16]; 	
	long retval; 
 
* SKAB = AES-CMAC(MKT, Counter || "SESSION-AB" || 0x00 || ID-A || ID-B || SessionID || NonceT || Length)
*/
long func4(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0' ||	
	sh->label[0] == '\0') {
        sh->retval = -1;
        return -1;
    }


    // Costruzione dell'input 
    // LABEL_MAX + 0x00 (1 byte) + ID_A e ID_B (2 * 16 Byte) + SessionID (1 byte) + NonceT (16 Byte) + Lenght (4 Byte) 
    uint8_t input[LABEL_MAX + 1 + 2 * DEVICE_ID_LEN + 1 + NONCE_LEN_MAX + 4] = {0}; 
    size_t pos = 0; 

    // Il primo campo è label 
    size_t label_len = strlen(sh->label); 
    memcpy(input, sh->label, label_len); 
    pos += label_len; 	

    // il secondo campo è 0x00
    input[pos++] = 0x00; 

    // il terzo campo è Context 
    memcpy(input + pos, sh->id_deviceA, DEVICE_ID_LEN); 
    pos += DEVICE_ID_LEN; 

    memcpy(input + pos, sh->id_deviceB, DEVICE_ID_LEN); 
    pos += DEVICE_ID_LEN; 
   
    input[pos++] = sh->id_session; 

    memcpy(input + pos, sh->nonceT, DEVICE_ID_LEN); 
    pos += DEVICE_ID_LEN; 
    
    input[pos + 3] = 0x02; 
    pos += 4; 

    /* NOTA IMPORTANTE: NON USIAMO SMAPI_DERIVE_KEY_CKDF 
     * NON VOGLIAMO SALVARE QUESTA CHIAVE NELLO STORAGE SICURO PERCHè deve Essere inserita 
     * nel messaggio SPLC o quanto meno questa è la mia idea. 
     * L'alternativa sarebbe usare la smapi di derivazione e poi recuperarla con 
     * una funzione specifica. 
    */

    r = smapi_aes_ckdf(input, pos, sh->skS, SESSION_KEY_LEN, sh->src_keyID);  
    if(!r)
    {
	sh->retval = r;
	return r; 
    } 
    
    sh->retval = 0;
    return 0;
}


/* 
 * Trusted
 * KDP 5: Generate a Ticket for Device B and Encrypt with AES-EAX
 
 Params needed: 
	char src_keyID[KEY_ID_MAX]; 
	uint8_t id_session; 
        uint8_t id_deviceA[16]; 
	uint8_t id_deviceB[16]; 
	uint8_t nonceT[16]; 
        uint8_t CTicket[97]; 
	uint8_t TagTicket[16]; 	
	long retval; 

* TicketB, TagTicketB = EAX(K\_TB, NonceT, SessionID || ID-A || ID-B)
*/
long func5(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }


    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce;
    memcpy(eax_p.nonce, sh->nonceT, NONCE_LEN_MAX);  
    eax_p.nonce_len = NONCE_LEN_MAX; 

    /* Ticket Content
    * SessionID
    * SKAB
    * ID-A
    * NonceT
    */ 

    uint8_t in[TICKET_LEN]; // 1 + 64 + 16 + 16  
    eax_p.in = in; 
    eax_p.in_len= TICKET_LEN; 
    memcpy(in, &sh->id_session, 1); 
    memcpy(in + 1, sh->skS, SESSION_KEY_LEN); // assuming we generate sk right before this function 
    memcpy(in + 1 + SESSION_KEY_LEN, sh->id_deviceA, DEVICE_ID_LEN); 
    memcpy(in + 1 + SESSION_KEY_LEN + DEVICE_ID_LEN, sh->nonceT, NONCE_LEN_MAX);  

    uint8_t header[1 + 2 * DEVICE_ID_LEN];  // 1 + 16 + 16 
    eax_p.header = header;
    memcpy(header, &sh->id_session,1); 
    memcpy(header + 1, sh->id_deviceA, DEVICE_ID_LEN); 
    memcpy(header + 1 + DEVICE_ID_LEN, sh->id_deviceB, DEVICE_ID_LEN); 
    eax_p.header_len = 1 + 2 * DEVICE_ID_LEN; 

    uint8_t output[TICKET_LEN + TAG_LEN]; // 97 (in_len) + 16 (tag_len)  
    r = smapi_aes_eax_encrypt(&eax_p, output, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

    memcpy(sh->CTicket, output, TICKET_LEN); 
    memcpy(sh->TagTicket, output + TICKET_LEN, TAG_LEN); 

    sh->retval = 0;
    return 0;
}

/* 
 * Trusted
 * KDP 6: Generate MSG #1 and Encrypt with AES-EAX
 * Using K_AT 
 
 * MSG #1: 
 * Header: MSG_TYPE, MSG_SUBTYPE, LENGTH; 
 * Payload: Nonce_T, Payload cifrato, Tag   
 * Payload_cifrato, Tag = AES-EAX(K_AT, NonceT, Header, Payload: Id_session || SK_AB || TicketB || Tag Ticket) 

 Params needed: 
	char src_keyID[KEY_ID_MAX]; 
	uint8_t id_session; 
	uint8_t nonceT[16]; 
        uint8_t output[64]; // dovrebbe esserci ancora la chiave sk_ab generata nel precedente test 
	uint8_t CTicket[97]; 
	uint8_t TagTicket[16]; 
	uint8_t payload[178]; 
	uint8_t tag[16]; 
	long retval; 

*/
long func6(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }


    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce;
    memcpy(eax_p.nonce, sh->nonceT, NONCE_LEN_MAX);  
    eax_p.nonce_len = NONCE_LEN_MAX;

    // Payload: Id_session || SK_AB || TicketB || Tag Ticket

    uint8_t in[MSG1_CPAYLOAD_LEN]; // 1 + 64 + 97 + 16  
    eax_p.in = in; 
    eax_p.in_len = MSG1_CPAYLOAD_LEN; 
    memcpy(in, &sh->id_session, 1); 
    memcpy(in + 1, sh->skS, SESSION_KEY_LEN);
    memcpy(in + 1 + SESSION_KEY_LEN, sh->CTicket, TICKET_LEN); 
    memcpy(in + 1 + SESSION_KEY_LEN + TICKET_LEN, sh->TagTicket, TAG_LEN);  

    uint8_t header[2 + sizeof(size_t)];  // 1 (Msg_TYPE) + 1 (MSG_SUBTYPE) + sizeof(size_t) Lenght 
    eax_p.header = header;
    // MSG_TYPE: KDP protocol has Type 0x02; 
    header[0] = 0x02; 
    // MSG_SUBTYPE: this is msg #1 of KDP protocol so SUBTYPE is 0x10
    header[1] = 0x10; 
    // MSG_LENGTH: 16 (nonce) + 178 (payload) + 16 (tag)  
   
    size_t msg_len = NONCE_LEN_MAX + MSG1_CPAYLOAD_LEN + TAG_LEN; 
    memcpy(header + 2, &msg_len, sizeof(size_t)); 
    eax_p.header_len = 2 + sizeof(size_t); 


    uint8_t output[MSG1_CPAYLOAD_LEN + TAG_LEN]; // 178 (in_len) + 16 (tag_len)  
    r = smapi_aes_eax_encrypt(&eax_p, output, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

    memcpy(sh->payload, output, MSG1_CPAYLOAD_LEN); 
    memcpy(sh->tag, output + MSG1_CPAYLOAD_LEN, TAG_LEN); 

    sh->retval = 0;
    return 0;
}
/* 
 * Device A
 * KDP 7: Decrypt Cipher Payload of MSG #1 with AES-EAX
 * Using K_AT 
 
 * MSG #1: 
 * Header: MSG_TYPE, MSG_SUBTYPE, LENGTH; 
 * Payload: Nonce_T, Payload cifrato, Tag   
 * Payload_cifrato, Tag = AES-EAX(K_AT, NonceT, Header, Payload: Id_session || SK_AB || TicketB || Tag Ticket) 

*/
long func7(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }


    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce;

    /* NOTA: Il nonce è nel payload non cifrato del MSG#1 */ 
    memcpy(eax_p.nonce, sh->nonceT, NONCE_LEN_MAX);  
    eax_p.nonce_len = NONCE_LEN_MAX;


    // L'input è la concatenazione del Payload cifrato e del suo Tag 
    // si trovano in sh->payload e tag per il test precedente ma
    // nella realtà vanno copiati dal messaggio 

    uint8_t in[MSG1_CPAYLOAD_LEN + TAG_LEN];   
    eax_p.in = in; 
    eax_p.in_len = MSG1_CPAYLOAD_LEN + TAG_LEN; 

    memcpy(eax_p.in, sh->payload, MSG1_CPAYLOAD_LEN); 
    memcpy(eax_p.in + MSG1_CPAYLOAD_LEN, sh->tag, TAG_LEN); 


    uint8_t header[2 + sizeof(size_t)];  // 1 (Msg_TYPE) + 1 (MSG_SUBTYPE) + sizeof(size_t) Lenght 
    eax_p.header = header;
    // MSG_TYPE: KDP protocol has Type 0x02; 
    header[0] = 0x02; 
    // MSG_SUBTYPE: this is msg #1 of KDP protocol so SUBTYPE is 0x10
    header[1] = 0x10; 
    // MSG_LENGTH: 16 (nonce) + 178 (payload) + 16 (tag)  
    

    size_t msg_len = NONCE_LEN_MAX + MSG1_CPAYLOAD_LEN + TAG_LEN; 
    memcpy(header + 2, &msg_len, sizeof(size_t)); 
    eax_p.header_len = 2 + sizeof(size_t); 

    uint8_t output[MSG1_CPAYLOAD_LEN]; 
     
    r = smapi_aes_eax_decrypt(&eax_p, &sh->valid, output, TAG_LEN, sh->src_keyID);
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

    if(sh->valid == 1){ 
	    // il Payload è id_session, SK, Ticket, Tag 
	    sh->id_session = output[0];  
	    memcpy(sh->skS, output + 1, SESSION_KEY_LEN);
	    memcpy(sh->CTicket, output + 1 + SESSION_KEY_LEN, TICKET_LEN);
	    memcpy(sh->TagTicket, output + 1 + SESSION_KEY_LEN + TICKET_LEN, TAG_LEN);  
    }

    sh->retval = 0;
    return 0;
}



/* Device Operation
 * KDP 8: Decrypt and Verify a Ticket sent by A (generated by Trusted) with AES-EAX
*/  

long func8(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp *)p;
    int r;  
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }
    
    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce;
    memcpy(eax_p.nonce, sh->nonceT, NONCE_LEN_MAX);  
    eax_p.nonce_len = NONCE_LEN_MAX; 
   
    // Input: Contenuto del Tag cifrato + Tag
    
    uint8_t input[TICKET_LEN + TAG_LEN]; 
    eax_p.in = input; 
    eax_p.in_len = TICKET_LEN + TAG_LEN;

    // Ricavati dal test precedente
    memcpy(eax_p.in, sh->CTicket, TICKET_LEN); 
    memcpy(eax_p.in + TICKET_LEN, sh->TagTicket, TAG_LEN);     
   

    uint8_t header[1 + 2 * DEVICE_ID_LEN];  // 1 + 16 + 16 
    eax_p.header = header;

    memcpy(header, &sh->id_session,1); 
    memcpy(header + 1, sh->id_deviceA, DEVICE_ID_LEN); 
    memcpy(header + 1 + DEVICE_ID_LEN, sh->id_deviceB, DEVICE_ID_LEN);

    eax_p.header_len = 1 + 2 * DEVICE_ID_LEN; 

    uint8_t output[TICKET_LEN] = {0}; 
    r = smapi_aes_eax_decrypt(&eax_p, &sh->valid, output, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    
   
    // Ovviamente noi avremo già correttamente settati questi campi 
    // dobbiamo immaginare che questa operazione sia fatta dal Device B 

    if(sh->valid == 1) {
	    sh->id_session = output[0]; 
	    memcpy(sh->skS, output + 1, SESSION_KEY_LEN); 
	    memcpy(sh->id_deviceA, output + 1 + SESSION_KEY_LEN, DEVICE_ID_LEN); 
	    memcpy(sh->nonceT, output + 1 + SESSION_KEY_LEN + DEVICE_ID_LEN, NONCE_LEN_MAX); 
    } 


    sh->retval = 0; 
    return sh->retval;
}


/* Device 
 * KDP 9: Save Session SK-AB 
 * Params needed: new_keyID, output
*/

long func9(void *p) 
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->new_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }

    r = smapi_create_key(sh->new_keyID, sh->skS, SESSION_KEY_LEN); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    


    sh->retval = 0;
    return 0;
}; 


/* 
 * Device
 * KDP 10: Generate MAC with Session SK-AB 
 * Used by the two device to prove they've obtained SKAB from Trusted (Device A directly while Device B in TicketB) 
 
L'obiettivo di questa funzione è quello di salvare la chiave di sessione ricevuta 
* MAC-A = AES-CMAC-128(SKAB, SessionID || NonceA); 

This function is equivalent to the one used by Device B 
*/
long func10(void *p)
{
    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*)p;
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    if (sh->src_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }

    uint8_t input[1 + NONCE_LEN_MAX]; // 1 (SessionID) + 16 (NonceA); 
    input[0] = sh->id_session; 
    memcpy(input + 1, sh->nonceD, NONCE_LEN_MAX); 

    r = smapi_aes_cmac(input, 1 + NONCE_LEN_MAX, sh->mac, 16, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    


    sh->retval = 0;
    return 0;
}


/* Session Protocol: Function used to encrypt Application Message with AES-EAX 
 * using Session Key obtained by the two parts involved throughout the protocol explained */ 
long func11(void *p){

    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*) p; 
    int r; 

    if(!sh) return -1; 
    if(sh->src_keyID[0] == '\0') {
	sh->retval = -1; 
	return -1; 
    } 


    // Immaginiamo che vi sia un limite alla dimensione del Payload Applicativo 

    // Ancora una volta seguiamo il soltio modo di procedere per EAX 
    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce; 
    eax_p.nonce_len = NONCE_LEN_MAX; 
    memcpy(eax_p.nonce, sh->nonceD, NONCE_LEN_MAX); 

    uint8_t header[2 + sizeof(size_t)];  // 1 (Msg_TYPE) + 1 (MSG_SUBTYPE) + sizeof(size_t) Lenght 
    eax_p.header = header;

    eax_p.header[0] = 0x00;  // MSG_TYPE: Appl msgs stands under control message which has Type 0; 
    eax_p.header[1] = 0x24; // MSG_SUBTYPE: Appl msg SUBTYPE is 0x24
    
    // MSG_LENGTH
    size_t msg_len = sh->payload_len + NONCE_LEN_MAX; 
    memcpy(eax_p.header + 2, &msg_len, sizeof(size_t)); 


    uint8_t input[PLD_MAX_LEN]; 
    eax_p.in = input; 
    eax_p.in_len = sh->payload_len;
    memcpy(eax_p.in, (const uint8_t *) sh->app_payload, sh->payload_len); 

    uint8_t output[PLD_MAX_LEN + TAG_LEN]; 

    r = smapi_aes_eax_encrypt(&eax_p, output, TAG_LEN, sh->src_keyID); 
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

    memcpy(sh->CPayload, output, sh->payload_len); 
    memcpy(sh->tag, output + sh->payload_len, TAG_LEN); 

    sh->retval = 0;
    return 0;


} 

/* Session Protocol: Function used to decrypt Application Message with AES-EAX 
 * using Session Key obtained by the two parts involved throughout the protocol explained */ 
long func12(void *p){

    struct shared_crypto_kdp *sh = (struct shared_crypto_kdp*) p; 
    int r; 

    if(!sh) return -1; 
    if(sh->src_keyID[0] == '\0') {
	sh->retval = -1; 
	return -1; 
    } 


    eax_params eax_p; 
    
    uint8_t nonce[NONCE_LEN_MAX]; 
    eax_p.nonce = nonce; 
    eax_p.nonce_len = NONCE_LEN_MAX; 
    memcpy(eax_p.nonce, sh->nonceD, NONCE_LEN_MAX); 

    uint8_t header[2 + sizeof(size_t)];  // 1 (Msg_TYPE) + 1 (MSG_SUBTYPE) + sizeof(size_t) Lenght 
    eax_p.header = header;

    eax_p.header[0] = 0x00;  // MSG_TYPE: Appl msgs stands under control message which has Type 0; 
    eax_p.header[1] = 0x24; // MSG_SUBTYPE: Appl msg SUBTYPE is 0x24
    
    // MSG_LENGTH
    /* NOTA: sh->payload_len in fase di decifraryra viene letto dal messaggio */ 

    size_t msg_len = sh->payload_len + NONCE_LEN_MAX; 
    memcpy(eax_p.header + 2, &msg_len, sizeof(size_t)); 


    uint8_t input[PLD_MAX_LEN + TAG_LEN]; 
    eax_p.in = input; 
    eax_p.in_len = sh->payload_len + TAG_LEN; 

    // CPayload è settato dal precedente test
    memcpy(eax_p.in, sh->CPayload, sh->payload_len);
    memcpy(eax_p.in + sh->payload_len, sh->tag, TAG_LEN);  

    uint8_t output[PLD_MAX_LEN]; 
    r = smapi_aes_eax_decrypt(&eax_p, &sh->valid, output, TAG_LEN, sh->src_keyID); 
    
    if(r) 
    {
	sh->retval = r; 
	return r; 
    } 	    

     memcpy(sh->app_payload, output, sh->payload_len + 1);
     sh->app_payload[sh->payload_len] = '\0';  

    sh->retval = 0; 
    return 0;


} 

/*
* Registrare le funzioni di servizio nell'enclave
* permette di potervi accedere dall'esterno facendo
* riferimento al rispettivo indice associato.
* E' un'operazione necessaria per richiamare le 
* funzioni di servizio dall'esterno.
*/

REGISTER_SE_SERVICE(func1, 0); // Nonce
REGISTER_SE_SERVICE(func2, 1); // K Derivation from MSK 
REGISTER_SE_SERVICE(func3, 2); // MKT derivation from RootKey 
REGISTER_SE_SERVICE(func4, 3); // SessionKey Derivation from  MKT
REGISTER_SE_SERVICE(func5, 4); // Eax encrypt TicketB 
REGISTER_SE_SERVICE(func6, 5); // Eax encrypt payload msg #1
REGISTER_SE_SERVICE(func7, 6); // Eax decrypt payload msg #1
REGISTER_SE_SERVICE(func8, 7); // Eax decrypt TicketB 
REGISTER_SE_SERVICE(func9, 8); // Save Session Key in Secure Storage
REGISTER_SE_SERVICE(func10, 9); // Generate MAC
/* Application */ 
REGISTER_SE_SERVICE(func11, 10); // Eax encrypt Application MSG with SK 
REGISTER_SE_SERVICE(func12, 11); // Eax decrypt Application MSG with SK 
