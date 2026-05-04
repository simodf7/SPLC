#ifndef SM_H
#define SM_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "smhead.h"
#include "buddy.h"
#include "types.h"

#include "../3p/inc/aes_types.h"

#define SECURE_MONITOR(ver)                                             \
extern const unsigned long _bin_len;                                    \
const struct smhead __attribute__ ((section (".sm.head"))) __smhead =   \
{                                                                       \
	.mac = {0},															\
    .version = (ver),                                                   \
    .bin_len = (uint32_t)&_bin_len                                      \
}

/*
 * Set the hardware protection mechanism to only
 * allow memory accesses in this region from code
 * executing in User mode.
 */
int bind_se_area(struct mem_cfg *c);
int unbind_se_area(void);
int check_ptr_sanity(const void *area, size_t area_len);
void security_lock(void);
void register_user_security_lock_handler(void (*handler)(void));

int init_crypto(const uint8_t *root_keyS, size_t root_keyS_len);

bool crypto_is_initialised(void);

int create_key(const char *keyID, const uint8_t *keyS, size_t keyS_len);
int derive_key(const char *new_keyID, const char *src_keyID,
		const uint8_t *seed, size_t seed_len);
int delete_key(const char *keyID);
bool key_is_available(const char *keyID);

int random_number(void);

int auth_data_hmac_sha256(const char *keyID, const uint8_t *data, size_t data_len,
		uint8_t *mac);
int auth_data_hmac_sha256_vector(const char *keyID, size_t num_elem, const uint8_t *addr[],
		const size_t *len, uint8_t *mac);

int digest_data_sha256(const uint8_t *data, const size_t data_len, uint8_t *mac);
int digest_data_sha256_vector(size_t num_elem, const uint8_t *addr[],
		const size_t *len, uint8_t *mac);

int encrypt_data_aes_cbc(const char *keyID, const uint8_t *ptext, size_t ptext_len,
		const uint8_t *iv, uint8_t *ctext);
int decrypt_data_aes_cbc(const char *keyID, const uint8_t *ctext, size_t ctext_len,
		const uint8_t *iv, uint8_t *ptext);

// Wrapper per hardware AES con keyID
int encrypt_data_aes_cbc_hw(const char *keyID, const uint8_t *ptext, size_t ptext_len,
		const uint8_t *iv, uint8_t *ctext);
int decrypt_data_aes_cbc_hw(const char *keyID, const uint8_t *ctext, size_t ctext_len,
		const uint8_t *iv, uint8_t *ptext);

/* */ 
int encrypt_data_aes_ctr_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, const char *keyID, uint8_t *counter); 
int encrypt_data_aes_mctr_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID); 
int encrypt_data_aes_ctr_hw(const uint8_t *ptext, uint8_t *ctext, size_t ptext_len, const char *keyID, uint8_t *counter);
int encrypt_data_aes_mctr_hw(const uint8_t *ptext, uint8_t *ctext, size_t ptext_len, size_t ctext_len, const char *keyID); 

int derive_key_mctr_sw(kd_params *kd_p, const char *keyID, uint8_t *input, size_t input_len); 
int derive_key_ckdf_sw(kd_params *kd_p, const char *keyID, uint8_t *input, size_t input_len); 
int derive_key_mctr(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len); 
int derive_key_ckdf(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len); 

int aes_cmac_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID); 
int aes_ckdf_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID); 
int aes_ckdf_hw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID); 
int aes_cmac_hw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID);

int aes_eax_encrypt_sw(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID);
int aes_eax_decrypt_sw(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const char *keyID); 
int aes_eax_encrypt_hw(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID); 
int aes_eax_decrypt_hw(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len,const char *keyID); 


int init_enclave(struct buddy *sem, struct buddy *shm);
void shutdown_all_ses(void);
bool enclave_is_initialised(void);

int calc_se_digest(const struct sehead *sh, uint8_t *out_digest);
int implant_se(const struct sehead *sh);
int implant_se_digest(const uint8_t *in_digest);
int remove_se_digest(const uint8_t *in_digest);

sehandle boot_se(const struct sehead *sh, uint32_t a, size_t stack_size,
            size_t shm_size, const char *auth_keyID);
int shutdown_se(sehandle sh);
struct mem_cfg get_se_shm(sehandle sh);
int install_se_secret_as_key(sehandle sh,  const char *keyID);

/*
 * Execute the SE service [n] of the SE with handle [sh] given
 * that input parameters will be available for the
 * target SE in its shared memory starting from location [i].
 */
struct smret execute_se_service(sehandle sh, unsigned int n, size_t i);

const uint8_t *get_se_digest_ptr(sehandle sh);
sehandle get_sehandle_from_digest(const uint8_t *in_digest);

const uint8_t *curr_se_get_digest_ptr(void);
uint32_t curr_se_get_auths(void);
void curr_se_update_current_sp(uintptr_t current_sp);
int curr_se_update_auth_digest(int options);
int curr_se_change_se_auth(sehandle dst_sh, uint32_t new_a);

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

int init_storage(char *base, size_t size, bool format);

bool storage_is_initialised(void);

int link(const char *oldpath, const char *newpath);
int unlink(const char *pathname);

int mkdir(const char *pathname);
int rmdir(const char *pathname);

int open(const char *pathname, int flags, int secflags, const char *keyID);
int close(int fd);
long read(int fd, void *buf, size_t count);
long write(int fd, const void *buf, size_t count);

int init_tracer(char *logfilepath, const char *keyID);
int log_sm_event(unsigned long event_type, long outcome, const uint8_t *requester_digest,
    const void *args[], const size_t *len, size_t num_args);
void bypass_logging(bool value);

/*
 * SE Authorisations
 */

#define AUTH_SE_IMPLANT_BOOT 				(1UL)
#define AUTH_SE_REMOVE_SHUTDOWN 			(1UL << 1)
#define AUTH_SE_EXECUTE 					(1UL << 2)
#define AUTH_SE_CHANGEAUTHS 				(1UL << 3)
#define AUTH_SE_ALL 						(AUTH_SE_IMPLANT_BOOT 	| \
											AUTH_SE_REMOVE_SHUTDOWN | \
											AUTH_SE_EXECUTE 		| \
											AUTH_SE_CHANGEAUTHS)

#define AUTH_FILE_OPEN_CLOSE_READ_MKDIR		(1UL << 4)
#define AUTH_FILE_WRITE 					(1UL << 5)
#define AUTH_FILE_LINK_UNLINK_RMDIR 		(1UL << 6)
#define AUTH_FILE_ALL 						(AUTH_FILE_OPEN_CLOSE_READ_MKDIR | \
											AUTH_FILE_WRITE 				 | \
											AUTH_FILE_LINK_UNLINK_RMDIR)

#define AUTH_CRYPTO_KEYLESS 				(1UL << 7)
#define AUTH_CRYPTO_KEYFULL 				(1UL << 8)
#define AUTH_CRYPTO_DELKEY 					(1UL << 9)
#define AUTH_CRYPTO_ALL 					(AUTH_CRYPTO_KEYLESS | \
											AUTH_CRYPTO_KEYFULL  | \
											AUTH_CRYPTO_DELKEY)

#define AUTH_SECURITY_LOCK					(1UL << 10)

#define AUTH_ALL (AUTH_SE_ALL | AUTH_FILE_ALL | AUTH_CRYPTO_ALL | AUTH_SECURITY_LOCK)
#define AUTH_NONE (0)

bool is_authorised(unsigned long event_type, uint32_t a);
uint32_t max_auth(uint32_t a1, uint32_t a2);

#endif
