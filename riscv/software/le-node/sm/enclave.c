#include <assert.h>
#include <string.h>

#include "types.h"
#include "conf.h"
#include "keys.h"
#include "errno.h"
#include "sm.h"

#include "system.h"

_Static_assert(ENCLAVE_MAX_NUM_SE < UINT16_MAX);
_Static_assert(ENCLAVE_MAX_NESTED_CALLS < UINT16_MAX);

#define FILE_SECURITY (SEC_C | SEC_IA)

static const char digestsfile_path[] = "/enclave_digests";
static const char digestsfile_tmp_path[] = "/enclave_digests_tmp";

struct stack
{
	uint16_t sp;
	uint16_t stack[ENCLAVE_MAX_NESTED_CALLS];
};

struct enclave_head
{
	uint16_t gen;
	bool used;
};

struct enclave_body
{
	struct mem_cfg sem;
	struct mem_cfg shm;
	uintptr_t initial_sp;
	uintptr_t current_sp;
	uint32_t authorisations;
	char auth_keyID[CRYPTO_MAX_LEN_KEY_ID];
	uint8_t digest[32];
};

struct e_store
{
	struct stack eidx_callstack;
	struct enclave_head heads[ENCLAVE_MAX_NUM_SE];
    struct enclave_body enclaves[ENCLAVE_MAX_NUM_SE];
};

struct state
{
    struct buddy *sem_allocator;
    struct buddy *shm_allocator;
    struct e_store store;
};

static struct state s = {0};

/*
 * Returns the first power of 2 that comes after v, or v if its
 * already a power of 2.
 */
static size_t round_pow2(size_t v)
{
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;
    return v;
}

static void stack_init(void)
{
	s.store.eidx_callstack.sp = 0;
}

static int stack_push(uint16_t elem)
{
	if (s.store.eidx_callstack.sp < ENCLAVE_MAX_NESTED_CALLS)
	{
		s.store.eidx_callstack.stack[s.store.eidx_callstack.sp++] = elem;
		return 0;
	}
	
	return -1;
}

static int stack_pop(uint16_t *elem)
{
	assert(elem);

	if (s.store.eidx_callstack.sp > 0)
	{
		*elem = s.store.eidx_callstack.stack[--s.store.eidx_callstack.sp];
		return 0;
	}
	
	return -1;
}

static int stack_peek(uint16_t *elem)
{
	assert(elem);

	if (s.store.eidx_callstack.sp > 0)
	{
		*elem = s.store.eidx_callstack.stack[s.store.eidx_callstack.sp - 1];
		return 0;
	}
	
	return -1;
}

static bool stack_contains(uint16_t eidx)
{
	for (uint16_t i = 0; i < s.store.eidx_callstack.sp; i++)
		if (s.store.eidx_callstack.stack[i] == eidx)
			return true;

	return false;
}

void stack_clear(void)
{
	s.store.eidx_callstack.sp = 0;
}

/*
 * Searches for a free enclave slot and - if found -
 * allocates it and returns its index; otherwise
 * returns ENCLAVE_MAX_NUM_SE.
 */
static uint16_t alloc_enclave_slot(void)
{
	uint16_t i = 0;
	while (i < ENCLAVE_MAX_NUM_SE &&
		s.store.heads[i].used)
		i++;
	
	if (i < ENCLAVE_MAX_NUM_SE)
		s.store.heads[i].used = true;

	return i;
}

static void free_enclave_slot(uint16_t eidx)
{
	assert(eidx < ENCLAVE_MAX_NUM_SE);

	if (s.store.heads[eidx].used)
	{
		// Clear state
		memset(s.store.enclaves[eidx].auth_keyID, 0,
			sizeof(s.store.enclaves[eidx].auth_keyID));
		memset(s.store.enclaves[eidx].digest, 0,
			sizeof(s.store.enclaves[eidx].digest));
		memset(&s.store.enclaves[eidx].sem, 0,
			sizeof(s.store.enclaves[eidx].sem));
		s.store.enclaves[eidx].authorisations = AUTH_NONE;
		s.store.enclaves[eidx].current_sp = 0;
		s.store.enclaves[eidx].initial_sp = 0;
		
		s.store.heads[eidx].gen += 2U;
		s.store.heads[eidx].used = false;
	}
}

static sehandle get_sehandle_from(uint16_t eidx)
{
	assert(eidx < ENCLAVE_MAX_NUM_SE &&
		s.store.heads[eidx].used);

	return (sehandle)
		(s.store.heads[eidx].gen << 16 | eidx);
}

