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
    FEAT_ECX_PAGE_1                     = 0x1,
    FEAT_ECX_PAGE_2                     = 0x2,
    XSAVE_FEAT_ECX_PAGE_1               = 0x0,
    XSAVE_FEAT_ECX_PAGE_2               = 0x1,
    SGX_ECX_PAGE_1                      = 0x0,
    SGX_ECX_PAGE_2                      = 0x1,
    SGX_ECX_PAGE_3                      = 0x2,
    PROC_TRACE_ECX                      = 0x0,
    SOC_VENDOR_ATTRIB_ECX               = 0x0,
    AVX10_FEAT_ECX                      = 0x0,
    DISCRET_AVX10_FEAT_ECX              = 0x1
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
    ETH_CPUID_FEAT_FPU                                  = BIN_NUM_1(0),
    ETH_CPUID_FEAT_VME                                  = BIN_NUM_1(1),
    ETH_CPUID_FEAT_DE                                   = BIN_NUM_1(2),
    ETH_CPUID_FEAT_PSE                                  = BIN_NUM_1(3),
    ETH_CPUID_FEAT_TSC                                  = BIN_NUM_1(4),
    ETH_CPUID_FEAT_MSR                                  = BIN_NUM_1(5),
    ETH_CPUID_FEAT_PAE                                  = BIN_NUM_1(6),
    ETH_CPUID_FEAT_MCE                                  = BIN_NUM_1(7),
    ETH_CPUID_FEAT_CX8                                  = BIN_NUM_1(8),
    ETH_CPUID_FEAT_APIC                                 = BIN_NUM_1(9),
    ETH_CPUID_FEAT_SEP                                  = BIN_NUM_1(11),
    ETH_CPUID_FEAT_MTRR                                 = BIN_NUM_1(12),
    ETH_CPUID_FEAT_PGE                                  = BIN_NUM_1(13),
    ETH_CPUID_FEAT_MCA                                  = BIN_NUM_1(14),
    ETH_CPUID_FEAT_CMOV                                 = BIN_NUM_1(15),
    ETH_CPUID_FEAT_PAT                                  = BIN_NUM_1(16),
    ETH_CPUID_FEAT_PSE36                                = BIN_NUM_1(17),
    ETH_CPUID_FEAT_PSN                                  = BIN_NUM_1(18),
    ETH_CPUID_FEAT_CLFSH                                = BIN_NUM_1(19),
    ETH_CPUID_FEAT_NX                                   = BIN_NUM_1(20),
    ETH_CPUID_FEAT_DS                                   = BIN_NUM_1(21),
    ETH_CPUID_FEAT_ACPI                                 = BIN_NUM_1(22),
    ETH_CPUID_FEAT_MMX                                  = BIN_NUM_1(23),
    ETH_CPUID_FEAT_FXSR                                 = BIN_NUM_1(24),
    ETH_CPUID_FEAT_SSE                                  = BIN_NUM_1(25),
    ETH_CPUID_FEAT_SSE2                                 = BIN_NUM_1(26),
    ETH_CPUID_FEAT_SS                                   = BIN_NUM_1(27),
    ETH_CPUID_FEAT_HTT                                  = BIN_NUM_1(28),
    ETH_CPUID_FEAT_TM                                   = BIN_NUM_1(29),
    ETH_CPUID_FEAT_IA64                                 = BIN_NUM_1(30),
    ETH_CPUID_FEAT_PBE                                  = BIN_NUM_1(31),
    ETH_CPUID_FEAT_SSE3                                 = BIN_NUM_1(0),
    ETH_CPUID_FEAT_PCLMULQDQ                            = BIN_NUM_1(1),
    ETH_CPUID_FEAT_DTES64                               = BIN_NUM_1(2),
    ETH_CPUID_FEAT_MONITOR                              = BIN_NUM_1(3),
    ETH_CPUID_FEAT_DS_CPL                               = BIN_NUM_1(4),
    ETH_CPUID_FEAT_VMX                                  = BIN_NUM_1(5),
    ETH_CPUID_FEAT_SMX                                  = BIN_NUM_1(6),
    ETH_CPUID_FEAT_EST                                  = BIN_NUM_1(7),
    ETH_CPUID_FEAT_TM2                                  = BIN_NUM_1(8),
    ETH_CPUID_FEAT_SSSE3                                = BIN_NUM_1(9),
    ETH_CPUID_FEAT_CNXT_ID                              = BIN_NUM_1(10),
    ETH_CPUID_FEAT_SDBG                                 = BIN_NUM_1(11),
    ETH_CPUID_FEAT_FMA                                  = BIN_NUM_1(12),
    ETH_CPUID_FEAT_CX16                                 = BIN_NUM_1(13),
    ETH_CPUID_FEAT_XTPR                                 = BIN_NUM_1(14),
    ETH_CPUID_FEAT_PDCM                                 = BIN_NUM_1(15),
    ETH_CPUID_FEAT_PCID                                 = BIN_NUM_1(17),
    ETH_CPUID_FEAT_DCA                                  = BIN_NUM_1(18),
    ETH_CPUID_FEAT_SSE41                                = BIN_NUM_1(19),
    ETH_CPUID_FEAT_SSE42                                = BIN_NUM_1(20),
    ETH_CPUID_FEAT_X2APIC                               = BIN_NUM_1(21),
    ETH_CPUID_FEAT_MOVBE                                = BIN_NUM_1(22),
    ETH_CPUID_FEAT_POPCNT                               = BIN_NUM_1(23),
    ETH_CPUID_FEAT_TSC_DLINE                            = BIN_NUM_1(24),
    ETH_CPUID_FEAT_AES_NI                               = BIN_NUM_1(25),
    ETH_CPUID_FEAT_XSAVE                                = BIN_NUM_1(26),
    ETH_CPUID_FEAT_OSXSAVE                              = BIN_NUM_1(27),
    ETH_CPUID_FEAT_AVX                                  = BIN_NUM_1(28),
    ETH_CPUID_FEAT_F16C                                 = BIN_NUM_1(29),
    ETH_CPUID_FEAT_RDRND                                = BIN_NUM_1(30),
    ETH_CPUID_FEAT_HYPERVISOR                           = BIN_NUM_1(31),
    ETH_CPUID_EXT_FEAT_FSGSBASE                         = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_IA32_TSC_ADJUST_MSR              = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_SGX                              = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_BMI1                             = BIN_NUM_1(3),
    ETH_CPUID_EXT_FEAT_HLE                              = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_AVX2                             = BIN_NUM_1(5),
    ETH_CPUID_EXT_FEAT_FDP                              = BIN_NUM_1(6),
    ETH_CPUID_EXT_FEAT_SMEP                             = BIN_NUM_1(7),
    ETH_CPUID_EXT_FEAT_BMI2                             = BIN_NUM_1(8),
    ETH_CPUID_EXT_FEAT_ERMS                             = BIN_NUM_1(9),
    ETH_CPUID_EXT_FEAT_INVPCID                          = BIN_NUM_1(10),
    ETH_CPUID_EXT_FEAT_RTM                              = BIN_NUM_1(11),
    ETH_CPUID_EXT_FEAT_RDTM_PQM                         = BIN_NUM_1(12),
    ETH_CPUID_EXT_FEAT_X87_FPU                          = BIN_NUM_1(13),
    ETH_CPUID_EXT_FEAT_MPX                              = BIN_NUM_1(14),
    ETH_CPUID_EXT_FEAT_RDTA_PQE                         = BIN_NUM_1(15),
    ETH_CPUID_EXT_FEAT_AVX512F                          = BIN_NUM_1(16),
    ETH_CPUID_EXT_FEAT_AVX512DQ                         = BIN_NUM_1(17),
    ETH_CPUID_EXT_FEAT_RDSEED                           = BIN_NUM_1(18),
    ETH_CPUID_EXT_FEAT_ADX                              = BIN_NUM_1(19),
    ETH_CPUID_EXT_FEAT_SMAP                             = BIN_NUM_1(20),
    ETH_CPUID_EXT_FEAT_AVX512_IFMA                      = BIN_NUM_1(21),
    ETH_CPUID_EXT_FEAT_PCOMMIT                          = BIN_NUM_1(22),
    ETH_CPUID_EXT_FEAT_CLFLUSHOPT                       = BIN_NUM_1(23),
    ETH_CPUID_EXT_FEAT_CLWB                             = BIN_NUM_1(24),
    ETH_CPUID_EXT_FEAT_PT                               = BIN_NUM_1(25),
    ETH_CPUID_EXT_FEAT_AVX512_PF                        = BIN_NUM_1(26),
    ETH_CPUID_EXT_FEAT_AVX512_ER                        = BIN_NUM_1(27),
    ETH_CPUID_EXT_FEAT_AVX512_CD                        = BIN_NUM_1(28),
    ETH_CPUID_EXT_FEAT_SHA                              = BIN_NUM_1(29),
    ETH_CPUID_EXT_FEAT_AVX512_BW                        = BIN_NUM_1(30),
    ETH_CPUID_EXT_FEAT_AVX512_VL                        = BIN_NUM_1(31),
    ETH_CPUID_EXT_FEAT_PREFETCHWT1                       = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_AVX512_VBMI                      = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_UMIP                             = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_PKU                              = BIN_NUM_1(3),
    ETH_CPUID_EXT_FEAT_OSPKE                            = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_WAITPKG                          = BIN_NUM_1(5),
    ETH_CPUID_EXT_FEAT_AVX512_VBMI2                     = BIN_NUM_1(6),
    ETH_CPUID_EXT_FEAT_CET_SS                           = BIN_NUM_1(7),
    ETH_CPUID_EXT_FEAT_GFNI                             = BIN_NUM_1(8),
    ETH_CPUID_EXT_FEAT_VAES                             = BIN_NUM_1(9),
    ETH_CPUID_EXT_FEAT_VPCLMULQDQ                       = BIN_NUM_1(10),
    ETH_CPUID_EXT_FEAT_AVX512_VNNI                      = BIN_NUM_1(11),
    ETH_CPUID_EXT_FEAT_AVX512_BITALG                    = BIN_NUM_1(12),
    ETH_CPUID_EXT_FEAT_TME_EN                           = BIN_NUM_1(13),
    ETH_CPUID_EXT_FEAT_AVX512_VPOPCNTDQ                 = BIN_NUM_1(14),
    ETH_CPUID_EXT_FEAT_FZM                              = BIN_NUM_1(15),
    ETH_CPUID_EXT_FEAT_LA57                             = BIN_NUM_1(16),
    ETH_CPUID_EXT_FEAT_MAWAU                            = BIN_NUM_5(17),
    ETH_CPUID_EXT_FEAT_RDPID                            = BIN_NUM_1(22),
    ETH_CPUID_EXT_FEAT_KL                               = BIN_NUM_1(23),
    ETH_CPUID_EXT_FEAT_BUS_LOCK_DETECT                  = BIN_NUM_1(24),
    ETH_CPUID_EXT_FEAT_CLDEMOTE                         = BIN_NUM_1(25),
    ETH_CPUID_EXT_FEAT_MPRR                             = BIN_NUM_1(26),
    ETH_CPUID_EXT_FEAT_MOVDIRI                          = BIN_NUM_1(27),
    ETH_CPUID_EXT_FEAT_MOVDIR64B                        = BIN_NUM_1(28),
    ETH_CPUID_EXT_FEAT_ENQCMD                           = BIN_NUM_1(29),
    ETH_CPUID_EXT_FEAT_SGX_LC                           = BIN_NUM_1(30),
    ETH_CPUID_EXT_FEAT_PKS                              = BIN_NUM_1(31),
    ETH_CPUID_EXT_FEAT_SGX_TERM                         = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_SGX_KEYS                         = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_AVX512_4VNNIW                    = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_AVX512_4FMAPS                    = BIN_NUM_1(3),
    ETH_CPUID_EXT_FEAT_FSRM                             = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_UINTR                            = BIN_NUM_1(5),
    ETH_CPUID_EXT_FEAT_AVX512_VP2INTERSECT              = BIN_NUM_1(8),
    ETH_CPUID_EXT_FEAT_SRBDS_CTRL                       = BIN_NUM_1(9),
    ETH_CPUID_EXT_FEAT_MD_CLEAR                         = BIN_NUM_1(10),
    ETH_CPUID_EXT_FEAT_RTM_ALWAYS_ABORT                 = BIN_NUM_1(11),
    ETH_CPUID_EXT_FEAT_RTM_FORCE_ABORT                  = BIN_NUM_1(13),
    ETH_CPUID_EXT_FEAT_SERIALIZE                        = BIN_NUM_1(14),
    ETH_CPUID_EXT_FEAT_HYBRID                           = BIN_NUM_1(15),
    ETH_CPUID_EXT_FEAT_TSXLDTRK                         = BIN_NUM_1(16),
    ETH_CPUID_EXT_FEAT_PCONFIG                          = BIN_NUM_1(18),
    ETH_CPUID_EXT_FEAT_LBR                              = BIN_NUM_1(19),
    ETH_CPUID_EXT_FEAT_CET_IBT                          = BIN_NUM_1(20),
    ETH_CPUID_EXT_FEAT_AMX_BF16                         = BIN_NUM_1(22),
    ETH_CPUID_EXT_FEAT_AVX512_FP16                      = BIN_NUM_1(23),
    ETH_CPUID_EXT_FEAT_AMX_TILE                         = BIN_NUM_1(24),
    ETH_CPUID_EXT_FEAT_AMX_INT8                         = BIN_NUM_1(25),
    ETH_CPUID_EXT_FEAT_IBRS                             = BIN_NUM_1(26),
    ETH_CPUID_EXT_FEAT_STIBP                            = BIN_NUM_1(27),
    ETH_CPUID_EXT_FEAT_L1D_FLUSH                        = BIN_NUM_1(28),
    ETH_CPUID_EXT_FEAT_IA32_ARCH_CAP_MSR                = BIN_NUM_1(29),
    ETH_CPUID_EXT_FEAT_IA32_CORE_CAP_MSR                = BIN_NUM_1(30),
    ETH_CPUID_EXT_FEAT_SSBD                             = BIN_NUM_1(31),
    ETH_CPUID_EXT_FEAT_SHA512                           = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_SM3                              = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_SM4                              = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_RAO_INT                          = BIN_NUM_1(3),
    ETH_CPUID_EXT_FEAT_AVX_VNNI                         = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_AVX512_BF16                      = BIN_NUM_1(5),
    ETH_CPUID_EXT_FEAT_LASS                             = BIN_NUM_1(6),
    ETH_CPUID_EXT_FEAT_CMPCCXADD                        = BIN_NUM_1(7),
    ETH_CPUID_EXT_FEAT_ARCHPERFMONEXT                   = BIN_NUM_1(8),
    ETH_CPUID_EXT_FEAT_DEDUP                            = BIN_NUM_1(9),
    ETH_CPUID_EXT_FEAT_FZRM                             = BIN_NUM_1(10),
    ETH_CPUID_EXT_FEAT_FSRS                             = BIN_NUM_1(11),
    ETH_CPUID_EXT_FEAT_RSRCS                            = BIN_NUM_1(12),
    ETH_CPUID_EXT_FEAT_FRED                             = BIN_NUM_1(17),
    ETH_CPUID_EXT_FEAT_LKGS                             = BIN_NUM_1(18),
    ETH_CPUID_EXT_FEAT_WRMSRNS                          = BIN_NUM_1(19),
    ETH_CPUID_EXT_FEAT_NMI_SRC                          = BIN_NUM_1(20),
    ETH_CPUID_EXT_FEAT_AMX_FP16                         = BIN_NUM_1(21),
    ETH_CPUID_EXT_FEAT_HRESET                           = BIN_NUM_1(22),
    ETH_CPUID_EXT_FEAT_AVX_IFMA                         = BIN_NUM_1(23),
    ETH_CPUID_EXT_FEAT_LAM                              = BIN_NUM_1(26),
    ETH_CPUID_EXT_FEAT_MSRLIST                          = BIN_NUM_1(27),
    ETH_CPUID_EXT_FEAT_INVD_DISABLE_POST_BIOS_DONE      = BIN_NUM_1(30),
    ETH_CPUID_EXT_FEAT_IA32_PPIN_CTL                    = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_PBNDKB                           = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_LEGACY_REDUCED_ISA               = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_SIPI_64                          = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_AVX_VNNI_INT8                    = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_AVX_NE_CONVERT                   = BIN_NUM_1(5),
    ETH_CPUID_EXT_FEAT_AMX_COMPLEX                      = BIN_NUM_1(8),
    ETH_CPUID_EXT_FEAT_AVX_VNNI_INT16                   = BIN_NUM_1(10),
    ETH_CPUID_EXT_FEAT_UTMR                             = BIN_NUM_1(13),
    ETH_CPUID_EXT_FEAT_PREFETCHI                        = BIN_NUM_1(14),
    ETH_CPUID_EXT_FEAT_USER_MSR                         = BIN_NUM_1(15),
    ETH_CPUID_EXT_FEAT_UIRET_UIF_FROM_RFLAGS            = BIN_NUM_1(17),
    ETH_CPUID_EXT_FEAT_CET_SSS                          = BIN_NUM_1(18),
    ETH_CPUID_EXT_FEAT_AVX10                            = BIN_NUM_1(19),
    ETH_CPUID_EXT_FEAT_APX_F                            = BIN_NUM_1(21),
    ETH_CPUID_EXT_FEAT_MWAIT                            = BIN_NUM_1(23),
    ETH_CPUID_EXT_FEAT_PSFD                             = BIN_NUM_1(0),
    ETH_CPUID_EXT_FEAT_IPRED_CTRL                       = BIN_NUM_1(1),
    ETH_CPUID_EXT_FEAT_RRSBA_CTRL                       = BIN_NUM_1(2),
    ETH_CPUID_EXT_FEAT_DDPD_U                           = BIN_NUM_1(3),
    ETH_CPUID_EXT_FEAT_BHI_CTRL                         = BIN_NUM_1(4),
    ETH_CPUID_EXT_FEAT_MCDT_NO                          = BIN_NUM_1(5)
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


#define DEF_BASIC_FEAT(n,index) const eth_cpuid_feat_ext_t  *n = e_cpuid_feat(index,0,0)
#define DEF_EXT_FEAT(n, index, page) const eth_cpuid_feat_ext_t *n = e_cpuid_feat(index, 1, page)

#endif
