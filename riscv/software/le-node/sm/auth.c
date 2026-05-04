#include <stddef.h>

#include "sm.h"
#include "smapi_nums.h"
#include "errno.h"
#include "conf.h"

uint32_t max_auth(uint32_t a1, uint32_t a2)
{
    return a1 & a2;
}

bool is_authorised(unsigned long event_type, uint32_t a)
{
    static size_t unauth_actions_count = 0;

    bool res = false;

    switch (event_type)
    {
    // Always authorised actions
    case SMNUM_RETURN_FROM_SE:
    case SMNUM_UPDATE_MY_DIGEST:
    case SMNUM_GET_SE_SHM:
        res = true;
        break;
    
    // SE related operations
    case SMNUM_IMPLANT_SE:
    case SMNUM_IMPLANT_SE_DIGEST:
    case SMNUM_BOOT_SE:
        res = (a & AUTH_SE_IMPLANT_BOOT) != 0;
        break;

    case SMNUM_REMOVE_SE_DIGEST:
    case SMNUM_SHUTDOWN_SE:
        res = (a & AUTH_SE_REMOVE_SHUTDOWN) != 0;
        break;

    case SMNUM_EXEC_SE_SERV:
        res = (a & AUTH_SE_EXECUTE) != 0;
        break;

    case SMNUM_CHANGE_SE_AUTH:
        res = (a & AUTH_SE_CHANGEAUTHS) != 0;
        break;
    
    // File related operations
    case SMNUM_OPEN_FILE:
    case SMNUM_CLOSE_FILE:
    case SMNUM_READ_FILE:
    case SMNUM_MKDIR:
        res = (a & AUTH_FILE_OPEN_CLOSE_READ_MKDIR) != 0;
        break;

    case SMNUM_WRITE_FILE:
        res = (a & AUTH_FILE_WRITE) != 0;
        break;

    case SMNUM_LINK_FILE:
    case SMNUM_UNLINK_FILE:
    case SMNUM_RMDIR:
        res = (a & AUTH_FILE_LINK_UNLINK_RMDIR) != 0;
        break;
    
    // Crypto related operations
    case SMNUM_RANDOM_NUM:
    case SMNUM_DIGEST_DATA_SHA256:
    case SMNUM_DIGEST_DATA_SHA256_V:
        res = (a & AUTH_CRYPTO_KEYLESS) != 0;
        break;

    case SMNUM_CREATE_KEY:
    case SMNUM_DERIVE_KEY:
    case SMNUM_AUTH_DATA_HMAC256:
    case SMNUM_AUTH_DATA_HMAC256_V:
    case SMNUM_ENCRYPT_AESCBC:
    case SMNUM_DECRYPT_AESCBC:
    case SMNUM_HW_AES_ENCRYPT_CBC:
    case SMNUM_HW_AES_DECRYPT_CBC:
    case SMNUM_SW_AES_ENCRYPT_CTR: 
    case SMNUM_HW_AES_ENCRYPT_CTR:
    case SMNUM_SW_DERIVE_KEY_MCTR: 
    case SMNUM_HW_DERIVE_KEY_MCTR: 
    case SMNUM_SW_DERIVE_KEY_CKDF: 
    case SMNUM_HW_DERIVE_KEY_CKDF:
    case SMNUM_SW_AES_CKDF: 
    case SMNUM_HW_AES_CKDF:
    case SMNUM_SW_AES_CMAC: 	
    case SMNUM_HW_AES_CMAC: 
    case SMNUM_SW_AES_EAX_ENCRYPT: 
    case SMNUM_HW_AES_EAX_ENCRYPT:
    case SMNUM_SW_AES_EAX_DECRYPT: 
    case SMNUM_HW_AES_EAX_DECRYPT: 	
   	res = (a & AUTH_CRYPTO_KEYFULL) != 0;
        break;

    case SMNUM_DELETE_KEY:
        res = (a & AUTH_CRYPTO_DELKEY) != 0;
        break;
    
    case SMNUM_SECURITY_LOCK:
        res = (a & AUTH_SECURITY_LOCK) != 0;
        break;
    
    default: break;
    }

    if (!res && ++unauth_actions_count >= AUTHORISATIONS_MAX_NUM_UNAUTH_ACTIONS)
        security_lock();

    return res;
}
