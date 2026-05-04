#ifndef KEYS_H
#define KEYS_H

#include "conf.h"

/* Device root key ID */             
extern const char root_keyID[CRYPTO_MAX_LEN_KEY_ID];
/* Enclave root key ID. Used to secure private Enclave component files */
extern const char enclave_keyID[CRYPTO_MAX_LEN_KEY_ID];
/* Architectural Enclave key */
extern const char ase_keyID[CRYPTO_MAX_LEN_KEY_ID];

#ifdef KEYS_DEF
const char root_keyID[CRYPTO_MAX_LEN_KEY_ID]    =   "rootkey";
const char enclave_keyID[CRYPTO_MAX_LEN_KEY_ID] =   "enclavekey";
const char ase_keyID[CRYPTO_MAX_LEN_KEY_ID]     =   "asekey";
#endif

#endif