static inline uint16_t validate_and_get_eidx_from(sehandle sh)
{
	uint16_t eidx = (uint16_t)sh;
	uint16_t egen = (uint16_t)(sh >> 16);

	if (eidx >= ENCLAVE_MAX_NUM_SE ||
		!s.store.heads[eidx].used ||
		s.store.heads[eidx].gen != egen)
		return ENCLAVE_MAX_NUM_SE;

	return eidx;
}

static void force_shutdown_se_by_eidx(uint16_t eidx)
{
	assert(eidx < ENCLAVE_MAX_NUM_SE);

	memset(s.store.enclaves[eidx].sem.addr, 0,
		s.store.enclaves[eidx].sem.size);

	buddy_free(s.sem_allocator,
		s.store.enclaves[eidx].sem.size,
		s.store.enclaves[eidx].sem.addr);
	buddy_free(s.shm_allocator,
		s.store.enclaves[eidx].shm.size,
		s.store.enclaves[eidx].shm.addr);

	free_enclave_slot(eidx);
}

int init_enclave(struct buddy *sem, struct buddy *shm)
{
	assert(!enclave_is_initialised() && crypto_is_initialised() &&
		storage_is_initialised());

    if (!sem || ! shm) return -E_INVALID_PARAMS;
    
    s.sem_allocator = sem;
    s.shm_allocator = shm;
	stack_init();

	const uint8_t seed[] = "ENCLAVE KEY DERIVATION";

	int r = derive_key(enclave_keyID, root_keyID, seed, sizeof(seed));
	if (r) return r;

    // Init the ENCLAVE component files structure with regards
	// of possible previous failures while deleting a SE digest.
	int dfd, tdfd, c;
	dfd = open(digestsfile_path, F_RDONLY, FILE_SECURITY,
		enclave_keyID);
	tdfd = open(digestsfile_tmp_path, F_RDONLY, FILE_SECURITY,
		enclave_keyID);
	
	if (dfd >= 0 && tdfd >= 0)
	{
		// Both files already exist. In any case digestsfile_path
		// points to a file that contains all the digests.
		// digestsfile_tmp_path can be unlinked.
		c = close(tdfd);
		if (c) return c;
		c = unlink(digestsfile_tmp_path);
		if (c) return c;
	}
	else if (dfd < 0 && tdfd < 0)
	{
		// First initialisation: just create digestsfile_path
		dfd = open(digestsfile_path, F_CREAT | F_RDONLY | F_TRUNC,
			FILE_SECURITY, enclave_keyID);
		if (dfd < 0) return dfd;
	}
	else if (dfd < 0 && tdfd >= 0)
	{
		// Only digestsfile_tmp_path file exists.
		// Failing after the link operation will lead to the
		// (dfd >= 0 && tdfd >= 0) condition at next initialisation.
		// Failing after the unlink will lead to the
		// (dfd >= 0 && tdfd < 0) condition at next initialisation.
		c = link(digestsfile_tmp_path, digestsfile_path);
		if (c) return c;
		c = unlink(digestsfile_tmp_path);
		if (c) return c;
	}
	else // dfd >= 0 && tdfd < 0
	{
		// Any other initialisation but the first one.
		// No crashes have occurred from the previous
		// initialisation.
	}
	
	return close(dfd);
}

void shutdown_all_ses(void)
{
	// Shutdown all SEs
	for (uint16_t i = 0; i < ENCLAVE_MAX_NUM_SE; i++)
		if (s.store.heads[i].used)
			force_shutdown_se_by_eidx(i);
	
	stack_clear();
	
	// Unbinding SE area solves the problem of returning
	// control to a previously executing SE after the shutdown
	// because whole SEs protected memory in unaccesible from
	// user code and will trigger the PMP.
	int r = unbind_se_area();
	assert(r == 0);
}

bool enclave_is_initialised(void)
{
    return s.sem_allocator != NULL &&
		s.shm_allocator != NULL;
}

/*
 * Checks that the provided [digest] is present
 * in the file containing the implanted SEs digests.
 * Returns 0 on success
 */
static int check_se(const uint8_t *digest)
{
	assert(digest);

	int dfd = open(digestsfile_path, F_RDONLY,
		FILE_SECURITY, enclave_keyID);
	if (dfd < 0) return dfd;

	int res = -E_ENCLAVE_SE_NOT_FOUND;

	uint8_t d[32];
	long rsize;
	while (1)
	{
		rsize = read(dfd, d, sizeof(d));
		if (rsize < 0)
		{
			close(dfd);
			return (int)rsize;
		}
		else if (rsize == 0) break;

		assert(rsize == sizeof(d));
		
		if (!memcmp(d, digest, 32))
			res = 0;
	}

	return res;
}

