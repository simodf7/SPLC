#ifndef SMAPI_H
#define SMAPI_H

#include <stdint.h>
#include <stddef.h>

#include "types.h"
#include "se.h"
#include "smapi_nums.h"

#include "../sm/3p/inc/aes_types.h"


#define STRING(x) #x

#define SMAPI_SMCALL_ASM(WHICH) "li a7, " STRING(WHICH) "\n\t" "ecall"

#if 1

#define DERIVE_KEY_MCTR SMNUM_HW_DERIVE_KEY_MCTR 
#define DERIVE_KEY_CKDF SMNUM_HW_DERIVE_KEY_CKDF
#define AES_ENCRYPT_CTR SMNUM_HW_AES_ENCRYPT_CTR
#define AES_CMAC	SMNUM_HW_AES_CMAC
#define AES_CKDF	SMNUM_HW_AES_CKDF
#define AES_EAX_ENCRYPT SMNUM_HW_AES_EAX_ENCRYPT
#define AES_EAX_DECRYPT SMNUM_HW_AES_EAX_DECRYPT

#else

#define DERIVE_KEY_MCTR SMNUM_SW_DERIVE_KEY_MCTR 
#define DERIVE_KEY_CKDF SMNUM_SW_DERIVE_KEY_CKDF
#define AES_ENCRYPT_CTR SMNUM_SW_AES_ENCRYPT_CTR
#define AES_CMAC	SMNUM_SW_AES_CMAC
#define AES_CKDF	SMNUM_SW_AES_CKDF
#define AES_EAX_ENCRYPT SMNUM_SW_AES_EAX_ENCRYPT
#define AES_EAX_DECRYPT SMNUM_SW_AES_EAX_DECRYPT

#endif



static inline struct smret smapi_smcall(unsigned long arg0, unsigned long arg1,
                            unsigned long arg2, unsigned long arg3,
                            unsigned long arg4, unsigned long arg5,
                            unsigned long arg6, int which)
{
	register long a0 asm ("a0") = (long)(arg0);
	register long a1 asm ("a1") = (long)(arg1);
	register long a2 asm ("a2") = (long)(arg2);
	register long a3 asm ("a3") = (long)(arg3);
	register long a4 asm ("a4") = (long)(arg4);
	register long a5 asm ("a5") = (long)(arg5);
	register long a6 asm ("a6") = (long)(arg6);
	register long a7 asm ("a7") = (long)(which);
	struct smret ret;

	__asm__ volatile (
		"ecall"
		: "+r" (a0), "+r" (a1)
		: "r" (a2), "r" (a3), "r" (a4), "r" (a5), "r" (a6), "r" (a7)
		: "memory");
	ret.error = a0;
	ret.value = a1;

	return ret;
}

static inline void smapi_return_from_se(int val)
{
    smapi_smcall((long)val, 0, 0, 0, 0, 0, 0,
        SMNUM_RETURN_FROM_SE);
}

static inline int smapi_implant_se(const struct sehead *sh)
{
    struct smret r = smapi_smcall((long)sh,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_IMPLANT_SE);
    
    return r.error;
}

static inline int smapi_implant_se_digest(const uint8_t *digest)
{
    struct smret r = smapi_smcall((long)digest,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_IMPLANT_SE_DIGEST);
    
    return r.error;
}

static inline int smapi_remove_se_digest(const uint8_t *digest)
{
    struct smret r = smapi_smcall((long)digest,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_REMOVE_SE_DIGEST);
    
    return r.error;
}

static inline sehandle smapi_boot_se(const struct sehead *sh, uint32_t a,
                        size_t stack_size, size_t shm_size,
                        const char *auth_keyID)
{
    struct smret r = smapi_smcall((long)sh, (long)a, (long)stack_size, (long)shm_size,
                        (long)auth_keyID,
                        0, 0,
                        SMNUM_BOOT_SE);
    
    return (sehandle)r.value;
}

static inline int smapi_shutdown_se(sehandle sh)
{
    struct smret r = smapi_smcall((long)sh,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_SHUTDOWN_SE);
    
    return r.error;
}

static inline struct mem_cfg smapi_get_se_shm(sehandle sh)
{
    struct mem_cfg cfg;
    smapi_smcall((long)sh, (long)&cfg,
        0, 0, 0, 0, 0,
        SMNUM_GET_SE_SHM);

    return cfg;
}

/*
 * Execute the SE service [n] of the SE with handle [sh] given
 * that input parameters will be available for the
 * target SE in its shared memory starting from location [i].
 */
static inline struct smret smapi_exec_se_serv(sehandle sh, unsigned int n, size_t i)
{
    return smapi_smcall((long)sh, (long)n, (long)i, 0, 0, 0, 0, SMNUM_EXEC_SE_SERV);
}

