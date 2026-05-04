#include <string.h>
#include <stdio.h>

#include "conf.h"
#include "smapi_nums.h"
#include "types.h"
#include "errno.h"
#include "sm.h"


#include "system.h"

#define SM_COUNTOF(array) (sizeof(array) / sizeof(array[0]))

/* static struct smret sm_not_implemented(void)
{
    puts("[SM] SMAPI call not implemented!\n");
    struct smret r = {.error = -E_NOT_IMPLEMENTED};
    
    return r;
} */

static struct seret __attribute__((naked)) sm_return_from_se(int val)
{
    (void)val;

    __asm__ volatile 
    (
        // Skip t0 and t1 saved by exception_handler (sp += 8)
        // Restore SM saved regs and sp, 
        "lw ra, 60(sp)      \n\t"
        "lw s0, 56(sp)      \n\t"
        "lw fp, 52(sp)      \n\t"
        "lw s1, 48(sp)      \n\t"
        "lw s2, 44(sp)      \n\t"
        "lw s3, 40(sp)      \n\t"
        "lw s4, 36(sp)      \n\t"
        "lw s5, 32(sp)      \n\t"
        "lw s6, 28(sp)      \n\t"
        "lw s7, 24(sp)      \n\t"
        "lw s8, 20(sp)      \n\t"
        "lw s9, 16(sp)      \n\t"
        "lw s10, 12(sp)     \n\t"
        "lw s11, 8(sp)      \n\t"
        "addi sp, sp, 64    \n\t"
        // a0 contains return val of SE
        // SE current sp saved in a1
        "csrr a1, mscratch  \n\t"
        "csrw mscratch, x0  \n\t"
        "csrsi mstatus, 8   \n\t"
        "ret                \n\t"
    );
}

static struct smret sm_implant_se(const struct sehead *sh)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_IMPLANT_SE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_IMPLANT_SE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    size_t se_tot_size = sehead_size(sh) + sh->bin_len;
    if (check_ptr_sanity(sh, se_tot_size))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_IMPLANT_SE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = implant_se(sh);
    log_sm_event(SMNUM_IMPLANT_SE, r.error,
        curr_se_get_digest_ptr(), NULL, NULL, 0);

    return r;
}