int calc_se_digest(const struct sehead *sh, uint8_t *out_digest)
{
	if (!is_valid(sh) || !out_digest)
		return -E_INVALID_PARAMS;

	uint8_t *binary = (uint8_t *)
		((uintptr_t)sh + bin_offset(sh));

	return digest_data_sha256(binary, sh->bin_len, out_digest);
}

int implant_se_digest(const uint8_t *in_digest)
{
	assert(enclave_is_initialised());

	if (!in_digest)
		return -E_INVALID_PARAMS;

	if (check_se(in_digest) == 0)
		return -E_ENCLAVE_DUPLICATE;

	int dfd = open(digestsfile_path, F_RDWR,
		FILE_SECURITY, enclave_keyID);
	if (dfd < 0) return dfd;

	long w = write(dfd, in_digest, 32);
	if (w < 0)
	{
		close(dfd);
		return (int)w;
	}

    return close(dfd);
}

int implant_se(const struct sehead *sh)
{
	uint8_t digest[32];
	int r = calc_se_digest(sh, digest);
	if (r) return r;

    return implant_se_digest(digest);
}

int remove_se_digest(const uint8_t *in_digest)
{
	assert(enclave_is_initialised());
	
	if(!in_digest) return -E_INVALID_PARAMS;
	
	int dfd = open(digestsfile_path, F_RDONLY,
		FILE_SECURITY, enclave_keyID);
	if (dfd < 0) return dfd;

	int tdfd = open(digestsfile_tmp_path,
		F_CREAT | F_RDWR | F_TRUNC,
		FILE_SECURITY, enclave_keyID);
	if (tdfd < 0)
	{
		close(dfd);
		return tdfd;
	}

	int res = -E_ENCLAVE_SE_NOT_FOUND;

	long rsize, wsize;
	bool found = false;
	uint8_t d[32];
	while (1)
	{
		rsize = read(dfd, d, sizeof(d));
		if (rsize < 0)
		{
			close(dfd);
			close(tdfd);
			return (int)rsize;
		}
		else if (rsize == 0) break;

		assert(rsize == sizeof(d));
		
		if (!memcmp(d, in_digest, 32))
			found = true;
		else
		{
			wsize = write(tdfd, d, sizeof(d));
			if (wsize < 0) return (int)wsize;
			assert(wsize == sizeof(d));
		}
	}
	
	int c = close(dfd);
	if (c) return c;
	c = close(tdfd);
	if (c) return c;

	if (found)
	{
		// The digestsfile must be swapped with the temp one
		// with atomicity with respect to crashes.
		// Storage functions calls are considered atomic.
		// Since there is no renaming function,
		// the process is:
		// 1: Unlink digestsfile_path so the path will no longer
		//		exist,
		// 2: Link digestsfile_path to digestsfile_tmp_path,
		// 3: Unlink digestsfile_tmp_path.
		// 
		// Failures study:
		// - Failing before 1: In this situation BOTH digestsfile_path
		//		and digestsfile_tmp_path exist and point to DIFFERENT
		//		files. digestsfile_path still contains all the 
		//		valid digests before the function call.
		// - Failing between 1 and 2: In this situation ONLY
		//		digestsfile_tmp_path exists and contains all the
		//		updated digests.
		// - Failing between 2 and 3: In this situation BOTH
		//		digestsfile_path and digestsfile_tmp_path exist and point
		//		to THE SAME file that contains all the updated digests.
		// 
		// Considerations:
		// Failing before 1 and between 2 and 3 have in common that
		// at the next initialisation digestsfile_path WILL EXIST and
		// will point to a file that contains all the digests.
		// In both cases it is only needed to unlink
		// digestsfile_tmp_path (and ignore the result because it could
		// not exist in the case of no crashes or first initialisation).
		// 
		// Failing between 1 and 2 means that at the next
		// initialisation one should check if digestsfile_tmp_path
		// EXISTS and digestsfile_path NOT EXIST. In this situation
		// digestsfile_path must be linked to digestsfile_tmp_path and
		// digestsfile_tmp_path must be unlinked.
		unlink(digestsfile_path);
		link(digestsfile_tmp_path, digestsfile_path);
		unlink(digestsfile_tmp_path);
		res = 0;
	}
	
	return res;
}

static struct smret exec_se_service(void *p, se_service *se, uint16_t eidx)
{
	assert(p && se && eidx < ENCLAVE_MAX_NUM_SE &&
		s.store.heads[eidx].used && s.store.enclaves[eidx].current_sp);