static inline int smapi_get_authd_digest(int options, uint8_t *out_digest)
{
    // NOTE: [options] is ignored at the moment but could
    // be used to differenciate actual recalculation of 
    // the value or just the copy of the old one.
    struct smret r = smapi_smcall((long)options,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_UPDATE_MY_DIGEST);
    
    const size_t s = sizeof(__sehead.auth_digest) /
                        sizeof(__sehead.auth_digest[0]);

    const volatile uint8_t *volatile_auth_digest =
        (const volatile uint8_t *)__sehead.auth_digest;

    for (size_t i = 0; i < s; i++)
        out_digest[i] = volatile_auth_digest[i];

    return r.error;
}

static inline int smapi_change_se_auth(sehandle dst_sh, uint32_t new_a)
{
    struct smret r = smapi_smcall((long)dst_sh, (long)new_a,
                        0, 0, 0, 0, 0,
                        SMNUM_CHANGE_SE_AUTH);
    
    return r.error;
}

/*
 * File creation flags [flags]
 */

/* Open the file in read-only mode */
#define F_RDONLY   0
/* Open the file in read-write mode */
#define F_RDWR     1
/* Create the file if it does not exists */
#define F_CREAT    2
/* Truncate the file */
#define F_TRUNC    4

/*
 * File security flags [secflags]
 */

/* Open the file with no security */
#define SEC_NONE     0
/* Open the file with integrity and authenticity */
#define SEC_IA       1
/* Open the file with confidentiality */
#define SEC_C        2

static inline int smapi_open_file(const char *pathname, int flags, int secflags,
                    const char *keyID)
{
    struct smret r = smapi_smcall((long)pathname, (long)flags, (long)secflags,
                        (long)keyID,
                        0, 0, 0,
                        SMNUM_OPEN_FILE);
    
    return r.error;
}

static inline int smapi_close_file(int fd)
{
    struct smret r = smapi_smcall((long)fd,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_CLOSE_FILE);
    
    return r.error;
}

static inline long smapi_read_file(int fd, void *buf, size_t count)
{
    struct smret r = smapi_smcall((long)fd, (long)buf, (long)count,
                        0, 0, 0, 0,
                        SMNUM_READ_FILE);
    
    return r.error;
}

static inline long smapi_write_file(int fd, const void *buf, size_t count)
{
    struct smret r = smapi_smcall((long)fd, (long)buf, (long)count,
                        0, 0, 0, 0,
                        SMNUM_WRITE_FILE);
    
    return r.error;
}

static inline int smapi_link_file(const char *oldpath, const char *newpath)
{
    struct smret r = smapi_smcall((long)oldpath, (long)newpath,
                        0, 0, 0, 0, 0,
                        SMNUM_LINK_FILE);
    
    return r.error;
}

static inline int smapi_unlink_file(const char *pathname)
{
    struct smret r = smapi_smcall((long)pathname,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_UNLINK_FILE);
    
    return r.error;
}

static inline int smapi_mkdir(const char *pathname)
{
    struct smret r = smapi_smcall((long)pathname,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_MKDIR);
    
    return r.error;
}

static inline int smapi_rmdir(const char *pathname)
{
    struct smret r = smapi_smcall((long)pathname,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_RMDIR);
    
    return r.error;
}

// static struct smret sm_create_key(const char *keyID, const uint8_t *keyS, size_t keyS_len)


static inline int smapi_create_key(const char *new_keyID, const uint8_t *keyS, size_t keyS_len)
{
    struct smret r = smapi_smcall((long)new_keyID, (long)keyS, (long)keyS_len,
                        0,0, 0, 0,
                        SMNUM_CREATE_KEY);
    
    return r.error;
}


static inline int smapi_derive_key(const char *new_keyID, const char *src_keyID,
                    const uint8_t *seed, size_t seed_len)
{
    struct smret r = smapi_smcall((long)new_keyID, (long)src_keyID, (long)seed,
                        (long)seed_len,
                        0, 0, 0,
                        SMNUM_DERIVE_KEY);
    
    return r.error;
}



static inline int smapi_derive_key_mctr(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len)
{
    struct smret r = smapi_smcall((long)kd_p, (long)src_keyID, (long)input, (long)input_len,
                        0, 0, 0,
                        DERIVE_KEY_MCTR);
    
    return r.error;
}



static inline int smapi_derive_key_ckdf(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len)
{
    struct smret r = smapi_smcall((long)kd_p, (long)src_keyID, (long)input, (long)input_len,
                        0, 0, 0,
                        DERIVE_KEY_CKDF);
    
    return r.error;
}


static inline int smapi_delete_key(const char *keyID)
{
    struct smret r = smapi_smcall((long)keyID,
                        0, 0, 0, 0, 0, 0,
                        SMNUM_DELETE_KEY);
    
    return r.error;
}

static inline int smapi_random_num(void)
{
    struct smret r = smapi_smcall(
                        0, 0, 0, 0, 0, 0, 0,
                        SMNUM_RANDOM_NUM);
    
    return r.value;
}

