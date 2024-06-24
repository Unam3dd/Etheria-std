#ifndef ETH_CPUID_H
#define ETH_CPUID_H

#if !defined (__x86_64__) && !defined (__amd64__)

#error "Error Etheria CPUID is only supported on x86 or amd architecture"

#else

///////////////////////////////////////
//
//        ETHERIA TYPES
//
//////////////////////////////////////

#include "eth-types.h"

///////////////////////////////////////
//
//         CPUID FLAGS
//
//////////////////////////////////////

#include "eth-cpuid-flag.h"

///////////////////////////////////////
//
//     TYPEDEFS STRUCT CPUID
//
//////////////////////////////////////

typedef struct  eth_cpuid_reg_t             eth_cpuid_reg_t;

///////////////////////////////////////
//
//     STRUCT CPUID REG
//
//////////////////////////////////////

struct eth_cpuid_reg_t
{
    u32_t   eax;
    u32_t   ecx;
    u32_t   edx;
    u32_t   ebx;
} __attribute__ ((__packed__));

///////////////////////////////////////
//
//    CPUID INLINE INSTRUCTION
//
//////////////////////////////////////

STATIC_ALWAYS_INLINE_NONNULL eth_cpuid_reg_t *eth_cpuid(u32_t eax, u32_t ecx, eth_cpuid_reg_t *r)
{
    __asm__ volatile ("cpuid"
            : "=a" (r->eax), "=b" (r->ebx), "=c" (r->ecx), "=d" (r->edx)
            : "a" (eax), "c" (ecx)
            : "memory"
            );

    return (r);
}

///////////////////////////////////////
//
//      ETH CPUID FUNCTION
//
//////////////////////////////////////

const char  *eth_cpuid_get_cpu_manufacturer_id(void);

#endif
#endif
