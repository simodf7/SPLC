#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "user.h"

#include "sm.h"
#include "keys.h"
#include "types.h"
#include "profiler.h"
#include "eap_splc_bin.h"
#include "kdp_splc_bin.h"

void test_eap_ak_kdk(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** PRIMO TEST - Derivazione AK e KDK da PSK *******/ 
    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        AK-KDK DERIVATION TEST STARTED            \n");
    printf("==================================================\n");
    printf("\n");


    memset(sh, 0, sizeof(*sh));  // Pulisco tutto per sicurezza

    // === Setup delle chiavi crittografiche ===

    /* Nell'ottica di far uso delle chiavi interne del SM è stato riportato l'ID
    * di una delle chiavi descritte definite nel file keys.h. 
    */

    const char *src = "asekey";          // ID della chiave dell'ASE
    const char *ak_id = "auth_key";  	 // ID per una chiave derivata
    const char *kdk_id = "key_deriv_key"; 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);
    strncpy(sh->new_keysID[0], ak_id, KEY_ID_MAX - 1);
    strncpy(sh->new_keysID[1], kdk_id, KEY_ID_MAX-1);  

    for(int i = 0; i<2; i++){ 
	printf("%d Key id: %s\n", i+1, sh->new_keysID[i]);
    } 

    memset(sh->input, 0, 16); 

    struct smret r = execute_se_service(*h, 3, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN AK-KDK Derivation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN AK-KDK Derivation] retval from SE: %ld\n", sh->retval);

    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        AK-KDK DERIVATION TEST COMPLETED          \n");
    printf("==================================================\n");
    printf("\n");



}; 


void test_eap_tek_msk(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** SECONDO TEST - Derivazione TEK e MSK da KDK *******/ 

    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        TEK-MSK DERIVATION TEST STARTED           \n");
    printf("==================================================\n");
    printf("\n");
    
   

    const char *src = "key_deriv_key";   // ID della chiave dell'ASE
    const char *tek_id = "tek_key";  	 // ID per una chiave derivata
    const char *msk_id = "msk_key"; 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);
    strncpy(sh->new_keysID[0], tek_id, KEY_ID_MAX - 1);
    strncpy(sh->new_keysID[1], msk_id, KEY_ID_MAX-1);  

    for(int i = 0; i<2; i++){ 
	printf("%d Key id: %s\n", i+1, sh->new_keysID[i]);
    } 

    // Per la generazione di TEK e MSK serve generare il RAND_P 
    // Esso è di 16 byte 
    sh->nonce_len = 16; 
   
    // a tal scopo richiamiamo la funzione 3 dell'enclave
    struct smret r = execute_se_service(*h, 2, 0);

    // IL risultato è in input, lo dobbiamo portare in rand_p 
    memcpy(sh->rand_p, sh->input, 16); 


 
    printf("[USER][HW-RUN] RAND_P Generated: 0x");  
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->rand_p[i]); 
    }
    printf("\n"); 


    // Il servizio userà sh->input e quindi RAND_P come input per la Key derivation di KDK     
    r = execute_se_service(*h, 4, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN TEK-MSK Derivation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN TEK-MSK Derivation] retval from SE: %ld\n", sh->retval);

    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        TEK-MSK DERIVATION TEST COMPLETED         \n");
    printf("==================================================\n");
    printf("\n");



}; 



void test_eap_mac_p(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** TERZO TEST - GENERAZIONE DEL MAC_P a partire da AK *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("        MAC_P GENERATION TEST STARTED             \n");
    printf("==================================================\n");
    printf("\n");
    
   
    // SET input 

    const char *src = "auth_key";   // ID dell'AK (Authentication Key) 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1); 
    printf("Key id: %s\n", sh->src_keyID);

    memset(sh->id_p, 0, 16); 
    sh->id_p[DEVICE_ID_LEN - 1] = 0x01; // ID del Device che genera il MAC_P (nell'esempio è 0x...0000_0001) 
   
    memset(sh->id_s, 0, 16); 
    sh->id_s[DEVICE_ID_LEN - 1] = 0xFF; // ID del Trusted da ricevere in EAP #1 (nell'esempio è 0x...1111_1111) 


    // ATTENZIONE ORA GENERIAMO RAND_S ma in realtà anch'esso deve essere ricevuto da EAP #1    
    sh->nonce_len = 16; 
    struct smret r = execute_se_service(*h, 2, 0); 
	
    // copiamo l'input in rand_s
    memcpy(sh->rand_s, sh->input, 16); 


    printf("[USER][HW-RUN] RAND_S Generated: 0x");  
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->rand_s[i]); 
    }
    printf("\n"); 

    // RAND_P lo abbiamo generato nel secondo test_eap e quindi si trova in sh->rand_p


    r = execute_se_service(*h, 5, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN MAC_P Generation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN MAC_P Generation] retval from SE: %ld\n", sh->retval);
	
    printf("[USER][HW-RUN] MAC_P Generated: 0x");  
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->mac[i]); 
    }
    printf("\n"); 
 
    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        MAC_P GENERATION TEST COMPLETED           \n");
    printf("==================================================\n");
    printf("\n");



}; 


