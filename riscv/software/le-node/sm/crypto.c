#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#include "conf.h"
#include "errno.h"
#include "sm.h"
#include "profiler.h"

#include "sha256.h"
#include "hmac256.h"
#include "aes.h"
#include "3p/inc/aes_eax.h"

#include <stdio.h>

#ifdef CRYPTO_SHOW_KEYS
#include "system.h"
#define PRINT_KEY(key)													\
do																		\
{																		\
	printf("[CRYPTO] New derived key. \nId: %s;\n Secret: 0x", (key).id);	\
	for (size_t i = 0; i < CRYPTO_LEN_KEY_SECRET; i++)					\
        printf("%02X", (key).secret[i]);									\
	putchar('\n');														\
} while (0)
#else
#define PRINT_KEY(key) ((void)0)
#endif

#define KEYS_DEF
#include "keys.h"

#define FILE_SECURITY (SEC_C | SEC_IA)

static const char keyfile_path[] = "/crypto_keys";
static const char keyfile_tmp_path[] = "/crypto_keys_tmp";

struct key
{
	char id[CRYPTO_MAX_LEN_KEY_ID];
	uint8_t secret[CRYPTO_LEN_KEY_SECRET];
};

struct state
{
	struct key root_key;
};

static struct state s = { 0 };




#define KEYS_EQUAL(key1ID, key2ID)						\
(!strncmp((key1ID), (key2ID), CRYPTO_MAX_LEN_KEY_ID))

/*
 * Save [in_key] in the storage ASSUMING that there is NOT
 * another key with the same keyID.
 * Returns 0 on success or the error code of the first encountered
 * error.
 */
static int save_key_to_storage(const struct key *in_key)
{
	assert(in_key);

	int kfd = open(keyfile_path, F_RDWR, FILE_SECURITY,
		s.root_key.id);
	if (kfd < 0) return kfd;

	long w = write(kfd, in_key, sizeof(*in_key));
	if (w < 0)
	{
		close(kfd);
		return w;
	}

	assert(w == sizeof(*in_key));

	int c = close(kfd);
	if (c) return c;

	return 0;
}

/*
 * Search the key with ID keyID. If a key is found it is copied
 * in [out_key].
 * Returns 0 on success or the error code of the first encountered
 * error.
 */
static int get_key_by_id(const char *keyID, struct key *out_key)
{
	assert(keyID && out_key);

	if (KEYS_EQUAL(keyID, s.root_key.id))
	{
		memcpy(out_key, &s.root_key, sizeof(s.root_key));
		return 0;
	}
	
	int res = -E_CRYPTO_KEY_NOT_FOUND;

	int kfd = open(keyfile_path, F_RDONLY, FILE_SECURITY, s.root_key.id);
	if (kfd < 0) return kfd;

	long rsize;
	while (1)
	{
		rsize = read(kfd, out_key, sizeof(*out_key));
		
		if (rsize < 0)
		{
			close(kfd);
			return (int)rsize;
		}
		else if (rsize == 0) break;
		
		assert(rsize == sizeof(*out_key));
		
		if (!strncmp(keyID, out_key->id, CRYPTO_MAX_LEN_KEY_ID))
		{
			res = 0;
			break;
		}
	}

	int c = close(kfd);
	if (c) return c;

	return res;
}

int init_crypto(const uint8_t *root_keyS, size_t root_keyS_len)
{
	assert(storage_is_initialised());

    if (!root_keyS) return -E_INVALID_PARAMS;

	strncpy(s.root_key.id, root_keyID, CRYPTO_MAX_LEN_KEY_ID);
	memset(s.root_key.secret, 0, CRYPTO_LEN_KEY_SECRET);
	memcpy(s.root_key.secret, root_keyS,
		root_keyS_len < CRYPTO_LEN_KEY_SECRET ?
		root_keyS_len : CRYPTO_LEN_KEY_SECRET);

	// Init the CRYPTO component files structure with regards
	// of possible previous failures while deleting a key.
	// See below in the key deletion function for a complete
	// review.
	int kfd, tkfd, c;
	kfd = open(keyfile_path, F_RDONLY, FILE_SECURITY,
		s.root_key.id);
	tkfd = open(keyfile_tmp_path, F_RDONLY, FILE_SECURITY,
		s.root_key.id);

	if (kfd >= 0 && tkfd >= 0)
	{
		// Both files already exist. In any case keyfile_path
		// points to a file that contains all the keys.
		// keyfile_tmp_path can be unlinked
		c = close(tkfd);
		if (c) return c;
		c = unlink(keyfile_tmp_path);
		if (c) return c;
	}
	else if (kfd < 0 && tkfd < 0)
	{
		// First initialisation: just create keyfile_path
		kfd = open(keyfile_path, F_CREAT | F_RDONLY | F_TRUNC,
			FILE_SECURITY, s.root_key.id);
		if (kfd < 0) return kfd;
	}
	else if (kfd < 0 && tkfd >= 0)
	{
		// Only keyfile_tmp_path file exists.
		// Failing after the link operation will lead to the
		// (kfd >= 0 && tkfd >= 0) condition at next initialisation.
		// Failing after the unlink will lead to the
		// (kfd >= 0 && tkfd < 0) condition at next initialisation.
		c = link(keyfile_tmp_path, keyfile_path);
		if (c) return c;
		c = unlink(keyfile_tmp_path);
		if (c) return c;
	}
	else // kfd >= 0 && tkfd < 0
	{
		// Any other initialisation but the first one.
		// No crashes have occurred from the previous
		// initialisation.
	}

	return close(kfd);
}

