#ifndef SMAPI_NUMS_H
#define SMAPI_NUMS_H

/*
 * Secure Monitor call numbers. Those identification number are expected in the a7 reg.
 */

// Do not change this!
#define SMNUM_RETURN_FROM_SE        0
#define SMNUM_IMPLANT_SE            1
#define SMNUM_IMPLANT_SE_DIGEST     2
#define SMNUM_REMOVE_SE_DIGEST      3
#define SMNUM_BOOT_SE               4
#define SMNUM_SHUTDOWN_SE           5
#define SMNUM_GET_SE_SHM            6
#define SMNUM_EXEC_SE_SERV          7
#define SMNUM_UPDATE_MY_DIGEST      8
#define SMNUM_CHANGE_SE_AUTH        9

#define SMNUM_OPEN_FILE             10
#define SMNUM_CLOSE_FILE            11
#define SMNUM_READ_FILE             12
#define SMNUM_WRITE_FILE            13
#define SMNUM_LINK_FILE             14
#define SMNUM_UNLINK_FILE           15
#define SMNUM_MKDIR                 16
#define SMNUM_RMDIR                 17

#define SMNUM_CREATE_KEY	    18
#define SMNUM_DERIVE_KEY            19
#define SMNUM_DELETE_KEY            20

#define SMNUM_RANDOM_NUM            21
#define SMNUM_DIGEST_DATA_SHA256    22
#define SMNUM_DIGEST_DATA_SHA256_V  23
#define SMNUM_AUTH_DATA_HMAC256     24
#define SMNUM_AUTH_DATA_HMAC256_V   25
/*
* Indici per le chiamate SMAPI di cifratura AES-CBC software
*/
#define SMNUM_ENCRYPT_AESCBC        26
#define SMNUM_DECRYPT_AESCBC        27

/*
* Indici per le chiamate SMAPI di cifratura AES-CBC hardware
*/
#define SMNUM_HW_AES_ENCRYPT_CBC    28
#define SMNUM_HW_AES_DECRYPT_CBC    29

/* Indici per le chiamate SMAPI di cifratura AES-CTR e MCTR */ 
#define SMNUM_HW_AES_ENCRYPT_CTR    30
#define SMNUM_SW_AES_ENCRYPT_CTR    31

#define SMNUM_HW_DERIVE_KEY_MCTR    32
#define SMNUM_SW_DERIVE_KEY_MCTR    33
#define SMNUM_SW_DERIVE_KEY_CKDF    34
#define SMNUM_HW_DERIVE_KEY_CKDF    35

/* Indici per le chiamate SMAPI AES-CMAC e AES-CKDF */ 
#define SMNUM_HW_AES_CMAC 	    36
#define SMNUM_SW_AES_CMAC	    37

#define SMNUM_SW_AES_CKDF	    38
#define SMNUM_HW_AES_CKDF 	    39 

#define SMNUM_SW_AES_EAX_ENCRYPT    40
#define SMNUM_HW_AES_EAX_ENCRYPT    41

#define SMNUM_SW_AES_EAX_DECRYPT    42
#define SMNUM_HW_AES_EAX_DECRYPT    43

#define SMNUM_SECURITY_LOCK         44

_Static_assert(SMNUM_RETURN_FROM_SE == 0, "SMNUM_RETURN_FROM_SE must be zero");

#endif