void test_eap_mac_s(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** QUARTO TEST - GENERAZIONE DEL MAC_S a partire da AK *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("        MAC_S GENERATION TEST STARTED             \n");
    printf("==================================================\n");
    printf("\n");
    
   
    // SET input 

    const char *src = "auth_key";   // ID dell'AK (Authentication Key) 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1); 
    printf("Key id: %s\n", sh->src_keyID);
 
    memset(sh->id_s, 0, 16); 
    sh->id_s[DEVICE_ID_LEN - 1] = 0xFF; // ID del Trusted da ricevere in EAP #1 (nell'esempio è 0x...1111_1111) 

	
    // RAND_S è stato ottenuto precedentemente 

    printf("[USER][HW-RUN] RAND_S Previously Generated: 0x");  
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->rand_s[i]); 
    }
    printf("\n"); 


    struct smret r = execute_se_service(*h, 6, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN MAC_S Generation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN MAC_S Generation] retval from SE: %ld\n", sh->retval);
	
    printf("[USER][HW-RUN] MAC_S Generated: 0x");  
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->mac[i]); 
    }
    printf("\n"); 
 
    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        MAC_S GENERATION TEST COMPLETED           \n");
    printf("==================================================\n");
    printf("\n");

};


void test_eap_eax_encrypt(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** QUINTO TEST - Generazione Pchannel EAX a partire da TEK  *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("        EAP-PSK EAX ENCRYPTION TEST STARTED       \n");
    printf("==================================================\n");
    printf("\n");
    
   
    // SET input 

    const char *src = "tek_key";   // ID del TEK (Transient EAP Key) 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1); 
    printf("Key id: %s\n", sh->src_keyID);
 
    // Per il nostro test_eap inseriamo dei possibili valori per Nonce, Header e Payload per il messaggio #3 EAP-PSK
    // Stavolta il Nonce è di 4 byte 
    // NOTA: L'RFC di EAP-PSK stabilisce che il Nonce sia inizializzato a 0 e poi incrementato nel mess #4 EAP-PSK 
    memset(sh->nonce, 0, 4); 

    // SETTAGGIO Header

    // Il primo byte è il campo CODE (EAP REQUEST/ EAP RESPONSE) 
    sh->header[0] = 0x01; // Siamo nell'ipotesi del #3 quindi è un EAP Request (0x01)
    
    // Il secondo byte è il campo EAP Identfier 
    // (Numero stabilito dal Server che invia una EAP REQUEST es. x e la corrispondent EAP RESPONSE deve avere lo stesso) 
    // La successiva richiesta sarà etichettata con x+1 
    
    // Immaginiamo che sia generato casualmente 
    sh->nonce_len = 1; 
    memset(sh->input, 0, 16); 
    struct smret r = execute_se_service(*h, 2, 0);

    // copiamo il byte generato in sh->header[1] 
    memcpy(sh->header + 1, sh->input, 1); 

    // Il terzo campo (2 byte) è Lenght del pacchetto EAP 
    // ex. 59 byte 
    // (DA RAFFINARE IL MODO IN CUI VIENE INSERITO QUESTO CAMPO) 
    sh->header[2] = 0x00; 
    sh->header[3] = 0x3b; 

    // il quarto campo (1 byte) è Type
    // Rappresenta il tipo IANA di EAP-PSK che è 47 (0x2f)
    sh->header[4] = 0x2f; 

    // il quinto campo è Flags (1 byte) 
    // 1 2 3 4 5 6 7 8 
    // * * * * * * * *
    // T T  Reserved  
    // Reserved è sempre 0 
    // T = 0 / 1 / 2 / 3 (a seconda del # MESS)
    // In questo caso T è 10 
    // Dunque 1000_0000 
    sh->header[5] = 0x80; 

    // i restanti 16 byte sono il RAND_S 
    memcpy(sh->header + 6, sh->rand_s, 16); 


    // SETTAGGIO PAYLOAD  (1 byte) 

    // Il payload è dato da: 
    // 1 2 3 4 5 6 7 8
    // * * * * * * * * 
    // R R E  Reserved 
    // Reserved è sempre 0 
    // E (Extension) in questo caso è 0 
    // R = 00 (CONT) / 10 (DONE_SUCCESS) / 11 (DONE_FAILURE) 
    // Ipotizziamo: 
    // 1000_0000
    sh->pt = 0x80; 


    
    // tutto è pronto per EAX 
    sh->ct = 0; 
    memset(sh->tag, 0, 16); 


    r = execute_se_service(*h, 7, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN EAX Encryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN EAX Encryption] retval from SE: %ld\n", sh->retval);
	
    printf("[USER][HW-RUN] EAX CipherText: 0x%02X\n", sh->ct);
    printf("[USER][HW-RUN] EAX Tag: 0x");
    for(int i = 0; i < 16; i++) 
    {
	printf("%02X", sh->tag[i]); 
    }
    printf("\n"); 
 
    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        EAP-PSK EAX ENCYRPTION TEST COMPL 	      \n");
    printf("==================================================\n");
    printf("\n");

};


