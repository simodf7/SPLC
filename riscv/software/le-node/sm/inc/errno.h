#ifndef ERRNO_H
#define ERRNO_H

#define E_NOT_IMPLEMENTED           1
#define E_INVALID_PARAMS            2
#define E_UNAUTHORISED              3

#define E_STORAGE_GENERIC           4
#define E_STORAGE_APPLY_SEC         5
#define E_STORAGE_REMOVE_SEC        6

#define E_CRYPTO_GENERIC            7
#define E_CRYPTO_KEY_NOT_FOUND      8
#define E_CRYPTO_KEY_DUPLICATE      9

#define E_ENCLAVE_SE_NOT_FOUND      10
#define E_ENCLAVE_DUPLICATE         11
#define E_ENCLAVE_MAX_SES_REACHED   12
#define E_ENCLAVE_NO_MEM            13
#define E_ENCLAVE_MAX_RECURSION     14
#define E_ENCLAVE_SE_EXECUTING      15

#endif