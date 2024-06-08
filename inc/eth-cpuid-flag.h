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

typedef enum eth_cpuid_eax_flag_t
{
    ETH_CPUID_PROC_INFO_FEAT            = 0x1,
    ETH_CPUID_CACHE_TLB_INFO            = 0x2,
    ETH_CPUID_CPU_SERIAL_NUMBER         = 0x3,
    ETH_CPUID_CACHE_HTOP                = 0x4,
    ETH_CPUID_MONITOR_FEAT              = 0x5,
    ETH_CPUID_THERMAL_POWER             = 0x6,
    ETH_CPUID_EXT_FEAT                  = 0x7,
    ETH_CPUID_XSAVE_FEAT                = 0xD,
    ETH_CPUID_SGX_CAP_EAX               = 0x12,
    ETH_CPUID_PROC_TRACE                = 0x14,
    ETH_CPUID_TSC_CRYSTAL_INFO          = 0x15,
    ETH_CPUID_PROC_BUS_SPEC             = 0x16,
    ETH_CPUID_SOC_VENDOR_ATTRIB         = 0x17,
    ETH_CPUID_INTEL_KEY_LOCK_FEAT       = 0x19,
    ETH_CPUID_TDX_ENUM                  = 0x21,
    ETH_CPUID_AVX10_FEAT                = 0x24,
    ETH_CPUID_DISCRET_AVX10_FEAT        = 0x24,
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
} eth_cpuid_eax_flag_t;
#pragma GCC diagnostic pop

typedef enum eth_cpuid_ecx_flag_t
{
    ETH_CPUID_EXT_FEAT_ECX_PAGE_1       = 0x0,
    ETH_CPUID_EXT_FEAT_ECX_PAGE_2       = 0x1,
    ETH_CPUID_EXT_FEAT_ECX_PAGE_3       = 0x2,
    ETH_CPUID_XSAVE_FEAT_ECX_PAGE_1     = 0x0,
    ETH_CPUID_XSAVE_FEAT_ECX_PAGE_2     = 0x1,
    ETH_CPUID_SGX_ECX_PAGE_1            = 0x0,
    ETH_CPUID_SGX_ECX_PAGE_2            = 0x1,
    ETH_CPUID_SGX_ECX_PAGE_3            = 0x2,
    ETH_CPUID_PROC_TRACE_ECX            = 0x0,
    ETH_CPUID_SOC_VENDOR_ATTRIB_ECX     = 0x0,
    ETH_CPUID_AVX10_FEAT_ECX            = 0x0,
    ETH_CPUID_DISCRET_AVX10_FEAT_ECX    = 0x1
} eth_cpuid_ecx_flag_t;