void test_eap_eax_decrypt(sehandle *h, struct shared_crypto_eap_psk *sh)
{
	
    /***** SESTO TEST - Decifratura EAX PChannel a partire da TEK  *******/ 
    /* NOTA: Recuperiamo CT e TAG del quinto test_eap per ottenere il plaintext */ 

    printf("\n");
    printf("==================================================\n");
    printf("        EAP-PSK EAX DECRYPTION TEST STARTED       \n");
    printf("==================================================\n");
    printf("\n");
    
   
    // SET input 

    const char *src = "tek_key";   // ID del TEK (Transient EAP Key) 
    
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1); 
    printf("Key id: %s\n", sh->src_keyID);
 
    // NOTA: I campi header e nonce sono già correttamente settati 
    // CT e TAG sono stati riempiti dalla funzione dell'enclave di Encryption 
    /* Nella realtà dei fatti devono essere settati sulla base dei valori ricevuti nei messaggi EAP */ 


    // Per non falsare il test_eap azzeriamo il plaintext 
    // Ci aspettiamo di riottenere 0x80 
    sh->pt = 0x00;  

    struct smret r = execute_se_service(*h, 8, 0);

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN EAX Decryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN EAX Decryption] retval from SE: %ld\n", sh->retval);
	
    /* NOTA: La procedura di Decryption deve opportunare controllare che il tag ricevuto sia valido*/
    printf("[USER][HW-RUN EAX Decryption] Tag is %s\n", sh->valid == 1 ? "Valid" : "Invalid"); 
    if (!sh->valid) return;  

    printf("[USER][HW-RUN] EAX Decryption Plaintext: 0x%02X\n", sh->pt);
 
    
    // === CONCLUSIONI DEL TEST ===
    printf("\n");
    printf("==================================================\n");
    printf("        EAP-PSK EAX DECRYPTION TEST COMPL 	      \n");
    printf("==================================================\n");
    printf("\n");

};


void test_kdp_k_msk(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** PRIMO TEST KDP - Derivazione K (_AT) a partire da MSK *******/ 
    /* IL test è sequenziale a quelli eap, perchè abbiamo bisogno della MSK */ 

    printf("\n");
    printf("==================================================\n");
    printf("        	K DERIVATION TEST STARTED             \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT
    
    memset(sh, 0, sizeof(*sh));  // Pulisco tutto per sicurezza

    // === Setup delle chiavi crittografiche ===
	
    /*
    	char src_keyID[KEY_ID_MAX]; 
        char new_keyID[KEY_ID_MAX]; 
        char label[LABEL_MAX]; 
        uint8_t id_deviceA[16]; 
        uint8_t id_trusted[16]; 
        long retval; 
    */ 

    const char *src = "msk_key";          // ID della Master Session Key
    const char *k_id = "k_key"; 	

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);
    strncpy(sh->new_keyID, k_id, KEY_ID_MAX - 1);

    printf("[USER][DEBUG] Key id to generate: %s\n", sh->new_keyID);
    
    // SETUP della Label 
    // K-AT = AES-CMAC(MSK-AT, Counter || "KDP-AT" || 0x00 || ID-A || ID-T || Length)
    
    const char *label = "KDP-AT"; 
    strncpy(sh->label, label, LABEL_MAX-1); 

    // SETUP degli ID 

    memset(sh->id_deviceA, 0, DEVICE_ID_LEN); 
    sh->id_deviceA[DEVICE_ID_LEN - 1] = 0x01; // ID del Device (nell'esempio è 0x...0000_0001) 
   
    memset(sh->id_trusted, 0, DEVICE_ID_LEN); 
    sh->id_trusted[DEVICE_ID_LEN - 1] = 0xFF; // ID del Trusted (nell'esempio è 0x...1111_1111) 

    // Tutto pronto possiamo eseguire il servizio 

    struct smret r = execute_se_service(*h, 1, 0); // secondo servizio dell'enclave KDP 

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN K Derivation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN K Derivation] retval from SE: %ld\n", sh->retval);

    printf("\n");
    printf("==================================================\n");
    printf("        	K DERIVATION TEST COMPLETED           \n");
    printf("==================================================\n");
    printf("\n");

} 	


