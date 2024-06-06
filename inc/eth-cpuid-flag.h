#ifndef ETH_CPUID_FLAG_H
#define ETH_CPUID_FLAG_H

///////////////////////////////////////
//
//          HEADERS
//
//////////////////////////////////////

#include "eth-types.h"

///////////////////////////////////////
//
//       CPUID FLAG
//
//////////////////////////////////////


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"

typedef enum eth_cpuid_flag_t
{
    ETH_CPUID_PROC_INFO_FEAT            = 0x1,
    ETH_CPUID_CACHE_TLB_INFO            = 0x2,
    ETH_CPUID_CPU_SERIAL_NUMBER         = 0x3,
    ETH_CPUID_CACHE_HTOP                = 0x4,
    ETH_CPUID_MONITOR_FEAT              = 0x5,
    ETH_CPUID_THERMAL_POWER             = 0x6,
    ETH_CPUID_EXT_FEAT_EAX              = 0x7,
    ETH_CPUID_EXT_FEAT_ECX_PAGE_1       = 0x0,
    ETH_CPUID_EXT_FEAT_ECX_PAGE_2       = 0x1,
    ETH_CPUID_EXT_FEAT_ECX_PAGE_3       = 0x2,
    ETH_CPUID_XSAVE_FEAT_EAX            = 0xD,
    ETH_CPUID_XSAVE_FEAT_ECX_PAGE_1     = 0x0,
    ETH_CPUID_XSAVE_FEAT_ECX_PAGE_2     = 0x1,
    ETH_CPUID_SGX_CAP_EAX               = 0x12,
    ETH_CPUID_SGX_ECX_PAGE_1            = 0x0,
    ETH_CPUID_SGX_ECX_PAGE_2            = 0x1,
    ETH_CPUID_SGX_ECX_PAGE_3            = 0x2,
    ETH_CPUID_PROC_TRACE_EAX            = 0x14,
    ETH_CPUID_PROC_TRACE_ECX            = 0x0,
    ETH_CPUID_TSC_CRYSTAL_INFO          = 0x15,
    ETH_CPUID_PROC_BUS_SPEC             = 0x16,
    ETH_CPUID_SOC_VENDOR_ATTRIB_EAX     = 0x17,
    ETH_CPUID_SOC_VENDOR_ATTRIB_ECX     = 0x0,
    ETH_CPUID_INTEL_KEY_LOCK_FEAT       = 0x19,
    ETH_CPUID_TDX_ENUM                  = 0x21,
    ETH_CPUID_AVX10_FEAT_EAX            = 0x24,
    ETH_CPUID_AVX10_FEAT_ECX            = 0x0,
    ETH_CPUID_DISCRET_AVX10_FEAT_EAX    = 0x24,
    ETH_CPUID_DISCRET_AVX10_FEAT_ECX    = 0x1,
    ETH_CPUID_HYPERVISOR_START          = 0x40000000,
    ETH_CPUID_HYPERVISOR_END            = 0x4FFFFFFF,
    ETH_CPUID_HIGHEST_EXT_FEAT          = 0x80000000,
    ETH_CPUID_EXT_PROC_INFO_FEAT        = 0x80000001,
    ETH_CPUID_PROC_BRAND_STRING_1       = 0x80000002,
    ETH_CPUID_PROC_BRAND_STRING_2       = 0x80000003,
    ETH_CPUID_PROC_BRAND_STRING_3       = 0x80000004,
    ETH_CPUID_L1_CACHE_TLB_ID           = 0x80000005,
    ETH_CPUID_L2_EXT_FEAT               = 0x80000006,
    ETH_CPUID_CPU_PWR_MGT_RAS_INFO      = 0x80000007,
    ETH_CPUID_VIRTUAL_PHYSICAL_ADDRSIZE = 0x80000008,
    ETH_CPUID_SECURE_VM_FEAT            = 0x8000000A,
    ETH_CPUID_ENCRYPTED_MEM_CAP         = 0x8000001F,
    ETH_CPUID_EXT_FEAT_ID               = 0x80000021,
    ETH_CPUID_HIGHEST_CENTAUR_EXT_FEAT  = 0xC0000000,
    ETH_CPUID_CENTAUR_FEAT              = 0xC0000001,    
} eth_cpuid_flag_t;
#pragma GCC diagnostic pop

typedef enum eth_cpuid_reg_index_t
{
    EAX,    //  EAX: 0x0
    ECX,    //  ECX: 0x1
    EDX,    //  EDX: 0x2
    EBX     //  EBX: 0x3
} eth_cpuid_reg_index_t, eth_cpuid_ri_t;

///////////////////////////////////////
//
//     TYPEDEFS STRUCT CPUID
//
//////////////////////////////////////

typedef struct  eth_cpuid_reg_t         eth_cpuid_reg_t;
typedef struct  eth_cpuid_feat_ext_t    eth_cpuid_feat_ext_t;

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
//       CPUID FEAT EXT STRUCT
//
//////////////////////////////////////

struct eth_cpuid_feat_ext_t
{
    const char              *str;
    eth_cpuid_flag_t        flag;
    eth_cpuid_reg_index_t   reg;
};

///////////////////////////////////////
//
//         SINGLETON
//
//////////////////////////////////////

const eth_cpuid_feat_ext_t *e_cpuid_basic_feat(eth_cpuid_ri_t idx, size_t *sz);

///////////////////////////////////////
//
//        CPUID FEAT MACRO
//
//////////////////////////////////////


#define DEF_BASIC_FEAT(n,r,sz) eth_cpuid_feat_ext_t  *n = e_cpuid_basic_feat(r,sz)

#endif