static struct smret sm_implant_se_digest(const uint8_t *digest)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_IMPLANT_SE_DIGEST, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_IMPLANT_SE_DIGEST, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(digest, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_IMPLANT_SE_DIGEST, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    r.error = implant_se_digest(digest);
    const void *args[] = {digest};
    const size_t len[] = {32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_IMPLANT_SE_DIGEST, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_remove_se_digest(const uint8_t *digest)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_REMOVE_SE_DIGEST, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_REMOVE_SE_DIGEST, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(digest, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_REMOVE_SE_DIGEST, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    r.error = remove_se_digest(digest);
    const void *args[] = {digest};
    const size_t len[] = {32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_REMOVE_SE_DIGEST, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_boot_se(const struct sehead *sh, uint32_t a, size_t stack_size,
                        size_t shm_size, const char *auth_keyID)
{
    struct smret r;
    
    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_BOOT_SE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_BOOT_SE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t se_tot_size = sehead_size(sh) + sh->bin_len;
    size_t key_size = strnlen(auth_keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(sh, se_tot_size) ||
        check_ptr_sanity(auth_keyID, key_size))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_BOOT_SE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    // A SE cannot boot another SE with more priviledge than its.
    a = max_auth(a, curr_se_get_auths());

    r.value = boot_se(sh, a, stack_size, shm_size, auth_keyID);
    const void *args[] = {&a, &stack_size, &shm_size, auth_keyID};
    const size_t len[] = {sizeof(a), sizeof(stack_size),
            sizeof(shm_size), key_size};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_BOOT_SE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_shutdown_se(sehandle sh)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_SHUTDOWN_SE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SHUTDOWN_SE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = shutdown_se(sh);
    const void *args[] = {get_se_digest_ptr(sh)};
    const size_t len[] = {32};
    size_t num_args = args[0] ? SM_COUNTOF(args) : 0;
    log_sm_event(SMNUM_SHUTDOWN_SE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_get_se_shm(sehandle sh, struct mem_cfg *cfg)
{
    struct smret r;
    
    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_GET_SE_SHM, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_GET_SE_SHM, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(cfg, sizeof(*cfg)))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_GET_SE_SHM, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    *cfg = get_se_shm(sh);
    r.error = 0;
    const void *args[] = {get_se_digest_ptr(sh)};
    const size_t len[] = {32};
    size_t num_args = args[0] ? SM_COUNTOF(args) : 0;
    log_sm_event(SMNUM_GET_SE_SHM, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_exec_se_serv(sehandle sh, unsigned int n, size_t i)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_EXEC_SE_SERV, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_EXEC_SE_SERV, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r = execute_se_service(sh, n, i);
    const void *args[] = {get_se_digest_ptr(sh), &n, &i};
    const size_t len[] = {32, sizeof(n), sizeof(i)};
    size_t num_args = args[0] ? SM_COUNTOF(args) : 0;
    log_sm_event(SMNUM_EXEC_SE_SERV, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_get_authd_digest(int options)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_UPDATE_MY_DIGEST, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_UPDATE_MY_DIGEST, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = curr_se_update_auth_digest(options);
    const void *args[] = {&options};
    const size_t len[] = {sizeof(options)};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_UPDATE_MY_DIGEST, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_change_se_auth(sehandle dst_sh, uint32_t new_a)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_CHANGE_SE_AUTH, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_CHANGE_SE_AUTH, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = curr_se_change_se_auth(dst_sh, new_a);
    const void *args[] = {get_se_digest_ptr(dst_sh), &new_a};
    const size_t len[] = {32, sizeof(new_a)};
    size_t num_args = args[0] ? SM_COUNTOF(args) : 0;
    log_sm_event(SMNUM_CHANGE_SE_AUTH, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_open_file(const char *pathname, int flags, int secflags, const char *keyID)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_OPEN_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_OPEN_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t pathname_len = strnlen(pathname, STORAGE_MAX_NAME_LEN);
    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(pathname, pathname_len) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_OPEN_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = open(pathname, flags, secflags, keyID);
    const void *args[] = {pathname, &flags, &secflags, keyID};
    const size_t len[] = {pathname_len, sizeof(flags), sizeof(secflags), keyID_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_OPEN_FILE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_close_file(int fd)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_CLOSE_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_CLOSE_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = close(fd);
    log_sm_event(SMNUM_CLOSE_FILE, r.error,
        curr_se_get_digest_ptr(), NULL, NULL, 0);

    return r;
}

static struct smret sm_read_file(int fd, void *buf, size_t count)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_READ_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_READ_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(buf, count))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_READ_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = read(fd, buf, count);
    /* const void *args[] = {&count};
    const size_t len[] = {sizeof(count)};
    size_t num_args = SM_COUNTOF(args);
    // Do not log successful reads to avoid having too much logs
    log_sm_event(SMNUM_READ_FILE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args); */

    return r;
}

static struct smret sm_write_file(int fd, const void *buf, size_t count)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_WRITE_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_WRITE_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(buf, count))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_WRITE_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = write(fd, buf, count);
    /* const void *args[] = {&count};
    const size_t len[] = {sizeof(count)};
    size_t num_args = SM_COUNTOF(args);
    // Do not log successful writes to avoid having too much logs
    log_sm_event(SMNUM_WRITE_FILE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args); */

    return r; 
}

static struct smret sm_link_file(const char *oldpath, const char *newpath)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_LINK_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_LINK_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t oldpath_len = strnlen(oldpath, STORAGE_MAX_NAME_LEN);
    size_t newpath_len = strnlen(newpath, STORAGE_MAX_NAME_LEN);
    if (check_ptr_sanity(oldpath, oldpath_len) ||
        check_ptr_sanity(newpath, newpath_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_LINK_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = link(oldpath, newpath);
    const void *args[] = {oldpath, newpath};
    const size_t len[] = {oldpath_len, newpath_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_LINK_FILE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r; 
}

static struct smret sm_unlink_file(const char *pathname)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_UNLINK_FILE, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_UNLINK_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t pathname_len = strnlen(pathname, STORAGE_MAX_NAME_LEN);
    if (check_ptr_sanity(pathname, pathname_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_UNLINK_FILE, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = unlink(pathname);
    const void *args[] = {pathname};
    const size_t len[] = {pathname_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_UNLINK_FILE, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r; 
}

static struct smret sm_mkdir(const char *pathname)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_MKDIR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_MKDIR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    size_t pathname_len = strnlen(pathname, STORAGE_MAX_NAME_LEN);
    if (check_ptr_sanity(pathname, pathname_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_MKDIR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = mkdir(pathname);
    const void *args[] = {pathname};
    const size_t len[] = {pathname_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_MKDIR, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r; 
}

static struct smret sm_rmdir(const char *pathname)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_RMDIR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_RMDIR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t pathname_len = strnlen(pathname, STORAGE_MAX_NAME_LEN);
    if (check_ptr_sanity(pathname, pathname_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_RMDIR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = rmdir(pathname);
    const void *args[] = {pathname};
    const size_t len[] = {pathname_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_RMDIR, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r; 
}


static struct smret sm_create_key(const char *keyID,
                                  const uint8_t *keyS,
                                  size_t keyS_len)
{
    struct smret r;

    if (!is_authorised(SMNUM_CREATE_KEY, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_CREATE_KEY, r.error,
                     curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(keyS, keyS_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_CREATE_KEY, r.error,
                     curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = create_key(keyID, keyS, keyS_len);

    const void *args[] = {keyID, keyS};
    const size_t len[] = {keyID_len, keyS_len};
    size_t num_args = SM_COUNTOF(args);

    log_sm_event(SMNUM_CREATE_KEY, r.error,
                 curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}


static struct smret sm_derive_key(const char *new_keyID, const char *src_keyID,
                    const uint8_t *seed, size_t seed_len)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_DERIVE_KEY, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_DERIVE_KEY, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t new_keyID_len = strnlen(new_keyID, CRYPTO_MAX_LEN_KEY_ID);
    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(new_keyID, new_keyID_len) ||
        check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(seed, seed_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_DERIVE_KEY, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    r.error = derive_key(new_keyID, src_keyID, seed, seed_len);
    const void *args[] = {new_keyID, src_keyID, seed};
    const size_t len[] = {new_keyID_len, src_keyID_len, seed_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_DERIVE_KEY, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);
    
    return r;
}

// Aggiunte nuove derivazioni 
static struct smret sm_derive_key_mctr(kd_params *kd_p,
                                       const char *src_keyID,
                                       uint8_t *input,
                                       size_t input_len)
{	
    struct smret r;

    printf("[CRYPTO HW DEBUG - KEY DERIVATION SM FUNCTION ENTERED]\n\n"); 

    // Check authorisation
    if (!is_authorised(SMNUM_HW_DERIVE_KEY_MCTR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_DERIVE_KEY_MCTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);

    
    printf("[ECALL KEY DERIVATION MCTR - AUTHORIZATION CHECKED]\n\n"); 
    if (check_ptr_sanity(kd_p, sizeof(*kd_p)) ||
      	check_ptr_sanity(kd_p->new_keysID, kd_p->keys_tot_len) ||
	check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(input, input_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_DERIVE_KEY_MCTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }


    printf("[ECALL KEY DERIVATION MCTR - PTR SANITY CHECKED]\n\n"); 
    r.error = derive_key_mctr(kd_p, src_keyID, input, input_len);

    const void *args[] = { kd_p, src_keyID, input };
    const size_t len[] = { sizeof(*kd_p), src_keyID_len, input_len };
    size_t num_args = SM_COUNTOF(args);

    log_sm_event(SMNUM_HW_DERIVE_KEY_MCTR, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}


static struct smret sm_sw_derive_key_mctr(
        kd_params *kd_p,
        const char *src_keyID,
        uint8_t *input,
        size_t input_len)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_DERIVE_KEY_MCTR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_DERIVE_KEY_MCTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(kd_p, sizeof(*kd_p)) ||
        check_ptr_sanity(kd_p->new_keysID, kd_p->keys_tot_len) ||
        check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(input, input_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_DERIVE_KEY_MCTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = derive_key_mctr_sw(kd_p, src_keyID, input, input_len);

    const void *args[] = {kd_p, src_keyID, input};
    const size_t len[] = {sizeof(*kd_p), src_keyID_len, input_len};

    log_sm_event(SMNUM_SW_DERIVE_KEY_MCTR, r.error,
        curr_se_get_digest_ptr(), args, len, 3);

    return r;
}


static struct smret sm_derive_key_ckdf(kd_params *kd_p,
                                       const char *src_keyID,
                                       uint8_t *input,
                                       size_t input_len)
{
    struct smret r;

    // Check authorisation
    if (!is_authorised(SMNUM_HW_DERIVE_KEY_CKDF, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_DERIVE_KEY_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    
    printf("[ECALL KEY DERIVATION CKDF - AUTHORIZATION CHECKED]\n\n"); 
    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(kd_p, sizeof(*kd_p)) ||
	check_ptr_sanity(kd_p->new_keysID, kd_p->keys_tot_len) ||
        check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(input, input_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_DERIVE_KEY_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    printf("[ECALL KEY DERIVATION CKDF - PTR SANITY CHECKED]\n\n"); 

    r.error = derive_key_ckdf(kd_p, src_keyID, input, input_len);

    const void *args[] = { kd_p, src_keyID, input};
    const size_t len[] = {
        sizeof(*kd_p),
        src_keyID_len,
        input_len
    };

    size_t num_args = SM_COUNTOF(args);

    log_sm_event(SMNUM_HW_DERIVE_KEY_CKDF, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}


static struct smret sm_sw_derive_key_ckdf(
        kd_params *kd_p,
        const char *src_keyID,
        uint8_t *input,
        size_t input_len)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_DERIVE_KEY_CKDF, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_DERIVE_KEY_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(kd_p, sizeof(*kd_p)) ||
        check_ptr_sanity(kd_p->new_keysID, kd_p->keys_tot_len) ||
        check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(input, input_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_DERIVE_KEY_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = derive_key_ckdf_sw(kd_p, src_keyID, input, input_len);

    const void *args[] = {kd_p, src_keyID, input};
    const size_t len[] = {sizeof(*kd_p), src_keyID_len, input_len};

    log_sm_event(SMNUM_SW_DERIVE_KEY_CKDF, r.error,
        curr_se_get_digest_ptr(), args, len, 3);

    return r;
}



static struct smret sm_delete_key(const char *keyID)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_DELETE_KEY, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_DELETE_KEY, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_DELETE_KEY, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }
    
    r.error = delete_key(keyID);
    const void *args[] = {keyID};
    const size_t len[] = {keyID_len};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_DELETE_KEY, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);
    
    return r;
}

static struct smret sm_random_num(void)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_RANDOM_NUM, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_RANDOM_NUM, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.value = random_number();
    r.error = 0;
    log_sm_event(SMNUM_RANDOM_NUM, r.error,
        curr_se_get_digest_ptr(), NULL, NULL, 0);

    return r;
}

static struct smret sm_digest_data_sha256(const uint8_t *data,
                    const size_t data_len, uint8_t *mac)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_DIGEST_DATA_SHA256, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_DIGEST_DATA_SHA256, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    if (check_ptr_sanity(data, data_len) ||
        check_ptr_sanity(mac, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_DIGEST_DATA_SHA256, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = digest_data_sha256(data, data_len, mac);
    const void *args[] = {mac};
    const size_t len[] = {32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_DIGEST_DATA_SHA256, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_digest_data_sha256_vector(size_t num_elem,
                    const uint8_t *addr[], const size_t *len, uint8_t *mac)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_DIGEST_DATA_SHA256_V, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_DIGEST_DATA_SHA256_V, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t addr_len = sizeof(*addr) * num_elem;
    size_t len_len = sizeof(*len) * num_elem;
    if (check_ptr_sanity(addr, addr_len) ||
        check_ptr_sanity(len, len_len) ||
        check_ptr_sanity(mac, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_DIGEST_DATA_SHA256_V, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    for (size_t i = 0; i < num_elem; i++)
        if (check_ptr_sanity(addr[i], len[i]))
        {
            r.error = -E_INVALID_PARAMS;
            log_sm_event(SMNUM_DIGEST_DATA_SHA256_V, r.error,
                curr_se_get_digest_ptr(), NULL, NULL, 0);
            return r;
        }

    r.error = digest_data_sha256_vector(num_elem, addr, len, mac);
    const void *args[] = {mac};
    const size_t log_len[] = {32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_DIGEST_DATA_SHA256_V, r.error,
        curr_se_get_digest_ptr(), args, log_len, num_args);

    return r;
}

static struct smret sm_auth_data_hmac256(const char *keyID, const uint8_t *data,
                    size_t data_len, uint8_t *mac)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_AUTH_DATA_HMAC256, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_AUTH_DATA_HMAC256, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(data, data_len) ||
        check_ptr_sanity(mac, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_AUTH_DATA_HMAC256, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = auth_data_hmac_sha256(keyID, data, data_len, mac);
    const void *args[] = {keyID, mac};
    const size_t len[] = {keyID_len, 32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_AUTH_DATA_HMAC256, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

static struct smret sm_auth_data_hmac256_vector(const char *keyID, size_t num_elem,
                    const uint8_t *addr[], const size_t *len, uint8_t *mac)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_AUTH_DATA_HMAC256_V, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_AUTH_DATA_HMAC256_V, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    size_t addr_len = sizeof(*addr) * num_elem;
    size_t len_len = sizeof(*len) * num_elem;
    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(addr, addr_len) ||
        check_ptr_sanity(len, len_len) ||
        check_ptr_sanity(mac, 32))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_AUTH_DATA_HMAC256_V, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    for (size_t i = 0; i < num_elem; i++)
        if (check_ptr_sanity(addr[i], len[i]))
        {
            r.error = -E_INVALID_PARAMS;
            log_sm_event(SMNUM_AUTH_DATA_HMAC256_V, r.error,
                curr_se_get_digest_ptr(), NULL, NULL, 0);
            return r;
        }

    r.error = auth_data_hmac_sha256_vector(keyID, num_elem, addr, len, mac);
    const void *args[] = {keyID, mac};
    const size_t log_len[] = {keyID_len, 32};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_AUTH_DATA_HMAC256_V, r.error,
        curr_se_get_digest_ptr(), args, log_len, num_args);

    return r;
}

/*
* Queste funzioni vengono chiamate dai SE per eseguire operazioni di cifratura/decifratura
* usando chiavi gestite dal Security Manager (SM) o direttamente l'hardware AES. 
*/

// Backend per cifratura AES-CBC software - usa le chiavi gestite dal SM
static struct smret sm_encrypt_data_aescbc(const char *keyID, const uint8_t *ptext,
                    size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_ENCRYPT_AESCBC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_ENCRYPT_AESCBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(iv, CRYPTO_AES_BLOCK_SIZE) ||
        check_ptr_sanity(ctext, ptext_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_ENCRYPT_AESCBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = encrypt_data_aes_cbc(keyID, ptext, ptext_len, iv, ctext);
    const void *args[] = {keyID, iv};
    const size_t len[] = {keyID_len, CRYPTO_AES_BLOCK_SIZE};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_ENCRYPT_AESCBC, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

// Backend per decifratura AES-CBC software - usa le chiavi gestite dal SM
static struct smret sm_decrypt_data_aescbc(const char *keyID, const uint8_t *ctext,
                    size_t ctext_len, const uint8_t *iv, uint8_t *ptext)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_DECRYPT_AESCBC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_DECRYPT_AESCBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(ctext, ctext_len) ||
        check_ptr_sanity(iv, CRYPTO_AES_BLOCK_SIZE) ||
        check_ptr_sanity(ptext, ctext_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_DECRYPT_AESCBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = decrypt_data_aes_cbc(keyID, ctext, ctext_len, iv, ptext);
    const void *args[] = {keyID, iv};
    const size_t len[] = {keyID_len, CRYPTO_AES_BLOCK_SIZE};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_ENCRYPT_AESCBC, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

// Backend per cifratura AES-CBC hardware - ora usa keyID e il wrapper crypto.c
static struct smret sm_hw_aes_encrypt_cbc(const char *keyID, const uint8_t *ptext,
                    size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    struct smret r;
    
    printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: keyID=%p\n", keyID);
    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) {
                printf("%c", keyID[i]);
            } else if (keyID[i] == 0) {
                break;
            } else {
                printf("?");
            }
        }
        printf("\n");
    }
    
    // Controllo se la chiave esiste
    if (keyID && key_is_available(keyID)) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: chiave '%s' ESISTE\n", keyID);
    } else {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: chiave NON ESISTE\n");
    }
    
    printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: keyID=%p\n", keyID);
    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) {
                printf("%c", keyID[i]);
            } else if (keyID[i] == 0) {
                break;
            } else {
                printf("?");
            }
        }
        printf("\n");
    }
    
    // Controllo se la chiave esiste
    if (keyID && key_is_available(keyID)) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: chiave '%s' ESISTE\n", keyID);
    } else {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_cbc: chiave NON ESISTE\n");
    }

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_HW_AES_ENCRYPT_CBC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_ENCRYPT_CBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);
    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(iv, 16) ||
        check_ptr_sanity(ctext, ptext_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_ENCRYPT_CBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    // Usa il wrapper che gestisce keyID e chiama l'hardware AES
    r.error = encrypt_data_aes_cbc_hw(keyID, ptext, ptext_len, iv, ctext);
    
    const void *args[] = {keyID, iv};
    const size_t len[] = {keyID_len, 16};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_HW_AES_ENCRYPT_CBC, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}

// Backend per decifratura AES-CBC hardware - ora usa keyID e il wrapper crypto.c
static struct smret sm_hw_aes_decrypt_cbc(const char *keyID, const uint8_t *ctext,
                    size_t ctext_len, const uint8_t *iv, uint8_t *ptext)
{
    struct smret r;

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_HW_AES_DECRYPT_CBC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_DECRYPT_CBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    // Copia sicura del keyID in un buffer locale per evitare corruzione del puntatore
    char local_keyID[CRYPTO_MAX_LEN_KEY_ID];
    if (!keyID) {
        r.error = -E_INVALID_PARAMS;
        return r;
    }
    
    // Copia sicura con protezione da overflow
    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID - 1);
    if (keyID_len >= CRYPTO_MAX_LEN_KEY_ID) {
        r.error = -E_INVALID_PARAMS;
        return r;
    }
    
    memcpy(local_keyID, keyID, keyID_len);
    local_keyID[keyID_len] = '\0';
    
    printf("[BACKEND-HW-DEBUG] sm_hw_aes_decrypt_cbc: keyID copiato='%s'\n", local_keyID);

    if (check_ptr_sanity(ctext, ctext_len) ||
        check_ptr_sanity(iv, 16) ||
        check_ptr_sanity(ptext, ctext_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_DECRYPT_CBC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    // Usa il wrapper che gestisce keyID e chiama l'hardware AES
    r.error = decrypt_data_aes_cbc_hw(local_keyID, ctext, ctext_len, iv, ptext);
    
    const void *args[] = {keyID, iv};
    const size_t len[] = {keyID_len, 16};
    size_t num_args = SM_COUNTOF(args);
    log_sm_event(SMNUM_HW_AES_DECRYPT_CBC, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}


/*** DA questo punto ci sono CTR, MCTR, CMAC, CKDF, EAX ***/

static struct smret sm_hw_aes_encrypt_ctr(
        const uint8_t *ptext,
        uint8_t *ctext,
        size_t ptext_len,
        const char *keyID,
        uint8_t *counter)
{
    struct smret r;

    printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_ctr: keyID=%p\n", keyID);

    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_ctr: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) {
                printf("%c", keyID[i]);
            } else if (keyID[i] == 0) {
                break;
            } else {
                printf("?");
            }
        }
        printf("\n");
    }

    if (keyID && key_is_available(keyID)) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_ctr: chiave '%s' ESISTE\n", keyID);
    } else {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_encrypt_ctr: chiave NON ESISTE\n");
    }

    if (!is_authorised(SMNUM_HW_AES_ENCRYPT_CTR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_ENCRYPT_CTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(ctext, ptext_len) ||
        check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(counter, 16))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_ENCRYPT_CTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = encrypt_data_aes_ctr_hw(
        ptext,
        ctext,
        ptext_len,
        keyID,
        counter
    );

    const void *args[] = {keyID, counter};
    const size_t len[] = {keyID_len, 16};

    log_sm_event(SMNUM_HW_AES_ENCRYPT_CTR, r.error,
        curr_se_get_digest_ptr(), args, len, 2);

    return r;
}


static struct smret sm_sw_aes_encrypt_ctr(
        const uint8_t *ptext,
        uint8_t *ctext,
        size_t ptext_len,
        const char *keyID,
        uint8_t *counter)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_AES_ENCRYPT_CTR, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_AES_ENCRYPT_CTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(ctext, ptext_len) ||
        check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(counter, 16))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_AES_ENCRYPT_CTR, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = encrypt_data_aes_ctr_sw(
        ptext,
        ptext_len,
        ctext,
        keyID,
        counter
    );

    const void *args[] = {keyID, counter};
    const size_t len[] = {keyID_len, 16};

   log_sm_event(SMNUM_SW_AES_ENCRYPT_CTR, r.error,
        curr_se_get_digest_ptr(), args, len, 2);

    return r;
}

static struct smret sm_hw_aes_cmac(
        const uint8_t *ptext,
        size_t ptext_len,
        uint8_t *ctext,
        size_t ctext_len,
        const char *keyID)
{
    struct smret r;

    printf("[BACKEND-HW-DEBUG] sm_hw_aes_cmac: keyID=%p\n", keyID);

    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_cmac: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) printf("%c", keyID[i]);
            else if (keyID[i] == 0) break;
            else printf("?");
        }
        printf("\n");
    }

    if (keyID && key_is_available(keyID))
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_cmac: chiave '%s' ESISTE\n", keyID);
    else
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_cmac: chiave NON ESISTE\n");

    if (!is_authorised(SMNUM_HW_AES_CMAC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_CMAC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(ctext, ctext_len) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_CMAC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_cmac_hw(
        ptext,
        ptext_len,
        ctext,
        ctext_len,
        keyID
    );

    const void *args[] = {keyID};
    const size_t len[] = {keyID_len};

    log_sm_event(SMNUM_HW_AES_CMAC, r.error,
        curr_se_get_digest_ptr(), args, len, 1);

    return r;
}


static struct smret sm_sw_aes_cmac(
        const uint8_t *ptext,
        size_t ptext_len,
        uint8_t *ctext,
        size_t ctext_len,
        const char *keyID)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_AES_CMAC, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_AES_CMAC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(ptext, ptext_len) ||
        check_ptr_sanity(ctext, ctext_len) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_AES_CMAC, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_cmac_sw(ptext, ptext_len, ctext, ctext_len, keyID);

    const void *args[] = {keyID};
    const size_t len[] = {keyID_len};

    log_sm_event(SMNUM_SW_AES_CMAC, r.error,
        curr_se_get_digest_ptr(), args, len, 1);

    return r;
}


static struct smret sm_hw_aes_ckdf(uint8_t *input, size_t input_len, uint8_t *output, size_t out_len, const char *src_keyID)
{
    struct smret r;

    // Check authorisation
    if (!is_authorised(SMNUM_HW_AES_CKDF, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t src_keyID_len = strnlen(src_keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(src_keyID, src_keyID_len) ||
        check_ptr_sanity(input, input_len) ||
	check_ptr_sanity(output, out_len)
	)
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_ckdf_hw(input, input_len, output, out_len, src_keyID); 

    const void *args[] = {src_keyID, input, output};
    const size_t len[] = {
        src_keyID_len,
        input_len, 
	out_len
    };

    size_t num_args = SM_COUNTOF(args);

    log_sm_event(SMNUM_HW_AES_CKDF, r.error,
        curr_se_get_digest_ptr(), args, len, num_args);

    return r;
}


static struct smret sm_sw_aes_ckdf(
        uint8_t *input,
        size_t input_len,
        uint8_t *output,
        size_t out_len,
        const char *keyID)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_AES_CKDF, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_AES_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(keyID, keyID_len) ||
        check_ptr_sanity(input, input_len) ||
        check_ptr_sanity(output, out_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_AES_CKDF, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_ckdf_sw(input, input_len, output, out_len, keyID);

    const void *args[] = {keyID, input, output};
    const size_t len[] = {keyID_len, input_len, out_len};

    log_sm_event(SMNUM_SW_AES_CKDF, r.error,
        curr_se_get_digest_ptr(), args, len, 3);

    return r;
}



static struct smret sm_hw_aes_eax_encrypt(
        eax_params *eax_p, 
	uint8_t *output,
        size_t tag_len,
        const char *keyID)
{
    struct smret r;

    printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_encrypt: keyID=%p\n", keyID);

    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_encrypt: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) printf("%c", keyID[i]);
            else if (keyID[i] == 0) break;
            else printf("?");
        }
        printf("\n");
    }

    if (keyID && key_is_available(keyID))
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_encrypt: chiave '%s' ESISTE\n", keyID);
    else
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_encrypt: chiave NON ESISTE\n");

    if (!is_authorised(SMNUM_HW_AES_EAX_ENCRYPT, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_HW_AES_EAX_ENCRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(eax_p, sizeof(*eax_p)) ||
	check_ptr_sanity(eax_p->nonce, eax_p->nonce_len) ||
        check_ptr_sanity(eax_p->in, eax_p->in_len) ||
	check_ptr_sanity(eax_p->header, eax_p->header_len) ||
        check_ptr_sanity(output, eax_p->in_len + tag_len) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_HW_AES_EAX_ENCRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_eax_encrypt_hw(
        eax_p,
	output,
        tag_len,
        keyID
    );

    const void *args[] = {keyID, eax_p->nonce};
    const size_t len[] = {keyID_len, eax_p->nonce_len};

    log_sm_event(SMNUM_HW_AES_EAX_ENCRYPT, r.error,
        curr_se_get_digest_ptr(), args, len, 2);

    return r;
}

static struct smret sm_sw_aes_eax_encrypt(
        eax_params *eax_p,
        uint8_t *output,
        size_t tag_len,
        const char *keyID)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_AES_EAX_ENCRYPT, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_AES_EAX_ENCRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(eax_p, sizeof(*eax_p)) ||
        check_ptr_sanity(eax_p->nonce, eax_p->nonce_len) ||
        check_ptr_sanity(eax_p->in, eax_p->in_len) ||
        check_ptr_sanity(eax_p->header, eax_p->header_len) ||
        check_ptr_sanity(output, eax_p->in_len + tag_len) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_AES_EAX_ENCRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_eax_encrypt_sw(eax_p, output, tag_len, keyID);

    const void *args[] = {keyID, eax_p->nonce};
    const size_t len[] = {keyID_len, eax_p->nonce_len};

    log_sm_event(SMNUM_SW_AES_EAX_ENCRYPT, r.error,
        curr_se_get_digest_ptr(), args, len, 2);

    return r;
}


static struct smret sm_hw_aes_eax_decrypt(
        eax_params *eax_p,
        uint8_t *valid,
        uint8_t *output,
        size_t tag_len,
        const char *keyID)
{
    struct smret r;

    printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_decrypt: keyID=%p\n", keyID);

    if (keyID) {
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_decrypt: keyID primi 20 byte: ");
        for (int i = 0; i < 20; i++) {
            if (keyID[i] >= 32 && keyID[i] < 127) printf("%c", keyID[i]);
            else if (keyID[i] == 0) break;
            else printf("?");
        }
        printf("\n");
    }

    if (keyID && key_is_available(keyID))
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_decrypt: chiave '%s' ESISTE\n", keyID);
    else
        printf("[BACKEND-HW-DEBUG] sm_hw_aes_eax_decrypt: chiave NON ESISTE\n");



    if (!is_authorised(SMNUM_HW_AES_EAX_DECRYPT, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;

        log_sm_event(
            SMNUM_HW_AES_EAX_DECRYPT,
            r.error,
            curr_se_get_digest_ptr(),
            NULL,
            NULL,
            0
        );

        return r;
    }


    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);



    if (check_ptr_sanity(eax_p, sizeof(*eax_p)) ||
        check_ptr_sanity(eax_p->nonce, eax_p->nonce_len) ||
        check_ptr_sanity(eax_p->in, eax_p->in_len) ||
        check_ptr_sanity(eax_p->header, eax_p->header_len) ||
        check_ptr_sanity(output, eax_p->in_len) ||
        check_ptr_sanity(valid, sizeof(uint8_t)) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;

        log_sm_event(
            SMNUM_HW_AES_EAX_DECRYPT,
            r.error,
            curr_se_get_digest_ptr(),
            NULL,
            NULL,
            0
        );

        return r;
    }


    // ===== CALL HW WRAPPER =====

    r.error = aes_eax_decrypt_hw(
        eax_p,
        valid,
        output,
        tag_len,
        keyID
    );


    // ===== LOG EVENT =====

    const void *args[] = {
        keyID,
        eax_p->nonce
    };

    const size_t len[] = {
        keyID_len,
        eax_p->nonce_len
    };

    log_sm_event(
        SMNUM_HW_AES_EAX_DECRYPT,
        r.error,
        curr_se_get_digest_ptr(),
        args,
        len,
        2
    );


    return r;
}

static struct smret sm_sw_aes_eax_decrypt(
        eax_params *eax_p,
        uint8_t *valid,
        uint8_t *output,
        size_t tag_len,
        const char *keyID)
{
    struct smret r;

    if (!is_authorised(SMNUM_SW_AES_EAX_DECRYPT, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SW_AES_EAX_DECRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    size_t keyID_len = strnlen(keyID, CRYPTO_MAX_LEN_KEY_ID);

    if (check_ptr_sanity(eax_p, sizeof(*eax_p)) ||
        check_ptr_sanity(eax_p->nonce, eax_p->nonce_len) ||
        check_ptr_sanity(eax_p->in, eax_p->in_len) ||
        check_ptr_sanity(eax_p->header, eax_p->header_len) ||
        check_ptr_sanity(output, eax_p->in_len) ||
        check_ptr_sanity(valid, sizeof(uint8_t)) ||
        check_ptr_sanity(keyID, keyID_len))
    {
        r.error = -E_INVALID_PARAMS;
        log_sm_event(SMNUM_SW_AES_EAX_DECRYPT, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    r.error = aes_eax_decrypt_sw(eax_p, valid, output, tag_len, keyID);

    const void *args[] = {keyID, eax_p->nonce};
    const size_t len[] = {keyID_len, eax_p->nonce_len};

    log_sm_event(SMNUM_SW_AES_EAX_DECRYPT, r.error,
        curr_se_get_digest_ptr(), args, len, 2);

    return r;
}



static struct smret sm_security_lock(void)
{
    struct smret r = {.error = 0, .value = 0};

    // Check for parameter sanity and authorisations
    if (!is_authorised(SMNUM_SECURITY_LOCK, curr_se_get_auths()))
    {
        r.error = -E_UNAUTHORISED;
        log_sm_event(SMNUM_SECURITY_LOCK, r.error,
            curr_se_get_digest_ptr(), NULL, NULL, 0);
        return r;
    }

    security_lock();

    return r;
}

volatile const uintptr_t ecall_u_vector[] = 
{
    [SMNUM_RETURN_FROM_SE] = (uintptr_t)sm_return_from_se,
    [SMNUM_IMPLANT_SE] = (uintptr_t)sm_implant_se,
    [SMNUM_IMPLANT_SE_DIGEST] = (uintptr_t)sm_implant_se_digest,
    [SMNUM_REMOVE_SE_DIGEST] = (uintptr_t)sm_remove_se_digest,
    [SMNUM_BOOT_SE] = (uintptr_t)sm_boot_se,
    [SMNUM_SHUTDOWN_SE] = (uintptr_t)sm_shutdown_se,
    [SMNUM_GET_SE_SHM] = (uintptr_t)sm_get_se_shm,
    [SMNUM_EXEC_SE_SERV] = (uintptr_t)sm_exec_se_serv,
    [SMNUM_UPDATE_MY_DIGEST] = (uintptr_t)sm_get_authd_digest,
    [SMNUM_CHANGE_SE_AUTH] = (uintptr_t)sm_change_se_auth,

    [SMNUM_OPEN_FILE] = (uintptr_t)sm_open_file,
    [SMNUM_CLOSE_FILE] = (uintptr_t)sm_close_file,
    [SMNUM_READ_FILE] = (uintptr_t)sm_read_file,
    [SMNUM_WRITE_FILE] = (uintptr_t)sm_write_file,
    [SMNUM_LINK_FILE] = (uintptr_t)sm_link_file,
    [SMNUM_UNLINK_FILE] = (uintptr_t)sm_unlink_file,
    [SMNUM_MKDIR] = (uintptr_t)sm_mkdir,
    [SMNUM_RMDIR] = (uintptr_t)sm_rmdir,
   
    [SMNUM_CREATE_KEY] = (uintptr_t)sm_create_key, // aggiunto  
    [SMNUM_DERIVE_KEY] = (uintptr_t)sm_derive_key,
    [SMNUM_DELETE_KEY] = (uintptr_t)sm_delete_key,
    [SMNUM_RANDOM_NUM] = (uintptr_t)sm_random_num,
    [SMNUM_DIGEST_DATA_SHA256] = (uintptr_t)sm_digest_data_sha256,
    [SMNUM_DIGEST_DATA_SHA256_V] = (uintptr_t)sm_digest_data_sha256_vector,
    [SMNUM_AUTH_DATA_HMAC256] = (uintptr_t)sm_auth_data_hmac256,
    [SMNUM_AUTH_DATA_HMAC256_V] = (uintptr_t)sm_auth_data_hmac256_vector,
    [SMNUM_ENCRYPT_AESCBC] = (uintptr_t)sm_encrypt_data_aescbc,              // AES-CBC software cifratura
    [SMNUM_DECRYPT_AESCBC] = (uintptr_t)sm_decrypt_data_aescbc,              // AES-CBC software decifratura

    [SMNUM_HW_AES_ENCRYPT_CBC] = (uintptr_t)sm_hw_aes_encrypt_cbc,           // AES-CBC hardware cifratura
    [SMNUM_HW_AES_DECRYPT_CBC] = (uintptr_t)sm_hw_aes_decrypt_cbc,           // AES-CBC hardware decifratura
   
    [SMNUM_SW_AES_ENCRYPT_CTR] = (uintptr_t)sm_sw_aes_encrypt_ctr, 
    [SMNUM_HW_AES_ENCRYPT_CTR] = (uintptr_t)sm_hw_aes_encrypt_ctr,  // AES-CTR hardware
    
    [SMNUM_SW_DERIVE_KEY_MCTR] = (uintptr_t)sm_sw_derive_key_mctr, 
    [SMNUM_SW_DERIVE_KEY_CKDF] = (uintptr_t)sm_sw_derive_key_ckdf, 
    [SMNUM_HW_DERIVE_KEY_MCTR] = (uintptr_t)sm_derive_key_mctr,  // Derive-key with AES-MCTR
    [SMNUM_HW_DERIVE_KEY_CKDF] = (uintptr_t)sm_derive_key_ckdf,  // Derive-key with AES-CKDF

    [SMNUM_SW_AES_CMAC] = (uintptr_t)sm_sw_aes_cmac, 
    [SMNUM_HW_AES_CMAC] = (uintptr_t)sm_hw_aes_cmac,  // AES-CMAC hardware
    [SMNUM_SW_AES_CKDF] = (uintptr_t)sm_sw_aes_ckdf, 
    [SMNUM_HW_AES_CKDF] = (uintptr_t)sm_hw_aes_ckdf,  // AES-CKDF hardware

    [SMNUM_SW_AES_EAX_ENCRYPT] = (uintptr_t)sm_sw_aes_eax_encrypt, 
    [SMNUM_HW_AES_EAX_ENCRYPT] = (uintptr_t)sm_hw_aes_eax_encrypt, // AES-EAX encrypt hardware
    
    [SMNUM_SW_AES_EAX_DECRYPT] = (uintptr_t)sm_sw_aes_eax_decrypt, 
    [SMNUM_HW_AES_EAX_DECRYPT] = (uintptr_t)sm_hw_aes_eax_decrypt, // AES-EAX decrypt hardware

    [SMNUM_SECURITY_LOCK] = (uintptr_t)sm_security_lock
};