void test_mkt(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** SECONDO TEST KDP - Derivazione MKT  *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("        	MKT DERIVATION TEST STARTED           \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT
    
    memset(sh, 0, sizeof(*sh));  // Pulisco tutto per sicurezza

    // === Setup delle chiavi crittografiche ===
	
    /*
	    struct shared_crypto_kdp
	    char        src_keyID[KEY_ID_MAX];
	    uint8_t     input[16];    // in Nonce Generation is used as output 
	    long        retval;

	    size_t      nonce_len;

	    char        new_keyID[KEY_ID_MAX];
	    char        label[LABEL_MAX];
	    uint8_t     id_session;
	    uint8_t     id_deviceA[16];
	    uint8_t     id_trusted[16];
	    uint8_t     nonce[16];
    */ 

    const char *src = "rootkey";          // ID della Master Session Key
    const char *mkt_id = "mkt_key"; 	

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);
    strncpy(sh->new_keyID, mkt_id, KEY_ID_MAX - 1);

    printf("[USER][DEBUG] Key id to generate: %s\n", sh->new_keyID);
    
    // SETUP della Label 
    // Master Key Trusted (MKT) = AES-CMAC(ROOT-KEY-TRUSTED, Counter || "KD-MK" || 0x00 || ID-T || Length) 
    
    const char *label = "KD-MK"; 
    strncpy(sh->label, label, LABEL_MAX-1); 

    // SETUP degli ID 

    memset(sh->id_trusted, 0, DEVICE_ID_LEN); 
    sh->id_trusted[DEVICE_ID_LEN - 1] = 0xFF; // ID del Trusted (nell'esempio è 0x...1111_1111) 

    // Tutto pronto possiamo eseguire il servizio 

    struct smret r = execute_se_service(*h, 2, 0); // terzo servizio dell'enclave KDP 

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN MKT Derivation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN MKT Derivation] retval from SE: %ld\n", sh->retval);

    printf("\n");
    printf("==================================================\n");
    printf("        	MKT DERIVATION TEST COMPLETED         \n");
    printf("==================================================\n");
    printf("\n");

} 	

void test_session_key(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** TERZO TEST KDP - Derivazione SKAB  *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("        	SKAB DERIVATION TEST STARTED          \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT
    
    memset(sh, 0, sizeof(*sh));  // Pulisco tutto per sicurezza

    // === Setup delle chiavi crittografiche ===
	
    /*
	    struct shared_crypto_kdp
	    char        src_keyID[KEY_ID_MAX];
	    uint8_t     input[16];    // in Nonce Generation is used as output 
	    long        retval;

	    size_t      nonce_len;

	    char        new_keyID[KEY_ID_MAX];
	    char        label[LABEL_MAX];
	    uint8_t     id_session;
	    uint8_t     id_deviceA[16];
	    uint8_t     id_trusted[16];
	    uint8_t     nonce[16];
    */ 

    const char *src = "mkt_key";          // ID della Master Session Key
    const char *skab_id = "skab_key"; 	

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);
    strncpy(sh->new_keyID, skab_id, KEY_ID_MAX - 1);

    printf("[USER][DEBUG] Key id to generate: %s\n", sh->new_keyID);
    
    // SETUP della Label 
    // SKAB = AES-CMAC(MKT, Counter || "SESSION-AB" || 0x00 || ID-A || ID-B || SessionID || NonceT || Length)
    
    const char *label = "SESSION-AB"; 
    strncpy(sh->label, label, LABEL_MAX-1); 

    // SETUP degli ID 

    memset(sh->id_deviceA, 0, DEVICE_ID_LEN); 
    sh->id_deviceA[DEVICE_ID_LEN - 1] = 0x01; // ID del DeviceA (nell'esempio è 0x...0000_0001) 

    memset(sh->id_deviceB, 0, 16); 
    sh->id_deviceB[DEVICE_ID_LEN - 1] = 0x02; // ID del DeviceB (nell'esempio è 0x...0000_0002) 
   
    // SETUP ID SESSIONE - lo generiamo con la funzione dell'enclave 
    sh->nonce_len = 1; // 1 Byte 
    struct smret r = execute_se_service(*h, 0, 0);

    // il risultato lo abbiamo in input 
    memcpy(&sh->id_session, sh->nonce_buf, 1);  

    // Il nonce deve essere generato randomicamente 
    memset(sh->nonce_buf, 0, NONCE_LEN_MAX); 
    sh->nonce_len = NONCE_LEN_MAX; 
    r = execute_se_service(*h, 0, 0); 
    memcpy(sh->nonceT, sh->nonce_buf, NONCE_LEN_MAX); 

    // Tutto pronto possiamo eseguire il servizio 

    r = execute_se_service(*h, 3, 0); // quarto servizio dell'enclave KDP 
	
    // La Session Key sarà in output, se tutto è andato per il verso giusto  


    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN SKAB Derivation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN SKAB Derivation] retval from SE: %ld\n", sh->retval);

    printf("[SKAB Derivation] The following Session Key has been generated: 0x"); 
    for(int i=0; i<63; i++){ 
	printf("%02X", sh->skS[i]); 
    } 

    printf("\n");
    printf("==================================================\n");
    printf("        	SKAB DERIVATION TEST COMPLETED        \n");
    printf("==================================================\n");
    printf("\n");

} 	