	uintptr_t sp = s.store.enclaves[eidx].current_sp;
	struct smret sr = {.error = 0};
	
	uint16_t prev_eidx;
	bool pushed = false;
	int stack_was_empty = stack_peek(&prev_eidx);
	if (stack_was_empty || prev_eidx != eidx)
	{
		if (stack_push(eidx))
		{
			sr.error = -E_ENCLAVE_MAX_RECURSION;
			return sr;
		}
		pushed = true;
	}

	sr.error = bind_se_area(&s.store.enclaves[eidx].sem);
	if (sr.error && pushed)
	{
		stack_pop(&eidx);
		return sr;
	}

	struct seret seret = execute_func_u_mode(p, se, sp);
	s.store.enclaves[eidx].current_sp = seret.current_sp;
	sr.value = seret.value;
	
	if (pushed)
	{
		int r = stack_pop(&eidx);
		assert(r == 0);
	}
	
	if (stack_was_empty) sr.error = unbind_se_area();
	else sr.error = bind_se_area(&s.store.enclaves[prev_eidx].sem);
	
	return sr;
}

sehandle boot_se(const struct sehead *sh, uint32_t a, size_t stack_size,
            size_t shm_size, const char *auth_keyID)
{
	assert(enclave_is_initialised());

	if (!sh || !is_valid(sh) ||
		(auth_keyID && !key_is_available(auth_keyID)))
		return -1;
	// If no auth keyID is provided, the SE is signed with
	// Enclave root key
	if (!auth_keyID) auth_keyID = enclave_keyID;
	assert(key_is_available(auth_keyID));

	// Allocate an enclave struct
	uint16_t eidx = alloc_enclave_slot();
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return -1;

	// Calculate the digest and check for secure boot
	uint8_t *bin = (uint8_t *)
		((uintptr_t)sh + bin_offset(sh));
	int c = digest_data_sha256(bin, sh->bin_len,
		s.store.enclaves[eidx].digest);
	c |= check_se(s.store.enclaves[eidx].digest);
	if (c) goto free_eslot;

	s.store.enclaves[eidx].sem.size =
		round_pow2(
			sehead_size(sh) +
			sh->bin_len + sh->bss_len + stack_size
		);
	s.store.enclaves[eidx].shm.size =
		round_pow2(shm_size);

	// Allocate protected and shared mermory
	s.store.enclaves[eidx].sem.addr =
		buddy_malloc(s.sem_allocator,
			s.store.enclaves[eidx].sem.size);
	if (!s.store.enclaves[eidx].sem.addr) goto free_eslot;
	s.store.enclaves[eidx].shm.addr =
		buddy_malloc(s.shm_allocator,
			s.store.enclaves[eidx].shm.size);
	if (!s.store.enclaves[eidx].shm.addr) goto free_sem;

	struct sehead *se_h = (struct sehead *)
		s.store.enclaves[eidx].sem.addr;
	void *se_bss = (void *)
		((uintptr_t)se_h + bss_offset(sh));
	// Copy the SE header and binary into the memory
	memcpy(se_h, sh, sehead_size(sh) + sh->bin_len);
	// Zero the bss area
	memset(se_bss, 0, sh->bss_len);
	// Traslate se services offsets to absolute addresses
	for (size_t i = 0; i < se_h->offset_table_len; i++)
		se_h->offset_table[i] += (uintptr_t)se_h;
	// Calculate and set the authenticated digest
	int r = auth_data_hmac_sha256(auth_keyID, s.store.enclaves[eidx].digest,
				sizeof(s.store.enclaves[eidx].digest), se_h->auth_digest);
	if (r < 0) goto free_shm;

	strncpy(s.store.enclaves[eidx].auth_keyID,
		auth_keyID, CRYPTO_MAX_LEN_KEY_ID);
	s.store.enclaves[eidx].authorisations = a;
	s.store.enclaves[eidx].initial_sp = (uintptr_t)se_bss +
		se_h->bss_len + stack_size;
	s.store.enclaves[eidx].current_sp = s.store.enclaves[eidx].initial_sp;

	return get_sehandle_from(eidx);
	
	// Errors
	free_shm: buddy_free(s.shm_allocator,
		s.store.enclaves[eidx].shm.size,
		s.store.enclaves[eidx].shm.addr);
	free_sem: buddy_free(s.sem_allocator,
		s.store.enclaves[eidx].sem.size,
		s.store.enclaves[eidx].sem.addr);
	free_eslot: free_enclave_slot(eidx);
	return -1;
}