bool crypto_is_initialised(void)
{
	return s.root_key.id[0] != '\0';
}

int create_key(const char *keyID, const uint8_t *keyS, size_t keyS_len)
{
    assert(crypto_is_initialised());

	if (!keyID || !keyS)
		return -E_INVALID_PARAMS;
	
	struct key new_key;
	if (!get_key_by_id(keyID, &new_key))
		return -E_CRYPTO_KEY_DUPLICATE;
	
	strncpy(new_key.id, keyID, CRYPTO_MAX_LEN_KEY_ID);
	memset(new_key.secret, 0, sizeof(new_key.secret));

	size_t to_write = keyS_len < CRYPTO_LEN_KEY_SECRET ?
		keyS_len : CRYPTO_LEN_KEY_SECRET;
	memcpy(new_key.secret, keyS, to_write);

	PRINT_KEY(new_key); // aggiunto 
	
	return save_key_to_storage(&new_key);
}

int derive_key(const char *new_keyID, const char *src_keyID,
               const uint8_t *seed, size_t seed_len)
{
	assert(crypto_is_initialised());
	struct key src_key, new_key;

	PROFILE("crypto_key_derivation")
	{
		if (!new_keyID || !src_keyID || !seed)
			return -E_INVALID_PARAMS;
		
		int res = get_key_by_id(new_keyID, &new_key);
		if (res == 0) return -E_CRYPTO_KEY_DUPLICATE;
		// Forward any error as is.
		else if (res != -E_CRYPTO_KEY_NOT_FOUND)
			return res;
			
		res = get_key_by_id(src_keyID, &src_key);
		if (res) return res;

		strncpy(new_key.id, new_keyID, CRYPTO_MAX_LEN_KEY_ID);
		if (hmac_sha256_kdf(src_key.secret, CRYPTO_LEN_KEY_SECRET,
			NULL, seed, seed_len, new_key.secret, CRYPTO_LEN_KEY_SECRET))
			return -E_CRYPTO_GENERIC;
	}

	PRINT_KEY(new_key);

	return save_key_to_storage(&new_key);
}



// int create_key(const char *keyID, const uint8_t *keyS, size_t keyS_len)




/* HARDWARE*/ 
int derive_key_mctr(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len)
{
	assert(crypto_is_initialised());
	uint8_t output[kd_p->keys_tot_len]; 
	struct key k;
	int r;
        uint8_t num_keys_gen; 
	const uint8_t *keyS = NULL; 	
	size_t prev = 0; 
	size_t key_size = 0;
        const char *id = NULL; 	
	printf("[CRYPTO HW DEBUG - KEY DERIVATION MCTR CRYPTO FUNCTION ENTERED]\n\n"); 

	PROFILE("crypto_key_derivation_mctr")
	{
		if (!kd_p || !src_keyID || !input || !kd_p->new_keysID || !kd_p->keys_len)
			return -E_INVALID_PARAMS;
	
		
		// Ottiene la chiave dal key manager
		r = get_key_by_id(src_keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] derive_key_mctr: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		printf("[CRYPTO-HW-DEBUG] derive_key_mctr: Output Length to generate is %d byte\n", kd_p->keys_tot_len);

		if(!sm_hardware_aes_encrypt_mctr(input, output, input_len, kd_p->keys_tot_len, k.secret)) 
			return -E_CRYPTO_GENERIC;
		
		num_keys_gen = kd_p->num_keys_gen; 
		for(uint8_t i = 0; i < num_keys_gen; i++) 
		{
			keyS = &output[prev];
		       	key_size = kd_p->keys_len[i];  	
			id = kd_p->new_keysID + i * CRYPTO_MAX_LEN_KEY_ID; 
			r = create_key(id, keyS, key_size); 
			if(r) return r; 
			printf("\n"); 
			prev += key_size; 
		}; 
			

		memset(output, 0, sizeof(output)); 
		if (prev != kd_p->keys_tot_len) return -E_CRYPTO_GENERIC; 

	}

	return 0;
}

