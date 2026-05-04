#include "session_table_handler.h"
#include "session_eap_psk.h"
#include "session_kd.h"

/* EAP ENTRY TABLE */

static session_eap_entry_t* session_eap_entry_find(uint8_t device_id)
{
    for (uint32_t i = 0; i < SESSION_EAP_MAX_DEVICES; i++)
    {
        if (eap_entry_table[i].device_id == device_id)
        {
            return &eap_entry_table[i];
        }
    }
    return NULL;
}

static session_eap_entry_t* session_eap_entry_find_free(void)
{
    return session_eap_entry_find(SESSION_EAP_ENTRY_FREE_ID);
}

static session_eap_entry_t* session_eap_entry_get_or_create(uint8_t device_id, const ip6_addr_t *addr)
{
    session_eap_entry_t *entry = session_eap_entry_find(device_id);

    if (entry == NULL)
    {
        entry = session_eap_entry_find_free();

        if (entry == NULL)
        {
            PRINT_USER_IT_CRITICAL("EAP-PSK: entry table full, cannot authenticate device %u\n", device_id);
            return NULL;
        }

        /* Initialise the new entry */
        memset(entry, 0, sizeof(*entry));
        entry->device_id    = device_id;
        if (addr != NULL)
        {
            memcpy(&entry->device_addr, addr, sizeof(ip6_addr_t));
        }
        entry->curr_state   = SESSION_ST_EAP_IDLE;
        entry->curr_event   = SESSION_EV_EAP_NONE;

        /* Randomise the initial EAP identifier (RFC 4764 recommendation) */
        srand(HAL_GetTick());
        entry->eap_id = (uint8_t)(rand() & 0xFFU);

        PRINT_USER_IT_INFO("EAP-PSK: created entry for device %u\n", device_id);
    }

    return entry;
}

static void session_eap_entry_remove(session_eap_entry_t *entry)
{
    assert(entry != NULL);
    PRINT_USER_IT_INFO("EAP-PSK: removing entry for device %u\n", entry->device_id);
    memset(entry, 0, sizeof(*entry));
    entry->device_id = SESSION_EAP_ENTRY_FREE_ID;
}


/* KD ENTRY TABLE */

static ticket_entry_t* ticket_entry_find(uint8_t first_dev_id, uint8_t second_dev_id)
{ 
    for(uint8_t i=0; i < TICKET_MAX_SESSION; i++) {
        if(TICKET_ENTRY_FREE_ID == ticket_entry_table[i].first_dev_id)
        {
            return &ticket_entry_table[i];
        } 
    }
    
    return NULL; 

}

static ticket_entry_t* ticket_entry_find_free(void)
{
    
    for(uint8_t i=0; i < TICKET_MAX_SESSION; i++) {
        if(TICKET_ENTRY_FREE_ID == ticket_entry_table[i].first_dev_id)
        {
            return &ticket_entry_table[i];
        } 
    }
    return NULL; 
}

static ticket_entry_t* ticket_entry_get_or_create(uint8_t first_dev_id, uint8_t second_dev_id)
{
    static ticket_entry_t *entry = ticket_entry_find(first_dev_id, second_dev_id); 
    if(entry) return entry; 
    
    return ticket_entry_find_free(void); 
}

static void ticket_entry_remove(ticket_entry_t *entry)
{
    /* TODO: implement */
    (void)entry;
}

