#ifndef SEHEAD_H
#define SEHEAD_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <assert.h>

/*
 * The binary structure of a Secure Enclave.
 *                                           ____________________________________  __
 * 0:                                       |              magic                 |   |
 * 4:                                       |        offset_table_len            |   |
 * 8:                                       |             bin_len                |   |
 * 12:                                      |             bss_len                |   |
 * 16:                                      |           auth_digest[0]           |   |  Header
 * ...:                                     |                 ...                |   |
 * 47:                                      |           auth_digest[31]          |   |
 * 48:                                      |             current_sp             |   |
 * 52:                                      |   offset_table[0] (boot routine)   |   |
 * ...:                                     |                 ...                |   |
 * 52 + 4*(offset_table_len-1):             |  offset_table[offset_table_len-1]  | __|
 * 56 + 4*(offset_table_len-1):             |               bin[0]               |   |
 * ...:                                     |                 ...                |   |  SE image
 * 56 + 4*(offset_table_len-1) + bin_len-1: |           bin[bin_len-1]           | __|
 * ...:                                      ------------------------------------
 * 
 * The header contains the following fields:
 * - magic: 4 bytes used as identification for SEs
 * - offset_table_len: Length of the offset table
 * - bin_len: Length of the SE image (text and data sections)
 * - bss_len: Length of the bss section
 * - auth_digest: 32 bytes of space for the authenticated digest of the binary.
 *      This area is written by SM and read from SE.
 * - offset_table: Contains offset_table_len number of offsets to se_service functions.
 *      The i-th offset can be used to compute the address of the i-th SE service
 *      with this formula:
 *      i_th_service_func_addr = &magic + offset_table[i]
 */

/* CRTF */
#define SEHEADMAGIC 0x43525446

/* Signature of a SE service */
typedef long se_service(void *);

/* Binary header of a SE */
struct sehead
{
    uint32_t magic;
    uint32_t offset_table_len;
    uint32_t bin_len;
    uint32_t bss_len;
    uint8_t auth_digest[32];
    se_service *offset_table[];
};

/*
 * A valid SE is one that have at least one defined service.
 */
static inline bool is_valid(const struct sehead *sh)
{
    assert(sh);

    return sh->magic == SEHEADMAGIC &&
        sh->offset_table_len > 0;
}

static inline size_t sehead_size(const struct sehead *sh)
{
    assert(sh);

    return sizeof(*sh) +
        sh->offset_table_len * sizeof(sh->offset_table[0]);
}

static inline size_t bin_offset(const struct sehead *sh)
{
    assert(sh);
    
    return sehead_size(sh);
}

static inline size_t bss_offset(const struct sehead *sh)
{
    assert(sh);

    return bin_offset(sh) + sh->bin_len;
}

#endif