int shutdown_se(sehandle sh)
{
	// NOTE: What does it happen if removing/shutdowning a SE that is executing?
	// An easy solution is to not allow the shutdown of an executing SE
	uint16_t eidx = validate_and_get_eidx_from(sh);
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return -E_ENCLAVE_SE_NOT_FOUND;

	if (stack_contains(eidx))
		return -E_ENCLAVE_SE_EXECUTING;

	force_shutdown_se_by_eidx(eidx);
	
	return 0;
}

struct mem_cfg get_se_shm(sehandle sh)
{
	struct mem_cfg cfg = {.addr = NULL, .size = 0};

	uint16_t eidx = validate_and_get_eidx_from(sh);
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return cfg;
	cfg = s.store.enclaves[eidx].shm;

	return cfg;
}

int install_se_secret_as_key(sehandle sh, const char *keyID)
{
    uint16_t eidx = validate_and_get_eidx_from(sh);
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return -E_ENCLAVE_SE_NOT_FOUND;
	
	struct sehead *se_h = (struct sehead *)
		s.store.enclaves[eidx].sem.addr;
	
	return create_key(keyID, se_h->auth_digest,
		sizeof(se_h->auth_digest));
}

struct smret execute_se_service(sehandle sh, unsigned int n, size_t i)
{
    uint16_t eidx = validate_and_get_eidx_from(sh);
	struct smret sr;
	if (eidx == ENCLAVE_MAX_NUM_SE)
	{
		sr.error = -E_ENCLAVE_SE_NOT_FOUND;
		return sr;
	}

	struct sehead *se_h = (struct sehead *)
		s.store.enclaves[eidx].sem.addr;
	
	if (n >= se_h->offset_table_len ||
		i >= s.store.enclaves[eidx].shm.size)
	{
		sr.error = -E_INVALID_PARAMS;
		return sr;
	}

	void *p = &s.store.enclaves[eidx].shm.addr[i];

	sr = exec_se_service(p, se_h->offset_table[n], eidx);
	
	return sr;
}

const uint8_t *get_se_digest_ptr(sehandle sh)
{
	uint16_t eidx = validate_and_get_eidx_from(sh);
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return NULL;
	
	return s.store.enclaves[eidx].digest;
}

sehandle get_sehandle_from_digest(const uint8_t *in_digest)
{
	uint16_t eidx = 0;
	for (; eidx < ENCLAVE_MAX_NUM_SE; eidx++)
		if (s.store.heads[eidx].used &&
			!memcmp(s.store.enclaves[eidx].digest, in_digest,
				sizeof(s.store.enclaves[eidx].digest)))
			return get_sehandle_from(eidx);
	
    return -1;
}

const uint8_t *curr_se_get_digest_ptr(void)
{
	uint16_t eidx;
	assert(stack_peek(&eidx) == 0 &&
		eidx != ENCLAVE_MAX_NUM_SE);
	
	return s.store.enclaves[eidx].digest;
}

uint32_t curr_se_get_auths(void)
{
    uint16_t eidx;
	assert(stack_peek(&eidx) == 0 &&
		eidx != ENCLAVE_MAX_NUM_SE);
	
	return s.store.enclaves[eidx].authorisations;
}

void curr_se_update_current_sp(uintptr_t current_sp)
{
    uint16_t eidx;
	assert(stack_peek(&eidx) == 0 &&
		eidx != ENCLAVE_MAX_NUM_SE);
	
	s.store.enclaves[eidx].current_sp = current_sp;
}

int curr_se_update_auth_digest(int options)
{
	uint16_t eidx;
	assert(stack_peek(&eidx) == 0 &&
		eidx != ENCLAVE_MAX_NUM_SE);

	struct sehead *se_h = (struct sehead *)
		s.store.enclaves[eidx].sem.addr;
	void *se_bin = (void *)
		((uintptr_t)se_h + bin_offset(se_h));

	// TODO: Add support for options. For now we just recalculate
	// the authenticated digest of the binary
	(void)options;
	int r = auth_data_hmac_sha256(s.store.enclaves[eidx].auth_keyID,
				se_bin, se_h->bin_len, se_h->auth_digest);
	if (r) return r;
	
	return 0;
}

int curr_se_change_se_auth(sehandle dst_sh, uint32_t new_a)
{
    uint16_t eidx;
	assert(stack_peek(&eidx) == 0 &&
		eidx != ENCLAVE_MAX_NUM_SE);

	eidx = validate_and_get_eidx_from(dst_sh);
	if (eidx == ENCLAVE_MAX_NUM_SE)
		return -E_ENCLAVE_SE_NOT_FOUND;

	s.store.enclaves[eidx].authorisations = new_a;

	return 0;
}
