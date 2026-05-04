#include <assert.h>
#include <string.h>

#include "conf.h"
#include "types.h"
#include "keys.h"
#include "sm.h"
#include "smapi_nums.h"
#include "buddy.h"
#include "user.h"

#define DEFINE_PROFILER_STRUCT
#include "profiler.h"

#include "system.h"
#include "vstream.h"
#include "pmp.h"

#include "ase_bin.h"

SECURE_MONITOR(1);

/* This MUST be a char string */
#define LOGFILE_PATH_STR "/logs"

struct state
{
    enum lock_state
    {
        FREE        = 0,
        ENABLING    = 1,
        LOCKED      = 2
    } security_lock;
    void (*user_security_lock_handler)(void);
    struct mem_cfg current_bind;
};

static struct state s = {0};

void register_user_security_lock_handler(void (*handler)(void))
{
    s.user_security_lock_handler = handler;
}

void security_lock(void)
{
    // This can be triggered by:
    // 1. The ASE (or an enclave with sufficient authorisation)
    //      through the SMAPI when detecting an event requiring a security lock,
    // 2. The SM itself when the PMP detects any authorised memory access,
    // 3. The [auth] module unit when [AUTHORISATIONS_MAX_NUM_UNAUTH_ACTIONS]
    //      is reached.
    // This lock is in two phases:
    // 1. If registered, invoke a User level handler to allow user code a
    //      graceful degradation. The User level handler is called only once.
    // 2. Shutdown ANY Secure Enclave, effectively zeroing the chance to
    //      access the TEE resources and halt the device.
    
    enum lock_state prev_state = s.security_lock;
    s.security_lock = ENABLING;
    if (prev_state == FREE)
    {
        // Log is done here because security lock can be triggered from
        // multiple contexts and we want to log just once
        log_sm_event(SMNUM_SECURITY_LOCK, 0, NULL, NULL, NULL, 0);
        bypass_logging(true);
        if (s.user_security_lock_handler)
            s.user_security_lock_handler();
    }
    s.security_lock = LOCKED;

    shutdown_all_ses();
    puts("[SM] Security lock triggered. Reset the device to continue...\n");
    halt();
}

int bind_se_area(struct mem_cfg *c)
{
    assert(c && c->addr &&
        (c->size & (c->size - 1)) == 0 &&
        ((uintptr_t)c->addr & (c->size - 1)) == 0);
    
    if (s.security_lock == LOCKED) return -1;

    pmp_config_t cfg;
    cfg.region_number = 2;
    cfg.R = 1;
    cfg.W = 1;
    cfg.X = 1;
    cfg.A = NAPOT;
    cfg.SL = 1;
    cfg.L = 0;
    cfg.region_start_address = (uint32_t)c->addr;
    cfg.region_dimension = c->size;

    if (pmp_configure_region(&cfg))
        return -1;
    
    printf("[SM] Binded %p of size %u\n", c->addr, c->size);

    s.current_bind = *c;

    return 0;
}

int unbind_se_area(void)
{
    extern long _sem_end;
    extern long _shm_end;
    char *shm_end = (char *)&_shm_end;
    char *sem_end = (char *)&_sem_end;

    pmp_config_t cfg;
    cfg.region_number = 2;
    cfg.R = 0;
    cfg.W = 0;
    cfg.X = 0;
    cfg.A = TOR;
    cfg.SL = 1;
    cfg.L = 0;
    cfg.region_start_address = (uint32_t)shm_end;
    cfg.region_end_address = (uint32_t)sem_end;

    if (pmp_configure_region(&cfg))
        return -1;

    puts("[SM] Unbinded SE area\n");

    s.current_bind.addr = NULL;
    s.current_bind.size = 0;

    return 0;
}

int check_ptr_sanity(const void *area, size_t area_len)
{
    uintptr_t as = (uintptr_t)area;
    uintptr_t ae = (uintptr_t)area + area_len;
    // sum is overflowed
    if (ae < as) return -1;

    extern long _shm_start;
    extern long _shm_len;
    uintptr_t shm_start = (uintptr_t)&_shm_start;
    uintptr_t shm_end = shm_start + (size_t)&_shm_len;

    if (as >= shm_start && ae < shm_end)
        return 0;

    uintptr_t se_start = (uintptr_t)s.current_bind.addr;
    uintptr_t se_end = se_start + s.current_bind.size;

    if (as >= se_start && ae < se_end)
        return 0;
    
    return -1;
}

