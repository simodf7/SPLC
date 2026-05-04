/*******************************************************************************
  * @file    session_comm.h
  * @author  Simone Di Fraia
  * @brief   Header file for the Session PLC communication.
*******************************************************************************/

// #if ENABLE_SECURE_SESSION

#ifndef SESSION_COMM_H_
#define SESSION_COMM_H_

#include "session_conf.h"

typedef enum session_msg_type_enum{
    SESSION_MSG_CTRL            = 0x0U,
    SESSION_MSG_EAP             = 0x1U, 
    SESSION_MSG_KD              = 0x2U 
} session_msg_type_t; 



typedef enum session_msg_sub_type_enum{
	/* EAP-PSK messages */
    SESSION_MSG_EAP_PSK_1       = 0x01U,    /*!< EAP-PSK Message 1 (Server → Client) */
    SESSION_MSG_EAP_PSK_2       = 0x02U,    /*!< EAP-PSK Message 2 (Client → Server) */
    SESSION_MSG_EAP_PSK_3       = 0x03U,    /*!< EAP-PSK Message 3 (Server → Client) */ 
    SESSION_MSG_EAP_PSK_4       = 0x04U,    /*!< EAP-PSK Message 4 (Client → Server) */

    /* Key distribution messages */
    SESSION_MSG_KD_MSG1         = 0x10U,    /* Sent by Trusted to Device A */     
    SESSION_MSG_KD_MSG2         = 0x11U,    /* Sent by Device A to Device B*/
    SESSION_MSG_KD_MSG3         = 0x12U,    /* Sent by Device B to Device A*/

    /* Session control messages */
	SESSION_MSG_REQ_AUTH 		= 0x20U,    /* Device wants to start Authentication process with Trusted */
    SESSION_MSG_REQ_SESSION     = 0x21U,    /* Device wants to setup a session with another Device */
	SESSION_MSG_REJECT_SESSION  = 0x22U,    
    SESSION_MSG_DEV_READY      	= 0x23U,    /* Trusted signals Device B has been (maybe already) authenticated */
    SESSION_MSG_APPL            = 0x24U,    /* Payload is an Application message */
    SESSION_MSG_CLOSE_SESSION   = 0x25U     /* Session close notification */
} session_msg_sub_type_t; 



/* Session Message Structure */
typedef struct session_msg_str
{
	session_msg_type_t	    msg_type;
    session_msg_sub_type_t  msg_subtype; 
    size_t				    size;
    void				    *payload;
} session_msg_t;


typedef struct session_request_auth_msg_str{
    ip6_addr_t  device_addr;   		                /* Indirizzo IPv6 del richiedente   */
	uint8_t     device_id[DEVICE_ID_LEN];           /* ID del device richiedente        */
} req_auth_msg_t; 


/* -----------------------------------------------------------------------
 * SESSION_MSG_REQ_SESSION  (Initiator → Trusted → Non-Initiator)
 * Trasporta l'identità del richiedente e l'indirizzo del destinatario,
 * in modo che il Trusted possa fare da proxy e il Non-Initiator sappia
 * chi vuole aprire la sessione.
 * -------------------------------------------------------------------- */
typedef struct session_req_session_msg_str
{
    ip6_addr_t  initiator_addr;         /*  Indirizzo IPv6 dell'initiator    */
    ip6_addr_t  target_addr;            /*  Indirizzo IPv6 del destinatario  */    
    uint8_t     target_id[DEVICE_ID_LEN];              /*  ID del device destinatario       */
    uint8_t     initiator_id[DEVICE_ID_LEN];           /*  ID del device initiator          */
} req_session_msg_t;


typedef struct session_reject_session_msg_str
{
    uint8_t     reserved;   
} reject_session_msg_t;



/* -----------------------------------------------------------------------
 * SESSION_MSG_DEV_READY  (Trusted → Initiator)
 * Nessun payload aggiuntivo: la sola ricezione di questo messaggio
 * segnala che la fase EAP-PSK con il Non-Initiator è completata.
 * -------------------------------------------------------------------- */
typedef struct session_dev_ready_msg_str
{
    uint8_t     reserved;   
} dev_ready_msg_t;



/* -----------------------------------------------------------------------
 * SESSION_MSG_APPL  (Initiator ↔ Non-Initiator)
 * Wrapper per dati applicativi cifrati durante la sessione attiva.
 * -------------------------------------------------------------------- */
typedef struct session_appl_msg_str
{
    uint16_t    seq_number;             /*  Sequence number (anti-replay)    */
    uint16_t    payload_len;            /*  Lunghezza del payload cifrato    */
    uint8_t     payload[];              /*  Dati cifrati  */
} appl_msg_t;


typedef enum session_close_reason_enum
{
    SESSION_CLOSE_NORMAL    = 0x00U,    /* Chiusura pulita                 */
    SESSION_CLOSE_TIMEOUT   = 0x01U,    /* Chiusura per timeout            */
    SESSION_CLOSE_ERROR     = 0x02U,    /* Chiusura per errore interno     */
    SESSION_CLOSE_REJECTED  = 0x03U,    /* Sessione rifiutata dal peer     */
} session_close_reason_t;


/* -----------------------------------------------------------------------
 * SESSION_MSG_SESSION_CLOSE  (Initiator ↔ Non-Initiator)
 * Chiunque può chiudere la sessione. Trasporta un error code per
 * distinguere una chiusura pulita da una per errore.
 * -------------------------------------------------------------------- */