/* SOFTWARE */ 
int derive_key_mctr_sw(kd_params *kd_p, const char *keyID, uint8_t *input, size_t input_len)
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_key_derivation_mctr_sw")
    {
        if (!kd_p || !keyID || !input ||
            !kd_p->new_keysID || !kd_p->keys_len)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);

        uint8_t output[kd_p->keys_tot_len];

        r = sm_software_aes_encrypt_mctr(input, output, input_len, kd_p->keys_tot_len, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);

        if (r != 1)
            return -E_CRYPTO_GENERIC;

        size_t prev = 0;

        for (uint8_t i = 0; i < kd_p->num_keys_gen; i++)
        {
            size_t key_size = kd_p->keys_len[i];
            const uint8_t *keyS = &output[prev];
            const char *id = kd_p->new_keysID + i * CRYPTO_MAX_LEN_KEY_ID;

            r = create_key(id, keyS, key_size);
            if (r) return r;

            prev += key_size;
        }

        if (prev != kd_p->keys_tot_len)
            return -E_CRYPTO_GENERIC;
    }

    return 0;
}



/* HARDWARE */ 
int derive_key_ckdf(kd_params *kd_p, const char *src_keyID, uint8_t *input, size_t input_len)
{
	assert(crypto_is_initialised());
	uint8_t output[kd_p->keys_tot_len]; 
	
	int r;
        uint8_t num_keys_gen; 
	const uint8_t *keyS = NULL;	
	size_t prev = 0; 
	size_t key_size = 0; 
        const char *id = NULL; 	
	
	PROFILE("crypto_key_derivation_ckdf")
	{
		if (!kd_p || !src_keyID || !input || !kd_p->new_keysID || !kd_p->keys_len)
			return -E_INVALID_PARAMS;
			
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(src_keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] aes_ckdf_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}
		
		printf("[CRYPTO-HW-DEBUG] derive_key_ckdf: Number of key to generate is %d \n", kd_p->num_keys_gen);
		printf("[CRYPTO-HW-DEBUG] derive_key_ckdf: Output Length to generate is %d byte\n", kd_p->keys_tot_len);
		
		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)input_len && i < 20; i++) {
			printf("%02X ", input[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)input_len && i < 20; i++) {
			printf("%c", input[i] >= 32 && input[i] < 127 ? input[i] : '.');
		}
		printf("'\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_ckdf_counter(input, input_len, output, kd_p->keys_tot_len, k.secret);
		
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
		
		num_keys_gen = kd_p->num_keys_gen; 
		for(uint8_t i = 0; i < num_keys_gen; i++) 
		{
			keyS = &output[prev];
		       	key_size = kd_p->keys_len[i];  	
			id = kd_p->new_keysID + i * CRYPTO_MAX_LEN_KEY_ID; 
			r = create_key(id, keyS, key_size); 
			if(r) return r; 
			printf("\n"); 
			prev += key_size; 
		}; 
			
	

		memset(output, 0, sizeof(output)); 
		if (prev != kd_p->keys_tot_len) return -E_CRYPTO_GENERIC; 

	} 

	return 0;
}

/* SOFTWARE */ 
int derive_key_ckdf_sw(kd_params *kd_p,
                       const char *keyID,
                       uint8_t *input,
                       size_t input_len)
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_key_derivation_ckdf_sw")
    {
        if (!kd_p || !keyID || !input ||
            !kd_p->new_keysID || !kd_p->keys_len)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);

        uint8_t output[kd_p->keys_tot_len];

	r = sm_software_aes_ckdf_counter(input, input_len, output, kd_p->keys_tot_len, key_schedule, CRYPTO_LEN_KEY_SECRET * 2); 

        if (r != 1)
            return -E_CRYPTO_GENERIC;

        size_t prev = 0;

        for (uint8_t i = 0; i < kd_p->num_keys_gen; i++)
        {
            size_t key_size = kd_p->keys_len[i];
            const uint8_t *keyS = &output[prev];
            const char *id = kd_p->new_keysID + i * CRYPTO_MAX_LEN_KEY_ID;

            r = create_key(id, keyS, key_size);
            if (r) return r;

            prev += key_size;
        }

        if (prev != kd_p->keys_tot_len)
            return -E_CRYPTO_GENERIC;
    }

    return 0;
}