typedef enum eth_cpuid_reg_index_t
{
    EAX,    //  EAX: 0x0
    ECX,    //  ECX: 0x1
    EDX,    //  EDX: 0x2
    EBX     //  EBX: 0x3
} eth_cpuid_reg_index_t, eth_cpuid_ri_t;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
typedef enum eth_cpuid_feat_flag_t
{
    ETH_CPUID_FEAT_FPU          = BIN_NUM_1(0),
    ETH_CPUID_FEAT_VME          = BIN_NUM_1(1),
    ETH_CPUID_FEAT_DE           = BIN_NUM_1(2),
    ETH_CPUID_FEAT_PSE          = BIN_NUM_1(3),
    ETH_CPUID_FEAT_TSC          = BIN_NUM_1(4),
    ETH_CPUID_FEAT_MSR          = BIN_NUM_1(5),
    ETH_CPUID_FEAT_PAE          = BIN_NUM_1(6),
    ETH_CPUID_FEAT_MCE          = BIN_NUM_1(7),
    ETH_CPUID_FEAT_CX8          = BIN_NUM_1(8),
    ETH_CPUID_FEAT_APIC         = BIN_NUM_1(9),
    ETH_CPUID_FEAT_SEP          = BIN_NUM_1(11),
    ETH_CPUID_FEAT_MTRR         = BIN_NUM_1(12),
    ETH_CPUID_FEAT_PGE          = BIN_NUM_1(13),
    ETH_CPUID_FEAT_MCA          = BIN_NUM_1(14),
    ETH_CPUID_FEAT_CMOV         = BIN_NUM_1(15),
    ETH_CPUID_FEAT_PAT          = BIN_NUM_1(16),
    ETH_CPUID_FEAT_PSE36        = BIN_NUM_1(17),
    ETH_CPUID_FEAT_PSN          = BIN_NUM_1(18),
    ETH_CPUID_FEAT_CLFSH        = BIN_NUM_1(19),
    ETH_CPUID_FEAT_NX           = BIN_NUM_1(20),
    ETH_CPUID_FEAT_DS           = BIN_NUM_1(21),
    ETH_CPUID_FEAT_ACPI         = BIN_NUM_1(22),
    ETH_CPUID_FEAT_MMX          = BIN_NUM_1(23),
    ETH_CPUID_FEAT_FXSR         = BIN_NUM_1(24),
    ETH_CPUID_FEAT_SSE          = BIN_NUM_1(25),
    ETH_CPUID_FEAT_SSE2         = BIN_NUM_1(26),
    ETH_CPUID_FEAT_SS           = BIN_NUM_1(27),
    ETH_CPUID_FEAT_HTT          = BIN_NUM_1(28),
    ETH_CPUID_FEAT_TM           = BIN_NUM_1(29),
    ETH_CPUID_FEAT_IA64         = BIN_NUM_1(30),
    ETH_CPUID_FEAT_PBE          = BIN_NUM_1(31),
    ETH_CPUID_FEAT_SSE3         = BIN_NUM_1(0),
    ETH_CPUID_FEAT_PCLMULQDQ    = BIN_NUM_1(1),
    ETH_CPUID_FEAT_DTES64       = BIN_NUM_1(2),
    ETH_CPUID_FEAT_MONITOR      = BIN_NUM_1(3),
    ETH_CPUID_FEAT_DS_CPL       = BIN_NUM_1(4),
    ETH_CPUID_FEAT_VMX          = BIN_NUM_1(5),
    ETH_CPUID_FEAT_SMX          = BIN_NUM_1(6),
    ETH_CPUID_FEAT_EST          = BIN_NUM_1(7),
    ETH_CPUID_FEAT_TM2          = BIN_NUM_1(8),
    ETH_CPUID_FEAT_SSSE3        = BIN_NUM_1(9),
    ETH_CPUID_FEAT_CNXT_ID      = BIN_NUM_1(10),
    ETH_CPUID_FEAT_SDBG         = BIN_NUM_1(11),
    ETH_CPUID_FEAT_FMA          = BIN_NUM_1(12),
    ETH_CPUID_FEAT_CX16         = BIN_NUM_1(13),
    ETH_CPUID_FEAT_XTPR         = BIN_NUM_1(14),
    ETH_CPUID_FEAT_PDCM         = BIN_NUM_1(15),
    ETH_CPUID_FEAT_PCID         = BIN_NUM_1(17),
    ETH_CPUID_FEAT_DCA          = BIN_NUM_1(18),
    ETH_CPUID_FEAT_SSE41        = BIN_NUM_1(19),
    ETH_CPUID_FEAT_SSE42        = BIN_NUM_1(20),
    ETH_CPUID_FEAT_X2APIC       = BIN_NUM_1(21),
    ETH_CPUID_FEAT_MOVBE        = BIN_NUM_1(22),
    ETH_CPUID_FEAT_POPCNT       = BIN_NUM_1(23),
    ETH_CPUID_FEAT_TSC_DLINE    = BIN_NUM_1(24),
    ETH_CPUID_FEAT_AES_NI       = BIN_NUM_1(25),
    ETH_CPUID_FEAT_XSAVE        = BIN_NUM_1(26),
    ETH_CPUID_FEAT_OSXSAVE      = BIN_NUM_1(27),
    ETH_CPUID_FEAT_AVX          = BIN_NUM_1(28),
    ETH_CPUID_FEAT_F16C         = BIN_NUM_1(29),
    ETH_CPUID_FEAT_RDRND        = BIN_NUM_1(30),
    ETH_CPUID_FEAT_HYPERVISOR   = BIN_NUM_1(31)
} eth_cpuid_feat_flag_t;
#pragma GCC diagnostic pop

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
    eth_cpuid_eax_flag_t    eax_flg;
    eth_cpuid_ecx_flag_t    ecx_flg;
    eth_cpuid_feat_flag_t   flg;
    eth_cpuid_reg_index_t   reg;
};

///////////////////////////////////////
//
//        CPUID FEAT MACRO
//
//////////////////////////////////////


#define DEF_BASIC_FEAT(n,r,sz) eth_cpuid_feat_ext_t  *n = e_cpuid_basic_feat(r,sz)

#endif