void test_ticket_encrypt(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** QUARTO TEST KDP - TICKETB ENCRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            TICKETB ENCRYPT TEST STARTED          \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    // === Setup delle chiavi crittografiche ===
	
    // NOTA BENE: questa è una funzione del trusted dunque dovrebbe usare K_TB, ora useremo K 

    const char *src = "k_key";          // ID della K Key

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    // NOTA: Molti dei parametri sono già fissati dai precedenti test 
    // ID-A e ID-B sono già stati settati 
    // ID-Session è stato genertao nel precedente test e quindi è già presente nella struttura
    // NonceT anche


    // Possiamo eseguire dunque il servizio 

    struct smret r = execute_se_service(*h, 4, 0); // quarto servizio dell'enclave KDP 


    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP TicketB Generation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP TicketB Generation] retval from SE: %ld\n", sh->retval);


    // Se tutto va per il verso giusto, il Ticket Cifrato e il Tag sono nei campi CTicket e TagTicket 
    
    printf("[KDP] TicketB Generation] Cipher Ticket generated: 0x"); 
    
    for(int i=0; i< TICKET_LEN ; i++){ 
	printf("%02X", sh->CTicket[i]); 
    }
    printf("\n");  

    printf("[KDP] TicketN Generation] Tag Ticket generated: 0x"); 
    for(int i=0; i < TAG_LEN - 1; i++){ 
	printf("%02X", sh->TagTicket[i]); 
    } 
    printf("\n");
    printf("==================================================\n");
    printf("        	TICKETB ENCRYPT TEST COMPLETED        \n");
    printf("==================================================\n");
    printf("\n");

} 	

void test_msg_encrypt(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** QUINTO TEST KDP - MSG ENCRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            MSG ENCRYPT TEST STARTED              \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *src = "k_key";          // ID della K Key

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    // NOTA: Molti dei parametri sono già fissati dai precedenti test 
    
    // ID-Session
    // NonceT
    // In skS vi è la SKAB
    // in Cticket vi è il ticketb 
    // Tag Ticket 


    memset(sh->payload, 0, MSG1_CPAYLOAD_LEN); 
    memset(sh->tag, 0, TAG_LEN);  

    // Possiamo eseguire dunque il servizio 

    struct smret r = execute_se_service(*h, 5, 0);  

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP MSG Encryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP MSG Encryption] retval from SE: %ld\n", sh->retval);


    // Se tutto va per il verso giusto, il Cipher Payload si trova in paylod, mentre il tag in tag  
    printf("[KDP] MSG Encryption] Cipher Payload generated: 0x"); 
    for(int i=0; i<96; i++){ 
	printf("%02X", sh->payload[i]); 
    }
    printf("\n");  

    printf("[KDP] MSG Encryption] Tag generated: 0x"); 
    for(int i=0; i<DEVICE_ID_LEN - 1; i++){ 
	printf("%02X", sh->tag[i]); 
    } 
    printf("\n");
    printf("==================================================\n");
    printf("        	MSG ENCRYPT TEST COMPLETED            \n");
    printf("==================================================\n");
    printf("\n");

} 	

