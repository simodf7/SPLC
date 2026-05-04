/**
  ******************************************************************************
  * @file    g3_comm.h
  * @author  AMG/IPC Application Team
  * @brief   Header file for the G3 communication.
*/ 

// #if ENABLE_SECURE_SESSION

#ifndef SESSION_TABLE_HANDLER_H_
#define SESSION_TABLE_HANDLER_H_



typedef struct session_eap_entry_str
{
    uint8_t                 device_id[DEVICE_ID_LEN];      /*  Peer device identifier */ 
    ip6_addr_t              device_addr;                   /* IPv6 address of the peer device  */
    session_eap_psk_fsm_t   eap_fsm; 
    session_eap_context_t   eap_data;                      /* EAP-PSK context           */
    const session_msg_t     *pending_msg; 

} session_eap_entry_t;



typedef struct kd_entry_str
{
    kd_fsm_t                kd_fsm;
    kd_data_t               kd_data;            /* KD context        */

    const session_msg_t    *pending_msg;        /* Message waiting to be processed  */


    ip6_addr_t              first_dev_addr;     /* IPv6 address of device 1        */
    ip6_addr_t              second_dev_addr;    /* IPv6 address of device 2        */

    uint8_t                 first_dev_id[DEVICE_ID_LEN];       /* Identifier of the first device  */
    uint8_t                 second_dev_id[DEVICE_ID_LEN];      /* Identifier of the second device */

} kd_entry_t;




/* Public Functions */

/* Entry-table helpers */
static session_eap_entry_t*     session_eap_entry_find(uint8_t device_id);
static session_eap_entry_t*     session_eap_entry_find_free(void);
static session_eap_entry_t*     session_eap_entry_get_or_create(uint8_t device_id, const ip6_addr_t *addr);
static void                     session_eap_entry_remove(session_eap_entry_t *entry);
static bool                     session_eap_entry_check_timeout(session_eap_entry_t *entry);

/* Entry-table helpers */
static kd_entry_t*              kd_entry_find          (uint8_t first_dev_id);
static kd_entry_t*              kd_entry_find_free      (void);
static kd_entry_t*              kd_entry_get_or_create  (uint8_t first_dev_id, uint8_t second_dev_id,
                                                     const ip6_addr_t *first_addr,
                                                     const ip6_addr_t *second_addr);
static void                     kd_entry_remove         (ticket_entry_t *entry);
static bool                     kd_entry_check_timeout  (ticket_entry_t *entry);





#endif /* SESSION_TABLE_HANDLER_H
// #endif 