int delete_key(const char *keyID)
{
	assert(crypto_is_initialised());
	
	if(!keyID ||
		KEYS_EQUAL(s.root_key.id, keyID))
		return -E_INVALID_PARAMS;
	
	int kfd = open(keyfile_path, F_RDONLY,
		FILE_SECURITY, s.root_key.id);
	if (kfd < 0) return kfd;

	int tkfd = open(keyfile_tmp_path,
		F_CREAT | F_RDWR | F_TRUNC,
		FILE_SECURITY, s.root_key.id);
	if (tkfd < 0)
	{
		close(kfd);
		return tkfd;
	}

	int res = -E_CRYPTO_KEY_NOT_FOUND;

	long rsize, wsize;
	bool found = false;
	struct key k;
	while (1)
	{
		rsize = read(kfd, &k, sizeof(k));
		if (rsize < 0)
		{
			close(kfd);
			close(tkfd);
			return (int)rsize;
		}
		else if (rsize == 0) break;

		assert(rsize == sizeof(k));
		
		if (KEYS_EQUAL(keyID, k.id))
			found = true;
		else
		{
			wsize = write(tkfd, &k, sizeof(k));
			if (wsize < 0) return (int)wsize;
			assert(wsize == sizeof(k));
		}
	}
	
	int c = close(kfd);
	if (c) return c;
	c = close(tkfd);
	if (c) return c;

	if (found)
	{
		// The keyfile must be swapped with the temp one
		// with atomicity with respect to crashes.
		// Storage functions calls are considered atomic.
		// Since there is no renaming function,
		// the process is:
		// 1: Unlink keyfile_path so the path will no longer
		//		exist,
		// 2: Link keyfile_path to keyfile_tmp_path,
		// 3: Unlink keyfile_tmp_path.
		// 
		// Failures study:
		// - Failing before 1: In this situation BOTH keyfile_path
		//		and keyfile_tmp_path exist and point to DIFFERENT
		//		files. keyfile_path still contains all the 
		//		valid keys before the function call.
		// - Failing between 1 and 2: In this situation ONLY
		//		keyfile_tmp_path exists and contains all the
		//		updated keys.
		// - Failing between 2 and 3: In this situation BOTH
		//		keyfile_path and keyfile_tmp_path exist and point
		//		to THE SAME file that contains all the updated keys.
		// 
		// Considerations:
		// Failing before 1 and between 2 and 3 have in common that
		// at the next initialisation keyfile_path WILL EXIST and
		// will point to a file that contains all the keys.
		// In both cases it is only needed to unlink
		// keyfile_tmp_path (and ignore the result because it could
		// not exist in the case of no crashes or first initialisation).
		// 
		// Failing between 1 and 2 means that at the next
		// initialisation one should check if keyfile_tmp_path
		// EXISTS and keyfile_path NOT EXIST. In this situation
		// keyfile_path must be linked to keyfile_tmp_path and
		// keyfile_tmp_path must be unlinked.
		unlink(keyfile_path);
		link(keyfile_tmp_path, keyfile_path);
		unlink(keyfile_tmp_path);
		res = 0;
	}
	
	return res;
}

bool key_is_available(const char *keyID)
{
    assert(crypto_is_initialised());

	if (!keyID) return false;
	struct key k;
	
	return get_key_by_id(keyID, &k) == 0;
}

int random_number(void)
{
	static int seed = 7919;
	seed = (5849 * seed + 3187) % 65535;

	return seed;
}

int auth_data_hmac_sha256(const char *keyID, const uint8_t *data, size_t data_len,
		uint8_t *mac)
{
	return auth_data_hmac_sha256_vector(keyID, 1, &data, &data_len, mac);
}

int auth_data_hmac_sha256_vector(const char *keyID, size_t num_elem, const uint8_t *addr[],
		const size_t *len, uint8_t *mac)
{
	assert(crypto_is_initialised());
	
	int r;
	PROFILE("crypto_auth_data")
	{
		if (!keyID || !addr || !len || !mac) return -E_INVALID_PARAMS;

		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) return r;

		r = hmac_sha256_vector(k.secret, CRYPTO_LEN_KEY_SECRET, num_elem, addr, len, mac);
	}

	return 0 == r ? 0 : -E_CRYPTO_GENERIC;
}

