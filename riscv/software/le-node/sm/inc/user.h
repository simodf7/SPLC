#ifndef USER_H
#define USER_H
#include <stdint.h>
#include <stddef.h>


#define KEY_ID_MAX 32
#define LABEL_MAX 16

#define NONCE_LEN_EAX_EAP 4
#define HEADER_LEN_EAP 22

#define NONCE_LEN_MAX 16 
#define DEVICE_ID_LEN 16 
#define TAG_LEN 16
#define SESSION_KEY_LEN 64 
#define TICKET_LEN (1 + SESSION_KEY_LEN + DEVICE_ID_LEN + NONCE_LEN_MAX) // 97 
#define MSG1_CPAYLOAD_LEN (1 + SESSION_KEY_LEN + TICKET_LEN + TAG_LEN) // 178 
#define PLD_MAX_LEN 120 



/** Refactoring in a single structure for all EAP-PSK Operations **/ 

struct shared_crypto_eap_psk
{ 
    /* Common Fields */
    char        src_keyID[KEY_ID_MAX];
    uint8_t     input[NONCE_LEN_MAX];    // in Nonce Generation is used as output 
    long        retval;

    /* Used by Nonce Generation */ 
    size_t 	nonce_len; 

    /* Used by Key Derivation (AK/KDK, TEK/MSK) 
	* To derive AK and KDK from PSK or TEK and MSK from KDK
	* NOTE: 
	* keys_len: lenght of the keys to generate 
	* keys_tot_len: total lenght of the the keys to generate 
	* num_keys_gen: number of keys to generate 
	* input_len: size of the input 
	 
	* All of this params are not included in the struct because 
	* for EAP-PSK are known at compile time and they are fixed 
	* Future implementations in which it's necessary 
	* to dynamically change the size values could modify the struct 
	* to include additionally parameters  
    */

    char        new_keysID[2][KEY_ID_MAX];
  

    /* Used by Message Auth Code generation   
	 * Aim is to generate Message Authentication Code which is part of EAP-PSK exchange 
	 * between Server and Client 
	 * Ex: MAC_P = CMAC_AES_128(AK, ID_P || ID_S || RAND_S || RAND_P) 
	 * Ex: MAC_S = CMAC_AES_128(AK, ID_S || RAND_P)
	 * As specified in EAP_PSK RFC MAC is 16 byte so outlen is not specified as a param
	 * ID is a variable length field but here we assume is 16 byte
    */

    uint8_t     id_p[DEVICE_ID_LEN];
    uint8_t     id_s[DEVICE_ID_LEN];
    uint8_t     rand_s[NONCE_LEN_MAX];
    uint8_t     rand_p[NONCE_LEN_MAX]; 
    uint8_t     mac[16];

    /* Used by EAX Encryption and Decryption in EAP-PSK for PChannel Creation  
	 * Notice that as in the Derivation Struct 
	 * Nonce_len, header_len, tag_len are fixed 
	 *
	 * Payload is typically referred as Variable Lenght
	 * But in our version for Secure PLC no Extension is provided so 
	 * Payload is just One Byte (R, E and Reserved)  
    */ 

    uint8_t    nonce[NONCE_LEN_EAX_EAP];  
    uint8_t    pt; 
    uint8_t    header[HEADER_LEN_EAP]; 
    uint8_t    ct; // ciphertext  
    uint8_t    tag[TAG_LEN]; // tag
    uint8_t    valid; 
};


/* Same pattern as the KDP, all necessary params are included in the following structure 
Recap of the operations: 
 1) Generating Nonce 
 2) Deriving K_AT from MSK_AT (Trusted and Device operation)  
 3) Deriving MKT from ROOT (Trusted Operation) 
 4) Deriving SessionID (Trusted Operation) 
 5) Deriving SessionKey (Trusted Operation) 
 6) Generate MAC-A (B) (Device Operation) 
 7) Generate EAX from Ticket (Trusted Operation)  
 8) Generate EAX for Packet (Device Operation) 
*/ 



struct shared_crypto_kdp
{ 
    /* Common Fields */
    char        src_keyID[KEY_ID_MAX];
    long        retval;

    /* Used by Nonce Generation */ 
    size_t 	nonce_len; 
    uint8_t 	nonce_buf[NONCE_LEN_MAX]; 

    /* ID di sessione */ 
    uint8_t 	id_session; 

    /* Used by Key Derivation */ 
    char        new_keyID[KEY_ID_MAX];
    char 	label[LABEL_MAX]; 
    uint8_t 	id_deviceA[DEVICE_ID_LEN]; 
    uint8_t 	id_deviceB[DEVICE_ID_LEN]; 
    uint8_t 	id_trusted[DEVICE_ID_LEN];  
    uint8_t 	nonceT[NONCE_LEN_MAX];  
    uint8_t 	skS[SESSION_KEY_LEN];    

    /* Used by Message Auth Code generation  */
    uint8_t     nonceD[NONCE_LEN_MAX]; 
    uint8_t 	mac[16]; 

    /* Used by EAX Encryption and Decryption in Ticket Encrypt and Decrypt 
     * and Msg Encrypt and Decrypt */ 
    uint8_t 	valid;     
    uint8_t 	CTicket[TICKET_LEN];
    uint8_t 	TagTicket[TAG_LEN]; 	
  
    uint8_t 	payload[MSG1_CPAYLOAD_LEN]; 
    uint8_t 	tag[TAG_LEN];  // Used for Tag also in Appl Msg 

    /* APPLICATION MSG */ 
    char  	app_payload[PLD_MAX_LEN]; 
    size_t	payload_len;
 
    uint8_t 	CPayload[PLD_MAX_LEN]; 

};



int user_main(const char *mud_url);

#endif