static inline int smapi_digest_data_sha256(const uint8_t *data,
                    const size_t data_len, uint8_t *mac)
{
    struct smret r = smapi_smcall((long)data, (long)data_len,
                        (long)mac,
                        0, 0, 0, 0,
                        SMNUM_DIGEST_DATA_SHA256);
    
    return r.error;
}

static inline int smapi_digest_data_sha256_vector(size_t num_elem,
                    const uint8_t *addr[], const size_t *len, uint8_t *mac)
{
    struct smret r = smapi_smcall((long)num_elem, (long)addr, (long)len,
                        (long)mac,
                        0, 0, 0,
                        SMNUM_DIGEST_DATA_SHA256_V);
    
    return r.error;
}

static inline int smapi_auth_data_hmac256(const char *keyID, const uint8_t *data,
                    size_t data_len, uint8_t *mac)
{
    struct smret r = smapi_smcall((long)keyID, (long)data, (long)data_len,
                        (long)mac,
                        0, 0, 0,
                        SMNUM_AUTH_DATA_HMAC256);
    
    return r.error;
}

static inline int smapi_auth_data_hmac256_vector(const char *keyID, size_t num_elem,
                    const uint8_t *addr[], const size_t *len, uint8_t *mac)
{
    struct smret r = smapi_smcall((long)keyID, (long)num_elem, (long)addr,
                        (long)len, (long)mac,
                        0, 0,
                        SMNUM_AUTH_DATA_HMAC256_V);
    
    return r.error;
}

// Cifra i dati usando AES-CBC software (con keyID gestito dal SM)
static inline int smapi_encrypt_data_aescbc(const char *keyID, const uint8_t *ptext,
                    size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    struct smret r = smapi_smcall((long)keyID, (long)ptext, (long)ptext_len,
                        (long)iv, (long)ctext,
                        0, 0,
                        SMNUM_ENCRYPT_AESCBC);
    
    return r.error;
}

// Decifra i dati usando AES-CBC software (con keyID gestito dal SM)
static inline int smapi_decrypt_data_aescbc(const char *keyID, const uint8_t *ctext,
                    size_t ctext_len, const uint8_t *iv, uint8_t *ptext)
{
    struct smret r = smapi_smcall((long)keyID, (long)ctext, (long)ctext_len,
                        (long)iv, (long)ptext,
                        0, 0,
                        SMNUM_DECRYPT_AESCBC);
    
    return r.error;
}

// Cifra i dati usando AES-CBC hardware (ora con keyID come il software)
static inline int smapi_hw_aes_encrypt_cbc(const char *keyID, const uint8_t *ptext,
                    size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    struct smret r = smapi_smcall((long)keyID, (long)ptext, (long)ptext_len,
                        (long)iv, (long)ctext,
                        0, 0,
                        SMNUM_HW_AES_ENCRYPT_CBC);
    
    return r.error;
}

// Decifra i dati usando AES-CBC hardware (ora con keyID come il software)
static inline int smapi_hw_aes_decrypt_cbc(const char *keyID, const uint8_t *ctext,
                    size_t ctext_len, const uint8_t *iv, uint8_t *ptext)
{
    struct smret r = smapi_smcall((long)keyID, (long)ctext, (long)ctext_len,
                        (long)iv, (long)ptext,
                        0, 0,
                        SMNUM_HW_AES_DECRYPT_CBC);
    
    return r.error;
}


/*** CTR, MCTR, CMAC, CKDF, EAX ***/ 


static inline int smapi_aes_encrypt_ctr(const uint8_t *ptext, uint8_t *ctext, size_t ptext_len, const char *keyID, uint8_t *counter)
{
    struct smret r = smapi_smcall((long)ptext, (long)ctext, (long)ptext_len,
                        (long)keyID, (long)counter,
                        0, 0,
                        AES_ENCRYPT_CTR);
    
    return r.error;
}

static inline int smapi_aes_cmac(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)
{
    struct smret r = smapi_smcall((long)ptext, (long)ptext_len, (long)ctext,
                        (long)ctext_len, (long)keyID,
                        0, 0,
                        AES_CMAC);
    
    return r.error;
}


static inline int smapi_aes_ckdf(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)
{
    struct smret r = smapi_smcall((long)ptext, (long)ptext_len, (long)ctext,
                        (long)ctext_len, (long)keyID,
                        0, 0,
                        AES_CKDF);

    return r.error;
}


static inline int smapi_aes_eax_encrypt(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID)
{
    struct smret r = smapi_smcall((long)eax_p, (long)output, (long)tag_len, (long)keyID, 
		    	0,0,0, 
                        AES_EAX_ENCRYPT);
    
    return r.error;
}


static inline int smapi_aes_eax_decrypt(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const char *keyID)
{
    struct smret r = smapi_smcall((long)eax_p, (long)valid, (long)output, (long)tag_len, (long)keyID, 
		    	0,0, 
                        AES_EAX_DECRYPT);
    
    return r.error;
}



static inline void smapi_security_lock(void)
{
    smapi_smcall(0, 0, 0, 0, 0, 0, 0, SMNUM_SECURITY_LOCK);
}

#endif