int digest_data_sha256(const uint8_t *data, const size_t data_len, uint8_t *mac)
{
	return digest_data_sha256_vector(1, &data, &data_len, mac);
}

int digest_data_sha256_vector(size_t num_elem, const uint8_t *addr[],
		const size_t *len, uint8_t *mac)
{
	assert(crypto_is_initialised());
	
	int r;
	PROFILE("crypto_digest_data")
	{
		if (!addr || !len || !mac) return -E_INVALID_PARAMS;
		r = sha256_vector(num_elem, addr, len, mac);
	}

	return 0 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Cifratura AES-CBC software con keyID
int encrypt_data_aes_cbc(const char *keyID, const uint8_t *ptext, size_t ptext_len,
		const uint8_t *iv, uint8_t *ctext)
{
	assert(crypto_is_initialised());

	int r;
	PROFILE("crypto_encrypt_aes_cbc")
	{
		if (!keyID || !ptext || !iv || !ctext || ptext_len % AES_BLOCK_SIZE != 0)
			return -E_INVALID_PARAMS;
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) return r;

		// Verifica dimensione chiave supportata
		assert((CRYPTO_LEN_KEY_SECRET * 8) == 128 	||
				(CRYPTO_LEN_KEY_SECRET * 8) == 192 	||
				(CRYPTO_LEN_KEY_SECRET * 8) == 256);

		// Inizializza e chiama AES software
		WORD key_schedule[60];
		aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 8);
		r = aes_encrypt_cbc(ptext, ptext_len, ctext, key_schedule,
				CRYPTO_LEN_KEY_SECRET * 8, iv);
	}

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Decifratura AES-CBC software con keyID
int decrypt_data_aes_cbc(const char *keyID, const uint8_t *ctext, size_t ctext_len,
		const uint8_t *iv, uint8_t *ptext)
{
    assert(crypto_is_initialised());

	int r;
	PROFILE("crypto_decrypt_aes_cbc")
	{
		if (!keyID || !ctext || !iv || !ptext || ctext_len % AES_BLOCK_SIZE != 0)
			return -E_INVALID_PARAMS;
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) return r;

		// Verifica dimensione chiave supportata
		assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 	||
				(CRYPTO_LEN_KEY_SECRET * 2) == 192 	||
				(CRYPTO_LEN_KEY_SECRET * 2) == 256);

		// Inizializza e chiama AES software
		WORD key_schedule[60];
		aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
		r = aes_decrypt_cbc(ctext, ctext_len, ptext, key_schedule,
				CRYPTO_LEN_KEY_SECRET * 8, iv);
	}

	return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}





// Wrapper per cifratura AES-CBC hardware con keyID
int encrypt_data_aes_cbc_hw(const char *keyID, const uint8_t *ptext, size_t ptext_len,
		const uint8_t *iv, uint8_t *ctext)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_cbc_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ptext_len);

	int r;
	PROFILE("crypto_encrypt_aes_cbc_hw")
	{
		if (!keyID || !ptext || !iv || !ctext || ptext_len % AES_BLOCK_SIZE != 0) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_cbc_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_cbc_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] ENCRYPT INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%02X ", ptext[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
		}
		printf("'\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_encrypt_cbc(ptext, ctext, ptext_len, k.secret, iv);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT OUTPUT - ciphertext primi 20 byte: ");
			for (int i = 0; i < (int)ptext_len && i < 20; i++) {
				printf("%02X ", ctext[i]);
			}
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_cbc_hw: FINE risultato %d\n", result);
	return result;
}

// Wrapper per decifratura AES-CBC hardware con keyID
int decrypt_data_aes_cbc_hw(const char *keyID, const uint8_t *ctext, size_t ctext_len,
		const uint8_t *iv, uint8_t *ptext)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] decrypt_data_aes_cbc_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ctext_len);

	int r;
	PROFILE("crypto_decrypt_aes_cbc_hw")
	{
		if (!keyID || !ctext || !iv || !ptext || ctext_len % AES_BLOCK_SIZE != 0) {
			printf("[CRYPTO-HW-DEBUG] decrypt_data_aes_cbc_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] decrypt_data_aes_cbc_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] DECRYPT INPUT - ciphertext primi 20 byte: ");
		for (int i = 0; i < (int)ctext_len && i < 20; i++) {
			printf("%02X ", ctext[i]);
		}
		printf("\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_decrypt_cbc(ctext, ptext, ctext_len, k.secret, iv);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] DECRYPT OUTPUT - plaintext primi 20 byte: ");
			for (int i = 0; i < (int)ctext_len && i < 20; i++) {
				printf("%02X ", ptext[i]);
			}
			printf(" -> ASCII: '");
			for (int i = 0; i < (int)ctext_len && i < 20; i++) {
				printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
			}
			printf("'\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] DECRYPT FAILED!\n");
		}
		
		// Pulizia di sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] decrypt_data_aes_cbc_hw: FINE risultato %d\n", result);
	return result;
}



