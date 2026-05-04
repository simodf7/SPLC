#include "session_eap_psk_helper.h"
#include "session_eap_psk_crypto.h"

void eap_psk_build_msg1(eap_psk_msg1_t *msg, session_eap_entry_t *entry, session_msg_t* out_msg)
{

    /* Build EAP message #1 payload */
   
    memset(msg, 0, sizeof(*msg));
    msg->header.code = 1; 
    msg->header.id   = entry->eap_id; 
    msg->header.type = EAP_PSK_IANA_TYPE; 

    msg->flags.t = 0; 
    msg->flags.reserved = 0; 


    /* Generate RAND_S and store it in the crypto context  */
    eap_psk_generate_rand(entry->eap_data.rand_s, EAP_PSK_RAND_LEN);
    memcpy(msg->rand_s, entry->eap_data.rand_s, EAP_PSK_RAND_LEN);

    /* Copy the server identity (IDS) into the message */
    memcpy(msg->id_trusted, id_trusted, DEVICE_ID_LEN);
  
    msg->header.length = sizeof(*msg); 

    /* Wrap into a session_msg_t and send over UDP */
    
    out_msg->msg_type    = SESSION_MSG_EAP;  
    out_msg->msg_subtype = SESSION_MSG_EAP_PSK_1;
    out_msg->size        = sizeof(eap_psk_msg1_t);
    out_msg->payload     = msg;
}


bool eap_psk_validate_msg1(const eap_psk_msg1_t *msg){
    
    bool check = true; 

    // check all is good in header 
    const eap_hdr_t *header = &msg->header;
    if(header->code != 1 || header->type != EAP_PSK_IANA_TYPE){
        check = false;  
    }

    if(msg->flags.t != 0){
        check = false;  
    }

    return check; 
};


void decode_msg1(const eap_psk_msg1_t *msg, session_eap_psk_context_t *ctx){

    // take eap_id
    ctx->eap_id = msg->header.identifier; 

    // take rand_s
    memcpy(ctx->rand_s, msg->rand_s, EAP_PSK_RAND_LEN); 

}



void eap_psk_build_msg2(eap_psk_msg2_t *msg, session_eap_psk_context_t *ctx, session_msg_t* out_msg)
{
    
    /* Build EAP message #2 payload */
    
    memset(msg, 0, sizeof(*msg));
    msg->header.code = 2; 
    msg->header.id   = ctx->eap_id; 
    msg->header.type = EAP_PSK_IANA_TYPE; 

    msg->flags.t = 1; 
    msg->flags.reserved = 0; 


    memcpy(msg->rand_s, ctx->rand_s, EAP_PSK_RAND_LEN); 

    eap_psk_generate_rand(ctx->rand_p, EAP_PSK_RAND_LEN);
    memcpy(msg->rand_p, ctx->rand_p, EAP_PSK_RAND_LEN); 
    

    eap_psk_compute_mac_p(ctx); 
    memcpy(msg->mac_p, ctx->mac_p, 16); 
    memcpy(msg->id_device, id_curr_device, DEVICE_ID_LEN); 


    msg->header.length = sizeof(*msg); 


    out_msg->msg_type    = SESSION_MSG_EAP;  
    out_msg->msg_subtype = SESSION_MSG_EAP_PSK_2;
    out_msg->size        = sizeof(eap_psk_msg2_t);
    out_msg->payload     = msg;

}


bool eap_psk_validate_msg2(const eap_psk_msg2_t *msg, const session_eap_entry_t *entry)
{
    
    bool check = true; 


    // check all is good in header 
    const eap_hdr_t *header = &msg->header;

    if (header->id != entry->eap_id)
    {
        PRINT_USER_IT_WARNING("EAP-PSK: msg #2 from device %u — EAP ID mismatch, discarding\n",
                              entry->device_id);
        check = false
    }

    if(header->code != 2 || header->type != EAP_PSK_IANA_TYPE){
        check = false;  
    }

    if(msg->flags.t != 1){
        check = false;  
    }

    if(memcmp(msg->rand_s, entry->eap_data.rand_s, EAP_PSK_RAND_LEN) != 0){
        check = false; 
    }

    if(!eap_psk_verify_mac_p(entry)){
        check = false; 
    }

    return check;

};



