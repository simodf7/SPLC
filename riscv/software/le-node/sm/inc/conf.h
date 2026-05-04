#ifndef CONF_H
#define CONF_H

#include "imfs.h"
#include "aes.h"

/* Maximum number of unauthorized actions before device TEE security lockout */
#define AUTHORISATIONS_MAX_NUM_UNAUTH_ACTIONS   10

/* Maximum number of concurrently booted SEs */
#define ENCLAVE_MAX_NUM_SE              8
/* Maximum size, in power of 2, for a SE or its shared memory size */
#define ENCLAVE_MAX_SE_SHM_SIZE_LOG2    12
/* Maximum number of SE services nested calls */
#define ENCLAVE_MAX_NESTED_CALLS        8

/* Max length for a Key Identifier */
#define CRYPTO_MAX_LEN_KEY_ID           32 //cambiato  
/* Length of a key secret */
#define CRYPTO_LEN_KEY_SECRET           64 //cambiato
/* AES block size */
#define CRYPTO_AES_BLOCK_SIZE           AES_BLOCK_SIZE

/* Maximum number of fnodes in the secure storage */
#define STORAGE_MAX_NUM_FNODES          20
/* Maximum number of opened files in the secure storage */
#define STORAGE_MAX_OPENED_FILES        10
/* Size, in power of 2, of the read/write secure block */
#define STORAGE_SECBLOCK_SIZE_POW2      7
/* The max length for a file or a directory name */
#define STORAGE_MAX_NAME_LEN            IMFS_MAX_NAME_LEN


#endif