/* SOFTWARE */ 
int encrypt_data_aes_ctr_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, const char *keyID, uint8_t *counter)
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_encrypt_aes_ctr_sw")
    {
        if (!keyID || !ptext || !counter || !ctext)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2); 
	r = sm_software_aes_encrypt_ctr(ptext, ctext, ptext_len, key_schedule, CRYPTO_LEN_KEY_SECRET * 2, counter); 
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}




// Wrapper per cifratura AES-CTR hardware con keyID
int encrypt_data_aes_ctr_hw(const uint8_t *ptext, uint8_t *ctext, size_t ptext_len, const char *keyID, uint8_t *counter)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_ctr_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ptext_len);

	int r;
	PROFILE("crypto_encrypt_aes_ctr_hw")
	{
		if (!keyID || !ptext || !counter || !ctext) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_ctr_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_ctr_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] ENCRYPT INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%02X ", ptext[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
		}
		printf("'\n");


		r = sm_hardware_aes_encrypt_ctr(ptext, ctext, ptext_len, k.secret, counter); 
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT OUTPUT - ciphertext primi 20 byte: ");
			for (int i = 0; i < (int)ptext_len && i < 20; i++) {
				printf("%02X ", ctext[i]);
			}
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_ctr_hw: FINE risultato %d\n", result);
	return result;
}

int encrypt_data_aes_mctr_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID) 
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_encrypt_aes_mctr_sw")
    {
        if (!keyID || !ptext || !ctext ||
            ptext_len % AES_BLOCK_SIZE != 0 ||
            ctext_len % AES_BLOCK_SIZE != 0)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
        
        r = sm_software_aes_encrypt_mctr(ptext, ctext, ptext_len, ctext_len, key_schedule, CRYPTO_LEN_KEY_SECRET * 2); 
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Wrapper per cifratura AES-MCTR hardware con keyID
int encrypt_data_aes_mctr_hw(const uint8_t *ptext, uint8_t *ctext, size_t ptext_len, size_t ctext_len, const char *keyID)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_mctr_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ptext_len);

	int r;
	PROFILE("crypto_encrypt_aes_mctr_hw")
	{
		if (!keyID || !ptext || !ctext || ptext_len % AES_BLOCK_SIZE != 0 || ctext_len % AES_BLOCK_SIZE != 0) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_mctr_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_mctr_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] ENCRYPT INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%02X ", ptext[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
		}
		printf("'\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_encrypt_mctr(ptext, ctext, ptext_len, ctext_len, k.secret);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT OUTPUT - ciphertext primi 20 byte: ");
			for (int i = 0; i < (int)ptext_len && i < 20; i++) {
				printf("%02X ", ctext[i]);
			}
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] ENCRYPT FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] encrypt_data_aes_mctr_hw: FINE risultato %d\n", result);
	return result;
}

int aes_cmac_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_aes_cmac_sw")
    {
        if (!keyID || !ptext || !ctext ||
            ctext_len == 0 || ctext_len > AES_BLOCK_SIZE)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);

        r = sm_software_aes_cmac(ptext, ptext_len, ctext, ctext_len, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Wrapper per AES-CMAC hardware con keyID
int aes_cmac_hw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] aes_cmac_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ptext_len);

	int r;
	PROFILE("crypto_aes_cmac_hw")
	{
		if (!keyID || !ptext || !ctext || ctext_len > AES_BLOCK_SIZE || ctext_len == 0) {
			printf("[CRYPTO-HW-DEBUG] aes_cmac_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] aes_cmac_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] ENCRYPT INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%02X ", ptext[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
		}
		printf("'\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_cmac(ptext, ptext_len, ctext, ctext_len, k.secret);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] OUTPUT - CMAC primi 20 byte: ");
			for (int i = 0; i < (int)ptext_len && i < 20; i++) {
				printf("%02X ", ctext[i]);
			}
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] CMAC FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] aes_cmac_hw: FINE risultato %d\n", result);
	return result;
}

