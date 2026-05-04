#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "smhead.h"
#include "hmac256.h"

#define ALIGN_ADDR_POW2(addr, pow2)                     \
    ({                                                  \
        uintptr_t addr_ = (uintptr_t)(addr);            \
        uintptr_t pow2_ = (uintptr_t)(pow2);            \
        addr_ += - addr_ & (pow2_ - 1UL);               \
    })

extern const unsigned long _ocm_start;
extern const unsigned long _ocm_len;
extern const unsigned long _prs_start;
extern const unsigned long _prs_len;
extern const unsigned long _sm_bin_start;
extern const unsigned long _sm_bin_len;

extern const unsigned char manufacturer_sign_key[32];
extern const unsigned char device_root_key[32];
extern const char device_mud_url[128];

struct sm_ver
{
    uint8_t mac[32];
    uint32_t version;
};

struct smhead *ocm_sm_bin_start = (struct smhead *)&_ocm_start;
size_t ocm_len = (size_t)&_ocm_len;
struct sm_ver *prs_version = (struct sm_ver *)&_prs_start;
size_t prs_len = (size_t)&_prs_len;
struct smhead *fls_sm_bin_start = (struct smhead *)&_sm_bin_start;

void fssbl_boot(void)
{
    struct sm_ver ocm_version;
    size_t sm_len = smhead_tot_size(fls_sm_bin_start);
    uint8_t check_version_mac[sizeof(ocm_version.mac)];

    if (ocm_len < sm_len || prs_len < sizeof(*prs_version))
        return;

    // Copy SM binary and version information
    memcpy(ocm_sm_bin_start, fls_sm_bin_start, sm_len);
    memcpy(&ocm_version, prs_version, sizeof(ocm_version));

    // Secure boot starts now
#ifndef FSSBL_SKIP_SB

    // Authenticate SM version information
    if (hmac_sha256(manufacturer_sign_key, sizeof(manufacturer_sign_key),
        (const uint8_t *)&ocm_version.version, sizeof(ocm_version.version),
        check_version_mac)) return;
    if (memcmp(check_version_mac, ocm_version.mac, sizeof(ocm_version.mac)))
        return;
    
    // Fail immediately if trying to boot a version older than the current
    if (ocm_sm_bin_start->version < ocm_version.version)
        return;
    
    // Authenticate SM image
    if (hmac_sha256(manufacturer_sign_key, sizeof(manufacturer_sign_key),
        smhead_auth_base(ocm_sm_bin_start), smhead_auth_size(ocm_sm_bin_start),
        check_version_mac))
        return;
    if (memcmp(check_version_mac, ocm_sm_bin_start->mac, sizeof(ocm_sm_bin_start->mac)))
        return;

    // If trying to execute a newer version, perform the update of version info
    if (ocm_sm_bin_start->version > ocm_version.version)
    {
        ocm_version.version = ocm_sm_bin_start->version;
        if (hmac_sha256(manufacturer_sign_key, sizeof(manufacturer_sign_key),
        (const uint8_t *)&ocm_version.version, sizeof(ocm_version.version),
        ocm_version.mac)) return;
        memcpy(prs_version, &ocm_version, sizeof(ocm_version));
    }

#endif

    // Compute the SM root secret
    if (hmac_sha256(device_root_key, sizeof(device_root_key), ocm_sm_bin_start->mac,
        sizeof(ocm_sm_bin_start->mac), check_version_mac))
        return;
    
    memcpy(ocm_sm_bin_start->mac, check_version_mac, sizeof(ocm_sm_bin_start->mac));

    void (*sm_entry)(const uint8_t *, const char *) = 
        (void (*)(const uint8_t *, const char *))
        (ALIGN_ADDR_POW2(ocm_sm_bin_start->bin, 0x80) + 0x80);

    sm_entry(ocm_sm_bin_start->mac, device_mud_url);

    __builtin_unreachable();
}