void test_msg_decrypt(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** SESTO TEST KDP - MSG DECRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            MSG DECRYPT TEST STARTED              \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *src = "k_key";          // ID della K Key

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    // NOTA: Molti dei parametri sono già fissati dai precedenti test 
    
    // NonceT
    // in Cticket vi è il ticketb 
    // Tag Ticket 
    // L'header del messaggio viene settato nella funzione

    // I risultati sovrascriveranno i campi della struct, stampiamoli per confronto
    // anche se in realtà si potranno leggere nelle linee di log precedente

    printf("[KDP] MSG Decryption Before] Id_session: 0x%02X \n", sh->id_session); 
    printf("[KDP] MSG Decryption Before] SK: 0x"); 
    for(int i=0; i < SESSION_KEY_LEN; i++){ 
	printf("%02X", sh->skS[i]); 
    }
    printf("\n");  

    printf("[KDP] MSG Decryption Before] Ticket: 0x"); 
    for(int i=0; i < TICKET_LEN; i++){ 
	printf("%02X", sh->CTicket[i]); 
    } 
    printf("\n");
   
   
    printf("[KDP] MSG Decryption Before] Tag: 0x"); 
    for(int i=0; i < TAG_LEN; i++){ 
	printf("%02X", sh->TagTicket[i]); 
    } 
    printf("\n");
   
   
    // Possiamo eseguire dunque il servizio 

    struct smret r = execute_se_service(*h, 6, 0);  

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP MSG Decryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP MSG Decryption] retval from SE: %ld\n", sh->retval);


    
    printf("[KDP] MSG Decryption After] Id_session: 0x%02X \n", sh->id_session); 
    printf("[KDP] MSG Decryption After] SK: 0x"); 
    for(int i=0; i < SESSION_KEY_LEN; i++){ 
	printf("%02X", sh->skS[i]); 
    }
    printf("\n");  

    printf("[KDP] MSG Decryption After] Ticket: 0x"); 
    for(int i=0; i < TICKET_LEN; i++){ 
	printf("%02X", sh->CTicket[i]); 
    } 
    printf("\n");
   
    printf("[KDP] MSG Decryption After] Tag: 0x"); 
    for(int i=0; i < TAG_LEN; i++){ 
	printf("%02X", sh->TagTicket[i]); 
    } 
    printf("\n");
    
    printf("\n");
    printf("==================================================\n");
    printf("        	MSG DECRYPT TEST COMPLETED            \n");
    printf("==================================================\n");
    printf("\n");

} 	



void test_ticket_decrypt(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** SETTIMO TEST KDP - TICKETB DECRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            TICKETB DECRYPT TEST STARTED          \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    // questa è una funzione del Device B quindi dovrebbe esserci K_TB 
    
    const char *src = "k_key";          // ID della K Key

    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    // NOTA: Anche qui Molti dei parametri sono già fissati dai precedenti test 
    // ID-A e ID-B sono già stati settati 
    // ID-Session
    // NonceT anche
    
    // Printiamoli per poter fare una verifica 

    printf("[KDP][MSG #2] Id_session: 0x%02X\n", sh->id_session);
    printf("[KDP][MSG #2] SessionKey: 0x");
    for(int i=0; i< SESSION_KEY_LEN; i++){ 
	printf("%02X", sh->skS[i]); 
    }
    printf("\n");  

    printf("[KDP][MSG #2] ID-DeviceA (sender): 0x");
    for(int i=0; i < DEVICE_ID_LEN; i++){ 
	printf("%02X", sh->id_deviceA[i]); 
    }
    printf("\n");  
    
    printf("[KDP][MSG #2] NonceT (Generated by Trusted): 0x");
    for(int i=0; i < DEVICE_ID_LEN; i++){ 
	printf("%02X", sh->nonceT[i]); 
    }
   
    printf("\n");  
    
    
    // OVviamente questi parametri dovrebbero essere settati dal Device B alla ricezione del messaggio #2
    // inviato dal Device A (che invia as-is il Ticket generato dal Trusted)  

    // Possiamo eseguire dunque il servizio 

    struct smret r = execute_se_service(*h, 7, 0); // quarto servizio dell'enclave KDP 


    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP TicketB Decryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP TicketB Decryption] retval from SE: %ld\n", sh->retval);


    // Come prima cosa è necessario controllare che il Tag ricevuto e quello generato coincidano 
    // è possibile usando valid
    printf("[KDP][TicketB Decryption] Tag received is %s\n", sh->valid == 1 ? "VALID" : "INVALID"); 
    if(!sh->valid) return;  

    // Se tutto va per il verso giusto, il Ticket in Plain è nel campo CTicket 
    printf("[KDP][TicketB Decryption] PlainTicket obtained\n");
    printf("\n"); 

    /* Ricordiamo che il contenuto del Ticket è il seguente 
       Ticket 
	    * SessionID
	    * SKAB 
	    * ID-A
	    * NonceT 
    */ 
    
    printf("[KDP][TicketB Decryption] Id_session: 0x%02X\n", sh->id_session);
    printf("[KDP][TicketB Decryption] SessionKey: 0x");
    for(int i=0; i< SESSION_KEY_LEN; i++){ 
	printf("%02X", sh->skS[i]); 
    }
    printf("\n");  

    printf("[KDP][TicketB Decryption] ID-DeviceA (sender): 0x");
    for(int i=0; i < DEVICE_ID_LEN; i++){ 
	printf("%02X", sh->id_deviceA[i]); 
    }
    printf("\n");  
    
    printf("[KDP][TicketB Decryption] NonceT (Generated by Trusted): 0x");
    for(int i=0; i < DEVICE_ID_LEN; i++){ 
	printf("%02X", sh->nonceT[i]); 
    }
   
    printf("\n");  
    
    printf("\n");
    printf("==================================================\n");
    printf("        	TICKETB DECRYPT TEST COMPLETED        \n");
    printf("==================================================\n");
    printf("\n");

} 	