int aes_ckdf_sw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID) 
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_aes_ckdf_sw")
    {
        if (!keyID || !ptext || !ctext ||
            ctext_len < AES_BLOCK_SIZE)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
	r = sm_software_aes_ckdf_counter(ptext,
                             ptext_len,
                             ctext,
                             ctext_len,
                             key_schedule,
                             CRYPTO_LEN_KEY_SECRET * 2);
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Wrapper per AES-CKDF hardware con keyID
int aes_ckdf_hw(const uint8_t *ptext, size_t ptext_len, uint8_t *ctext, size_t ctext_len, const char *keyID)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] aes_ckdf_hw: INIZIO keyID='%s' len=%zu\n", keyID ? keyID : "NULL", ptext_len);

	int r;
	PROFILE("crypto_aes_ckdf_hw")
	{
		if (!keyID || !ptext || !ctext || ctext_len < AES_BLOCK_SIZE) {
			printf("[CRYPTO-HW-DEBUG] aes_ckdf_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] aes_ckdf_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY] INPUT - plaintext primi 20 byte: ");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%02X ", ptext[i]);
		}
		printf(" -> ASCII: '");
		for (int i = 0; i < (int)ptext_len && i < 20; i++) {
			printf("%c", ptext[i] >= 32 && ptext[i] < 127 ? ptext[i] : '.');
		}
		printf("'\n");
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_ckdf_counter(ptext, ptext_len, ctext, ctext_len, k.secret);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] OUTPUT - CKDF primi 20 byte: ");
			for (int i = 0; i < (int)ptext_len && i < 20; i++) {
				printf("%02X ", ctext[i]);
			}
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] CKDF FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] aes_ckdf_hw: FINE risultato %d\n", result);
	return result;
}

int aes_eax_encrypt_sw(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID) 
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_aes_eax_encrypt_sw")
    {
        if (!keyID || !eax_p || !output || tag_len == 0)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
        r = sm_software_aes_eax_encrypt(eax_p,
                            output,
                            tag_len,
                            key_schedule,
                            CRYPTO_LEN_KEY_SECRET * 2);
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

// Wrapper per AES-EAX hardware con keyID
int aes_eax_encrypt_hw(eax_params *eax_p, uint8_t *output, size_t tag_len, const char *keyID)
{
	assert(crypto_is_initialised());

	printf("[CRYPTO-HW-DEBUG] aes_eax_encrypt_hw: INIZIO keyID='%s' \n", keyID ? keyID : "NULL");

	int r;
	PROFILE("crypto_aes_eax_encrypt_hw")
	{
		if (!keyID || !eax_p || !output || tag_len == 0) {
			printf("[CRYPTO-HW-DEBUG] aes_eax_encrypt_hw: parametri non validi\n");
			return -E_INVALID_PARAMS;
		}
		
		// Ottiene la chiave dal key manager
		struct key k;
		r = get_key_by_id(keyID, &k);
		if (r) {
			printf("[CRYPTO-HW-DEBUG] aes_eax_encrypt_hw: get_key_by_id fallito con errore %d\n", r);
			return r;
		}

		size_t nonce_len = eax_p->nonce_len; 
		const uint8_t *nonce = eax_p->nonce;

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY][EAX] NONCE: 0x");
		for (int i = 0; i < (int)nonce_len; i++) {
			printf("%02X", nonce[i]);
		}
		printf("\n"); 
	

		size_t in_len = eax_p->in_len; 
		const uint8_t *pt = eax_p->in;

		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY][EAX] INPUT: 0x ");
		for (int i = 0; i < (int)in_len; i++) {
			printf("%02X", pt[i]);
		}
		printf("\n"); 
		
		printf("INPUT ASCII: ");
		for (int i = 0; i < (int)in_len; i++) {
			printf("%c", pt[i] >= 32 && pt[i] < 127 ? pt[i] : '.');
		}
		printf("\n"); 
		
		
		size_t header_len = eax_p->header_len; 
		const uint8_t *header = eax_p->header;
		
		// Log input per verifica
		printf("[CRYPTO-HW-VERIFY][EAX] HEADER: 0x");
		for (int i = 0; i < (int)header_len; i++) {
			printf("%02X", header[i]);
		}
		printf("\n"); 
		
		// Chiama l'hardware AES
		r = sm_hardware_aes_eax_encrypt(eax_p, output, tag_len, k.secret);
		
		// Log output per verifica
		if (r) {
			printf("[CRYPTO-HW-VERIFY] EAX SUCCEDED!");
			printf("\n");
		} else {
			printf("[CRYPTO-HW-VERIFY] EAX FAILED!\n");
		}
		
		// Pulizia sicurezza
		memset(&k, 0, sizeof(k));
	}

	int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;
	printf("[CRYPTO-HW-DEBUG] aes_eax_encrypt_hw: FINE risultato %d\n", result);
	return result;
}