void core_main(const uint8_t *sm_root_secret, const char *mud_url)
{
    system_init();
    puts("[SM] Starting... SM root secret: 0x");
    for (size_t i = 0; i < 32; i++)
        printf("%02X", sm_root_secret[i]);
    printf("\n[SM] Device MUD URL: %s\n", mud_url);

    PROFILE("sm_modules_startup")
    {
        extern long _sstorage_start;
        extern long _sstorage_len;

        extern long _shm_start;
        extern long  _shm_len;
        extern long _shm_end;

        extern long _sem_start;
        extern long _sem_len;
        extern long _sem_end;

        char *sstorage_start = (char *)&_sstorage_start;
        size_t sstorage_len = (size_t)&_sstorage_len;

        if (init_storage(sstorage_start, sstorage_len, false))
            fatal("[SM] Error while initializing Secure storage\n");

        if (init_crypto(sm_root_secret, 32))
            fatal("[SM] Error while initializing Crypto\n");
        
        char *shm_start = (char *)&_shm_start;
        size_t shm_len = (size_t)&_shm_len;
        char *shm_end = (char *)&_shm_end;
        char *sem_start = (char *)&_sem_start;
        size_t sem_len = (size_t)&_sem_len;
        char *sem_end = (char *)&_sem_end;

        struct buddy *shm = buddy_startup(shm_start, shm_len);
        if (!shm) fatal("[SM] Error while creating shm allocator\n");
        struct buddy *sem = buddy_startup(sem_start, sem_len);
        if (!sem) fatal("[SM] Error while creating sem allocator\n");

        void *shm_base = buddy_get_base(shm);

        pmp_config_t cfg;
        // Set the PMP cfg 0 to protect the region [0, shm_base)
        // with RWX=000, SL=1 and L=1.
        // This region must be locked until reset and not
        // modifiable, even from the SM itself.
        cfg.region_number = 0;
        cfg.R = 0;
        cfg.W = 0;
        cfg.X = 0;
        cfg.A = TOR;
        cfg.SL = 1;
        cfg.L = 1;
        cfg.region_start_address = (uint32_t)0;
        cfg.region_end_address = (uint32_t)shm_base;
        if (pmp_configure_region(&cfg))
            fatal("[SM] Error in PMP region 0 config\n");

        // Set the PMP cfg 2 for the SE protected memory.
        // This is setted to block any access from anyone in the
        // region [shm_end, sem_end).
        // Obviusly set SL=1 to block this region.
        // When a SE has to be scheduled, this configuration and
        // its address are changed
        cfg.region_number = 2;
        cfg.R = 0;
        cfg.W = 0;
        cfg.X = 0;
        cfg.A = TOR;
        cfg.SL = 1;
        cfg.L = 0;
        cfg.region_start_address = (uint32_t)shm_end;
        cfg.region_end_address = (uint32_t)sem_end;
        if (pmp_configure_region(&cfg))
            fatal("[SM] Error in PMP region 2 config\n");

        // Set the last PMP region for enabling execution in the
        // region containing the untrusted domain M-mode code.
        // This is the last region we are going to set.
        cfg.region_number = PMP_REGIONS - 1;
        cfg.R = 0;
        cfg.W = 0;
        cfg.X = 1;
        cfg.A = NAPOT;
        cfg.SL = 0;
        cfg.L = 1;
        cfg.region_start_address = 0;
        cfg.region_dimension = UINT32_MAX;
        if (pmp_configure_region(&cfg))
            fatal("[SM] Error in PMP last region config\n");

        // (Disable RLB) and Enable mseccfg.MML and keep mseccfg.MMWP cleared.
        // By doing so the untrusted domain M-mode code can access
        // in R/W to any region not covered by pmp rules.
        // This is accepted becase by doing so we allow M-mode code
        // to set it's data regions in the PMP.
        if (setRLB(0)) fatal("[SM] Error in clearing RLB\n");
        setMML();

        // Set the PMP cfg 1 as a shared region between
        // U-mode and M-mode for the region [shm_base, shm_end).
        // Obviusly set SL=1 to block this region.
        // Secure Monitor should not modify this region after this
        // initialization process.
        // This is done after settin MML because, before, the setting
        // of this configuration is not allowed by the PMP.
        cfg.region_number = 1;
        cfg.R = 0;
        cfg.W = 1;
        cfg.X = 1;
        cfg.A = TOR;
        cfg.SL = 1;
        cfg.L = 0;
        cfg.region_start_address = (uint32_t)shm_base;
        cfg.region_end_address = (uint32_t)shm_end;
        if (pmp_configure_region(&cfg))
            fatal("[SM] Error in PMP region 1 config\n");

        if (init_enclave(sem, shm))
            fatal("[SM] Error while Enclave subsystem initialisation\n");

        const uint8_t seed[] = "ASE KEY DERIVATION";
        if (derive_key(ase_keyID, root_keyID, seed, sizeof(seed)))
            fatal("[SM] Error in ASE key derivation\n");

        if (init_tracer(LOGFILE_PATH_STR, ase_keyID))
            fatal("[SM] Error while Tracer subsystem initialisation");
    }

    puts("[SM] Secure Monitor Core initialisation completed!\n");

    PROFILE("sm_ase_boot")
    {
        if (implant_se((const struct sehead *)ase_bin))
            fatal("[SM] Error in ASE implantation\n");
        
        sehandle h = boot_se((const struct sehead *)ase_bin, AUTH_ALL, 1024, 1024, NULL);

        // Call the boot service
        struct mem_cfg hshm = get_se_shm(h);
        struct
        {
            void *shm_start; size_t shm_size;
            char logfile_path[STORAGE_MAX_NAME_LEN];
        } aseparams = 
        {
            .shm_start = hshm.addr,
            .shm_size = hshm.size,
            .logfile_path = LOGFILE_PATH_STR
        };

        if (!hshm.addr || hshm.size < sizeof(aseparams))
            fatal("[SM] ASE shared memory retrieval failed or size is not enough\n");
        // Confidential parameters passed with shared memory because control
        // is still ONLY of Secure Monitor
        memcpy(hshm.addr, &aseparams, sizeof(aseparams));
        struct smret ret = execute_se_service(h, 0, 0);
        
        // Fails if SM fails to execute ASE boot routine OR
        // the routine itself reports a failure
        if (ret.error || ret.value)
            fatal("[SM] ASE boot failed\n");
    }
    
    puts("[SM] ASE boot completed, continuing to user initialisations...\n");

    user_main(mud_url);
}