void test_save_sessionkey(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** OTTAVO TEST KDP - MSG ENCRYPT *******/ 
    /* NOTA: immaginiamoci nella prospettiva di B che ha appena decifrato il Ticket e vuole salvare SK */ 


    printf("\n");
    printf("==================================================\n");
    printf("            SAVE SKAB TEST STARTED                \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *sk_id = "skab_key";          // ID della K Key
    strncpy(sh->new_keyID, sk_id, sizeof(sh->src_keyID)-1);

     
    // Possiamo eseguire dunque il servizio 
    struct smret r = execute_se_service(*h, 8, 0); 

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP Save SessionKey] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP Save SessionKey] retval from SE: %ld\n", sh->retval);

    printf("\n");
    printf("==================================================\n");
    printf("        	SAVE SKAB TEST COMPLETED              \n");
    printf("==================================================\n");
    printf("\n");

} 	

void test_mac(sehandle *h, struct shared_crypto_kdp *sh)
{

    /***** NONO TEST KDP - MSG ENCRYPT *******/ 
    /* Poniamoci sempre nella prospettiva di B che deve generare un MAC 
     * per dimostrare ad A che possiede la SK */ 

    printf("\n");
    printf("==================================================\n");
    printf("            MAC GEN TEST STARTED                  \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *sk_id = "skab_key";          // ID della K Key
    strncpy(sh->src_keyID, sk_id, sizeof(sh->src_keyID)-1);

    // Id_Session è già presente
    // è necessario generare un nonce
    sh->nonce_len = NONCE_LEN_MAX;  

    struct smret r = execute_se_service(*h, 0, 0); 
    memcpy(sh->nonceD, sh->nonce_buf, NONCE_LEN_MAX); 
   
   
    // Possiamo eseguire dunque il servizio 
    r = execute_se_service(*h, 9, 0); 
    // Il risultato è in mac 

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN KDP MAC Generation] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN KDP MAC Generation] retval from SE: %ld\n", sh->retval);
 
    printf("[KDP][MAC Generation] Mac has been generated: 0x"); 
    for(int i=0; i<16; i++){
	printf("%02X", sh->mac[i]); 
    } 
    printf("\n"); 


    printf("\n");
    printf("==================================================\n");
    printf("        	MAC GEN TEST COMPLETED                \n");
    printf("==================================================\n");
    printf("\n");

} 	


void test_appl_msg_encrypt(sehandle *h, struct shared_crypto_kdp *sh)
{
    /***** DECIMO TEST APPLICATION MSG ENCRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            APPL MSG ENCRYPT TEST STARTED         \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *src = "skab_key"; 
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    /* NOTA: è necessario generare un Nonce ogni volta che si vuole comunicare
     * in maniera sicura */ 

    sh->nonce_len = NONCE_LEN_MAX; 
    struct smret r = execute_se_service(*h, 0, 0); 
    memcpy(sh->nonceD, sh->nonce_buf, NONCE_LEN_MAX); 
    
    // Esempio di Json
    const char *payload =
	"{\n"
	"  \"measurement_type\": \"power_consumption\",\n"
	"  \"value\": 3.72,\n"
	"  \"unit\": \"kWh\",\n"
	"  \"interval\": \"15min\"\n"
        "}";

    strncpy(sh->app_payload, payload, PLD_MAX_LEN); 
    sh->payload_len = strlen(payload); 


    // Possiamo eseguire dunque il servizio 

    r = execute_se_service(*h, 10, 0);  

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN APPL MSG Encryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN APPL MSG Encryption] retval from SE: %ld\n", sh->retval);


    printf("[KDP] APPLICATION MSG Encryption] Payload encrypted: 0x"); 
    for(size_t i=0; i < sh->payload_len; i++){ 
	printf("%02X", sh->CPayload[i]); 
    } 
    printf("\n");
   
    printf("[KDP] APPLICATION MSG Encryption] Tag: 0x"); 
    for(int i=0; i < 16; i++){ 
	printf("%02X", sh->tag[i]); 
    } 
    printf("\n");
    
    printf("\n");
    printf("==================================================\n");
    printf("        	APPL MSG ENCRYPT TEST COMPLETED       \n");
    printf("==================================================\n");
    printf("\n");


}; 