int aes_eax_decrypt_sw(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const char *keyID)
{
    assert(crypto_is_initialised());

    int r;

    PROFILE("crypto_aes_eax_decrypt_sw")
    {
        if (!keyID || !eax_p || !output || !valid || tag_len == 0)
            return -E_INVALID_PARAMS;

        struct key k;
        r = get_key_by_id(keyID, &k);
        if (r) return r;

        assert((CRYPTO_LEN_KEY_SECRET * 2) == 128 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 192 ||
               (CRYPTO_LEN_KEY_SECRET * 2) == 256);

        WORD key_schedule[60];
        aes_key_setup(k.secret, key_schedule, CRYPTO_LEN_KEY_SECRET * 2);
        r = sm_software_aes_eax_decrypt(eax_p,
                            valid,
                            output,
                           tag_len,
                            key_schedule,
                            CRYPTO_LEN_KEY_SECRET * 2);
    }

    return 1 == r ? 0 : -E_CRYPTO_GENERIC;
}

int aes_eax_decrypt_hw(eax_params *eax_p,
                       uint8_t *valid,
                       uint8_t *output,
                       size_t tag_len,
                       const char *keyID)
{
    assert(crypto_is_initialised());

    printf("[CRYPTO-HW-DEBUG] aes_eax_decrypt_hw: INIZIO keyID='%s'\n",
           keyID ? keyID : "NULL");

    int r;

    PROFILE("crypto_aes_eax_decrypt_hw")
    {
        if (!keyID || !eax_p || !output || !valid || tag_len == 0) {
            printf("[CRYPTO-HW-DEBUG] aes_eax_decrypt_hw: parametri non validi\n");
            return -E_INVALID_PARAMS;
        }

        // ===== GET KEY =====
        struct key k;

        r = get_key_by_id(keyID, &k);
        if (r) {
            printf("[CRYPTO-HW-DEBUG] aes_eax_decrypt_hw: get_key_by_id fallito %d\n", r);
            return r;
        }

	size_t nonce_len = eax_p->nonce_len; 
	const uint8_t *nonce = eax_p->nonce;

	// Log input per verifica
	printf("[CRYPTO-HW-VERIFY][EAX-DECRYPT] NONCE: 0x");
	for (int i = 0; i < (int)nonce_len; i++) {
		printf("%02X", nonce[i]);
	}
	printf("\n"); 


	size_t in_len = eax_p->in_len; 
	const uint8_t *ct = eax_p->in;

	// Log input per verifica
	printf("[CRYPTO-HW-VERIFY][EAX-DECRYPT] CIPHERTEXT: 0x ");
	for (int i = 0; i < (int)in_len; i++) {
		printf("%02X", ct[i]);
	}
	printf("\n"); 
	
	printf("CT ASCII: ");
	for (int i = 0; i < (int)in_len; i++) {
		printf("%c", ct[i] >= 32 && ct[i] < 127 ? ct[i] : '.');
	}
	printf("\n"); 
	
	
	size_t header_len = eax_p->header_len; 
	const uint8_t *header = eax_p->header;
	
	// Log input per verifica
	printf("[CRYPTO-HW-VERIFY][EAX-DECRYPT] HEADER: 0x");
	for (int i = 0; i < (int)header_len; i++) {
		printf("%02X", header[i]);
	}
	printf("\n"); 
		


        r = sm_hardware_aes_eax_decrypt(
                eax_p,
                valid,
                output,
                tag_len,
                k.secret
        );


        if (r) {

            if (*valid) {
                printf("[CRYPTO-HW-VERIFY][EAX-DECRYPT] TAG VALIDO \n\n");

            } else {
                printf("[CRYPTO-HW-VERIFY][EAX-DECRYPT] TAG NON VALIDO\n");
            }

        } else {

            printf("[CRYPTO-HW-VERIFY] DECRYPT FAILED!\n");

        }


        memset(&k, 0, sizeof(k));
    }

    int result = 1 == r ? 0 : -E_CRYPTO_GENERIC;

    printf("[CRYPTO-HW-DEBUG] aes_eax_decrypt_hw: FINE risultato %d valid=%d\n",
           result,
           valid ? *valid : -1);

    return result;
}