void decode_msg2(const eap_psk_msg2_t *msg, session_eap_entry_t *entry)
{ 

    /* --- Step 2: decode RAND_P and ID_P --- */
    memcpy(entry->eap_data.rand_p, msg->rand_p, EAP_PSK_RAND_LEN);
    memcpy(entry->eap_data.id_p,   msg->id_p,   DEVICE_ID_LEN);
    
}



void eap_psk_build_msg3(eap_psk_msg3_t *msg, session_eap_entry_t *entry, session_msg_t* out_msg)
{
    
    
    memset(msg, 0, sizeof(*msg));
    msg->header.code = 1; 
    msg->header.identifier = ++(entry->eap_id); 
    msg->header.type = EAP_PSK_IANA_TYPE; 

    msg->flags.t = 2; 
    msg->flags.reserved = 0; 

    
    memcpy(msg->rand_s, entry->eap_data.rand_s, EAP_PSK_RAND_LEN);

    eap_psk_compute_mac_s(entry->eap_data); 
    memcpy(msg->mac_s, entry->eap_data.mac_s, 16); 

    pchannel_flags_t flags; 
    flags.R = 0b10; 
    // e is set to 0 

    eap_psk_build_pchannel0(entry->eap_data, flags); // sets pchannel0 in entry
    memcpy(msg->pchannel0, entry->eap_data.pchannel0, sizeof(pchannel_t)); 


    msg->header.length = sizeof(*msg);

    out_msg->msg_type    = SESSION_MSG_EAP;
    out_msg->msg_subtype = SESSION_MSG_EAP_PSK_3;
    out_msg->size        = sizeof(eap_psk_msg3_t);
    out_msg->payload     = msg;

    
}


bool eap_psk_validate_msg3(const eap_psk_msg3_t *msg, const session_eap_psk_context_t *ctx)
{
    
    bool check = true; 

    // check all is good in header 
    const eap_hdr_t *header = &msg->header;

    if(header->code != 1 || header->type != EAP_PSK_IANA_TYPE){
        check = false;  
    }

    if(msg->flags.t != 2){
        check = false;  
    }

    if(memcmp(msg->rand_s, ctx->rand_s, EAP_PSK_RAND_LEN) != 0) {
        check = false; 
    }

    if(!eap_psk_verify_mac_s(ctx)){
        check = false; 
    }

    if(!eap_psk_verify_pchannel0(ctx)){
        check = false; 
    }


    return check;

};



void eap_psk_build_msg4(eap_psk_msg4_t *msg, const session_eap_psk_context_t *ctx, session_msg_t* out_msg)
{
    
    /* Build EAP message #4 payload */
    
    memset(msg, 0, sizeof(*msg));
    msg->header.code = 2; 
    msg->header.identifier = ctx->eap_id; 
    msg->header.type = EAP_PSK_IANA_TYPE; 

    msg->flags.t = 3; 
    msg->flags.reserved = 0; 

    
    memcpy(msg->rand_s, ctx->rand_s, EAP_PSK_RAND_LEN);

    pchannel_flags_t flags; 
    flags.R = 0b10; 
    // e is set to 0 

    eap_psk_build_pchannel1(ctx, flags); // sets pchannel0 in entry
    memcpy(msg->pchannel1, ctx->pchannel1, sizeof(pchannel_t)); 


    msg->header.length = sizeof(*msg);
    out_msg->msg_type    = SESSION_MSG_EAP;
    out_msg->msg_subtype = SESSION_MSG_EAP_PSK_4;
    out_msg->size        = sizeof(eap_psk_msg4_t);
    out_msg->payload     = msg;

    
}


bool eap_psk_validate_msg4(const eap_psk_msg4_t *msg, const session_eap_entry_t *entry)
{
    
    bool check = true; 

    // check all is good in header 
    const eap_hdr_t *header = &msg->header;

    if (header->id != entry->eap_data.eap_id)
    {
        check = false
    }

    if(header->code != 2 || header->type != EAP_PSK_IANA_TYPE){
        check = false;  
    }

    if(msg->flags.t != 3){
        check = false;  
    }

    if(memcmp(msg->rand_s, ctx->rand_s, EAP_PSK_RAND_LEN) != 0) {
        check = false; 
    }
    
    if(!eap_psk_verify_pchannel1(entry)){
        check = false; 
    }


    return check;

};