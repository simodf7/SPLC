#include "session_kd_helper.h"
#include "session_kd_crypto.h"

void kd_build_msg1(kd_msg1_t *msg, kd_context_t *ctx, session_msg_t *out_msg)
{
    kd_generate_rand(ctx->id_session, 1);
    kd_generate_rand(ctx->nonce, NONCE_LEN); 

    /* questa funzione prende 
        * ctx->id_session, 
        * ctx->NonceT, 
        * ctx->id_first_dev
        * ctx->id_second_dev
        (IMPLICITAMENTE LA CHIAVE DEL SECONDO DEVICE)
        fa EAX e restiuisce il Tag e il Ticket in: 
        * ctx->TicketB 
        * ctx->TagTicket
    */
    kd_eax_ticket("k_bt", ctx); 


    /* questa funzione prende 
        * ctx->id_session, 
        * ctx->NonceT, 
        * ctx->id_first_dev
        * ctx->id_second_dev
      (IMPLICITAMENTE UNA LABEL e LA MKT)
        e derivano la chiave di sessione
        che viene posta in ctx->sks
    */

    kd_derive_session_key("mkt", ctx); 
    
    /* questa funzione prende 
        * ctx->NonceT
        * ctx->id_session
        * ctx->sks
        * ctx->TagTicket 
        * ctx->TicketB
        (IMPLICITAMENTE K_AT)
        e pone il risultato in 
        ctx->tagMSG
        ctx->cipherMSG1 
    */
    kd_eax_encrypt_msg1("k_at", SESSION_MSG_KD, SESSION_MSG_KD_MSG1, sizeof(kd_msg1_t), ctx);
    
   
    memset(msg, 0, sizeof(*msg));    
    memcpy(msg->nonceT, ctx->nonce, NONCE_LEN); 
    memcpy(msg->tag, ctx->tagMSG, TAG_LEN); 
    memcpy(msg->ciphertext, ctx->cipherMSG1, MSG1_CPAYLOAD_LEN); 
    
    out_msg->msg_type    = SESSION_MSG_KD;  
    out_msg->msg_subtype = SESSION_MSG_KD_MSG1;
    out_msg->size        = sizeof(kd_msg1_t);
    out_msg->payload     = msg;

}; 

void decode_msg1(const session_msg_t *msg, kd_context_t *ctx){

    /* Siamo nella prospettiva di A */
    const kd_msg1_t *payload = (const kd_msg1_t *) msg->payload; 

    memcpy(ctx->nonce, payload->nonceT,  NONCE_LEN); 

    /* Questa funzione prende: 
        * header
        * ctx->NonceT
        * ctx->TagMSG
        * ctx->cipherMSG1
        e pone in risultato in: 
        ctx->id_session, 
        ctx->sks, 
        ctx->ticketB, 
        ctx->tagticket  
    */
    kd_eax_decrypt_msg1("k_at", msg->msg_type, msg->msg_subtype, msg->size, ctx);
    save_key("sk", ctx->sks); 
}



void kd_build_msg2(kd_msg2_t *msg, kd_context_t *ctx, session_msg_t *out_msg)
{
    memset(msg, 0, sizeof(*msg)); 
    msg->session_id = ctx->id_session;   
    memcpy(msg->nonceT, ctx->nonce, NONCE_LEN); 
    memcpy(msg->ticket, ctx->TicketB, TICKET_LEN); 
    memcpy(msg->tag_ticket, ctx->tagTicket, TAG_LEN); 
    
    kd_generate_rand(ctx->nonce, NONCE_LEN); 
    kd_generate_mac("sk", ctx); /* Prende ctx->nonce, ctx->id_session e pone il risultato in ctx->mac */ 

    memcpy(msg->nonceD, ctx->nonce, NONCE_LEN); 
    memcpy(msg->mac_A, ctx->mac, 16); 

    out_msg->msg_type    = SESSION_MSG_KD;  
    out_msg->msg_subtype = SESSION_MSG_KD_MSG2;
    out_msg->size        = sizeof(kd_msg2_t);
    out_msg->payload     = msg;

};

bool kd_decode_msg2(const kd_msg2_t *msg, kd_context_t *ctx){

    bool success = true; 
    /* Siamo nella prospettiva di B */
    memcpy(ctx->nonce, msg->nonceT,  NONCE_LEN); 
    ctx->id_session = msg->session_id;
    memcpy(ctx->tagTicket, msg->tag_ticket, TAG_LEN); 
    memcpy(ctx->TicketB, msg->ticket, TICKET_LEN); 

    /* Deve verificare che il Tag sia valido e che i dati siano ricevuti siano corretti . 
    Salva la chiave    */
    success = kd_eax_decrypt_ticket("k_tb", ctx);
    save_key("sk", ctx->sks); 

    return success; 
}



bool kd_validate_msg2(const kd_msg2_t *msg, kd_context_t *ctx){

    bool success = true; 

    if(!kd_decode_msg2){
        success = false; 
    }


    if(!kd_verify_mac("sk", msg->mac_A, ctx->nonce, ctx->id_session)){ 
        success = false; 
    }

    return success; 
}


void kd_build_msg3(kd_msg3_t *msg, kd_context_t *ctx, session_msg_t *out_msg)
{ 

    memset(msg, 0, sizeof(*msg));  
    kd_generate_rand(ctx->nonce, NONCE_LEN); 
    kd_generate_mac("sk", ctx); /* Prende ctx->nonce, ctx->id_session e pone il risultato in ctx->mac */ 

    memcpy(msg->nonceD, ctx->nonce, NONCE_LEN); 
    memcpy(msg->mac_B, ctx->mac, 16); 

    out_msg->msg_type    = SESSION_MSG_KD;  
    out_msg->msg_subtype = SESSION_MSG_KD_MSG3;
    out_msg->size        = sizeof(kd_msg3_t);
    out_msg->payload     = msg;



}; 


bool kd_validate_msg3(const kd_msg3_t *msg, kd_context_t *ctx){

    bool success = true; 
    memcpy(ctx->nonce, msg->nonceD, NONCE_LEN); 

    iif(!kd_verify_mac("sk", msg->mac_B, ctx->nonce, ctx->id_session)){ 
        success = false; 
    }

    return success; 
}