void test_appl_msg_decrypt(sehandle *h, struct shared_crypto_kdp *sh)
{
    /***** DECIMO TEST APPLICATION MSG ENCRYPT *******/ 

    printf("\n");
    printf("==================================================\n");
    printf("            APPL MSG DECRYPT TEST STARTED         \n");
    printf("==================================================\n");
    printf("\n");
    
    // SETTING INPUT

    const char *src = "skab_key"; 
    strncpy(sh->src_keyID, src, sizeof(sh->src_keyID)-1);

    // In ricezione va settato il Nonce ricevuto
    // così come andrebbe settata la dimensione del payload 

    // Possiamo eseguire dunque il servizio 

    struct smret r = execute_se_service(*h, 11, 0);  

    // Controllo i risultati: r.error dovrebbe essere 0 se tutto ok
    printf("[USER][HW-RUN APPL MSG Decryption] execute_se_service returned: value=%ld error=%ld\n", r.value, r.error);
    printf("[USER][HW-RUN APPL MSG Decryption] retval from SE: %ld\n", sh->retval);

    printf("[KDP] APPLICATION MSG Decryption] Payload decrypted: \n"); 
    for(size_t i=0; i < sh->payload_len; i++){ 
	printf("%c", sh->app_payload[i]); 
    } 
    printf("\n");
   
    printf("\n");
    printf("==================================================\n");
    printf("        	APPL MSG DECRYPT TEST COMPLETED       \n");
    printf("==================================================\n");
    printf("\n");


}; 








/*
 * Funzione principale che test_eapa le performance dell'AES
 * Confronta l'implementazione software vs hardware
 */
int user_main(const char *mud_url)
{
    /* 1) "implant" delle 2 Enclave nel Secure Monitor */ 
    implant_se((struct sehead *)eap_splc_bin);
    implant_se((struct sehead *)kdp_splc_bin); 

    /* 2) Boot delle 2 Enclave fornendo memoria e permessi
    * AUTH_ALL = tutti i permessi (scelto per eseguire il test_eap, bisognerebbe utilizzare AUTH_CRYPTO), 
    *1024 = stack size, 1024 = shared memory size
    */
    sehandle h_eap = boot_se((struct sehead *)eap_splc_bin, AUTH_ALL, 1024, 1024, NULL);
    if ((sehandle)0 == h_eap) {
        printf("boot_se EAP failed\n");
        return -1;
    }

    sehandle h_kdp = boot_se((struct sehead *)kdp_splc_bin, AUTH_ALL, 1024, 1024, NULL);
    if ((sehandle)0 == h_kdp) {
        printf("boot_se EAP failed\n");
        return -1;
    }

    /* 3) Salvataggio dell’indirizzo della memoria condivisa tra user e il SE */
    struct mem_cfg m_eap = get_se_shm(h_eap);
    printf("EAP Enclave shared memory address: %p, size: %zu\n", m_eap.addr, m_eap.size);

    struct mem_cfg m_kdp = get_se_shm(h_kdp);
    printf("KDP Enclave shared memory address: %p, size: %zu\n", m_kdp.addr, m_kdp.size);
    
    
    /* 4) Cast delle strutture di memoria condivise di default a shared_crypto
    *    definite nel file ../inc/user.h
    */
    
    struct shared_crypto_eap_psk *sh_eap = (struct shared_crypto_eap_psk *)m_eap.addr;
    struct shared_crypto_kdp *sh_kdp = (struct shared_crypto_kdp *)m_kdp.addr; 

    test_eap_ak_kdk(&h_eap, sh_eap); 
    test_eap_tek_msk(&h_eap, sh_eap);  
    test_eap_mac_p(&h_eap, sh_eap);   
    test_eap_mac_s(&h_eap, sh_eap); 
    test_eap_eax_encrypt(&h_eap, sh_eap);
    test_eap_eax_decrypt(&h_eap, sh_eap);  
    
    test_kdp_k_msk(&h_kdp, sh_kdp); // Device A (B) e T derivano K_AT (K_TB) 
    test_mkt(&h_kdp, sh_kdp);  // Trusted genera la Master Key
    test_session_key(&h_kdp, sh_kdp); // Trusted genera SKAB 
    test_ticket_encrypt(&h_kdp, sh_kdp);  // Trusted genera Ticket per MSG#1
    test_msg_encrypt(&h_kdp, sh_kdp); // Trusted fa cifratura EAX per Device A 
    test_msg_decrypt(&h_kdp, sh_kdp); // Device A fa decifratura EAX del MSG #1 per ottenere Ticket e SK
    test_ticket_decrypt(&h_kdp, sh_kdp); // Device B riceve il Ticket e lo decifra 
    test_save_sessionkey(&h_kdp, sh_kdp); // Device A salva SK 
    test_mac(&h_kdp, sh_kdp); // Device A (B) generano il MAC da inserire nel messaggio #2 (#3) 
    
    // cifratura e decifratura di messaggi applicativi cifrati con EAX con la chiave di sessione 
    test_appl_msg_encrypt(&h_kdp, sh_kdp); 
    test_appl_msg_decrypt(&h_kdp, sh_kdp); 

    // Shutdown del SE
    shutdown_se(h_eap);
    shutdown_se(h_kdp); 
   
    return 0;
}