typedef struct session_close_msg_str
{
    session_close_reason_t  reason;     /*!< Motivo della chiusura           */
} close_msg_t;




/* EAP MESSAGES */

#define EAP_PSK_IANA_TYPE 47
#define EAP_PSK_RAND_LEN 16 
#define TAG_LEN 16 

typedef struct{
    uint8_t  code; 
    uint8_t  identifier; 
    uint16_t length; 
    uint8_t  type;  // always 47 for EAP-PSK; 
} eap_hdr_t; 

typedef struct{
   
} eap_psk_flags_t; // bitfield for flags


typedef struct eap_msg1_str{
    eap_hdr_t       header; 
    eap_psk_flags_t flags; 
    uint8_t         rand_s[EAP_PSK_RAND_LEN]; 
    uint8_t         id_trusted[DEVICE_ID_LEN]; 
} eap_psk_msg1_t; 

typedef struct eap_msg2_str{
    eap_hdr_t       header; 
    eap_psk_flags_t flags; 
    uint8_t         id_device[DEVICE_ID_LEN];
    uint8_t         rand_s[EAP_PSK_RAND_LEN]; 
    uint8_t         rand_p[EAP_PSK_RAND_LEN];
    uint8_t         mac_p[16]; 
} eap_psk_msg2_t; 


typedef struct{
    uint8_t  ciphertext; 
    uint32_t nonce; 
    uint8_t  tag[TAG_LEN]; 
} pchannel_t; 

typedef struct{ 
    uint8_t R:2;
    uint8_t E:1; 
    uint8_t reserved:5; 
} pchannel_flags_t; 


typedef struct eap_msg3_str{
    eap_hdr_t       header; 
    eap_psk_flags_t flags; 
    uint8_t         rand_s[EAP_PSK_RAND_LEN]; 
    uint8_t         mac_s[16]; 
    pchannel_t      pchannel0; 
} eap_psk_msg3_t; 

typedef struct eap_msg4_str{
    eap_hdr_t       header; 
    eap_psk_flags_t flags; 
    uint8_t         rand_s[EAP_PSK_RAND_LEN]; 
    pchannel_t      pchannel1; 
} eap_psk_msg4_t; 





/* Key Distribution Messages */ 

#define NONCE_LEN 16
#define SESSION_KEY_LEN 64 
#define TICKET_LEN (1 + SESSION_KEY_LEN + DEVICE_ID_LEN + NONCE_LEN)
#define MSG1_CPAYLOAD_LEN (1 + SESSION_KEY_LEN + TICKET_LEN + TAG_LEN)  

/* -----------------------------------------------------------------------
 * MSG1: Trusted → A 
 * Payload non cifrato: nonce generato dal Trusted, Tag Eax del messaggio 
 * Payload cifrato con EAX (K_AT): SessionID, Session Key, TicketB, TagTicketB 
 * -------------------------------------------------------------------- */

typedef struct {
    uint8_t nonceT[NONCE_LEN]; 
    uint8_t tag[TAG_LEN]; 
    uint8_t ciphertext[MSG1_CPAYLOAD_LEN]; 
} kd_msg1_t; 


/* Struttura che otteniamo dalla decifratura del MSG1 */
typedef struct {
    uint8_t     session_id;
    uint8_t     session_key[SESSION_KEY_LEN]; 
    /* Ottenuti con EAX usando K_TB */
    uint8_t     tag_ticket[TAG_LEN]; 
    uint8_t     ticket[TICKET_LEN];                   
} kd_msg1_plain_t;


/* -------------------------------------------------------------------- */
typedef struct {
    uint8_t session_id; 
    uint8_t session_key[SESSION_KEY_LEN];
    uint8_t peer_id[DEVICE_ID_LEN];
    uint8_t nonceT[NONCE_LEN]; 
} ticket_plain_t; 


/* -----------------------------------------------------------------------
 * MSG2: A → B
 * Il Device A inoltra il ticket cifrato e il tag generati dal Trusted 
 * Inoltra poi un Nonce generato da esso e un MAC per dimostrare a B che ha la chiave SK 
 * -------------------------------------------------------------------- */
typedef struct {
    uint8_t     session_id; 
    uint8_t     nonceD[NONCE_LEN];     /* nonce_A */
    uint8_t     nonceT[NONCE_LEN]; 
    uint8_t     mac_A[16]; 
    uint8_t     tag_ticket[TAG_LEN]; 
    uin8t_t     ticket[TICKET_LEN];        
} kd_msg2_t;



/* -----------------------------------------------------------------------
 * MSG3: B → A 
 * Il device B agisce in maniera identica ad A. Genera un nonce e un MAC con la SK. 
 * -------------------------------------------------------------------- */

typedef struct {
    uint8_t     nonceD[NONCE_LEN];     /* nonce_A */
    uint8_t     mac_B[16];         
} kd_msg3_t;


/* APPLICATION MESSAGES */
typedef { 
    uint8_t   nonce[NONCE_LEN]; 
    uint16_t  payload_len; 
    uint8_t   payload[]; 
} appl_msg_t; 



#endif /* SESSION_COMM_H_ */
// #endif /* ENABLE_SECURE_SESSION */ 