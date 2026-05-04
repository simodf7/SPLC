#include "sehead.h"

/*
 * One of the source files of the SE must define "DEFINE_SEHEAD" prior the inclusion of
 * this header file.
 */
#if !defined(SEHEAD_DEFINED) && defined(DEFINE_SEHEAD)
#define SEHEAD_DEFINED
extern const unsigned long _offset_table_len;
extern const unsigned long _bin_len;
extern const unsigned long _bss_len;
const struct sehead __attribute__ ((section (".se.head"))) __sehead =
{
    .magic = SEHEADMAGIC,
    .offset_table_len = (uint32_t)&_offset_table_len,
    .bin_len = (uint32_t)&_bin_len,
    .bss_len = (uint32_t)&_bss_len,
    .auth_digest = {0}
};
#endif

#ifndef SE_H
#define SE_H

extern const struct sehead __sehead;

#include "smapi.h"

/*
 * Register the [func] function as a SE service with UNIQUE priority [prio].
 * Each SE service will be assigned an UNIQUE STRICTLY INCREASING ID starting
 * from 0. A service registered with a priority lower than another will be assigned
 * its UNIQUE ID before and so it will be smaller.
 * The assigned UNIQUE ID is the number by which this service can be called by the SM.
 */
#define REGISTER_SE_SERVICE(func, prio)                                             \
    _Static_assert((prio) <= 65535,                                                 \
        "Secure Enclave services must have prio <= 65535");                         \
    long __attribute__((naked)) __se_serv_##prio##_wrap(void *p)                    \
    {                                                                               \
        (void)p;                                                                    \
        __asm__ volatile (                                                          \
            "jal ra, "#func "\n\t"                                                  \
            SMAPI_SMCALL_ASM(SMNUM_RETURN_FROM_SE));                                \
    }                                                                               \
    const se_service __attribute__((section(".se.services."#prio)))                 \
    *__se_serv_##prio = (const typeof(func) *)__se_serv_##prio##_wrap

#endif
