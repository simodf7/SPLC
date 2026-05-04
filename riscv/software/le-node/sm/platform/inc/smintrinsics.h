#ifndef SMINTRINSICS_H
#define SMINTRINSICS_H

#include "dev_access.h"
#include "system_regs.h"

static inline void smenter(void)
{
    #ifndef SM_RELEASE
    DEV_WRITE(SEC_CTRL, 1);
    __asm__ volatile("ecall":::"memory");
    #else
    __asm__ volatile("smenter"::: "memory");
    #endif
}

static inline void smexit(void)
{
    #ifndef SM_RELEASE
    DEV_WRITE(SEC_CTRL, 0);
    __asm__ volatile("mret":::"memory");
    #else
    __asm__ volatile("smexit"::: "memory");
    #endif
}

#endif