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
//     TYPEDEFS CPUID
//
//////////////////////////////////////

typedef struct  eth_cpuid_reg_t     eth_cpuid_reg_t;

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
//       CPUID FLAG
//
//////////////////////////////////////

typedef enum eth_cpuid_eax_flag_t
{
    ETH_CPUID_FUNC_PARAM_MANUFACTURER_ID        = 0x0,
    ETH_CPUID_PROCESSOR_INFO_FEATURE            = 0x1,
    ETH_CPUID_CACHE_TLB_DESCRIPTOR_INFO         = 0x2,
    ETH_CPUID_PROCESSOR_SERIAL_NUMBER           = 0x3,
    ETH_CPUID_CACHE_HIERARCHY_TOPOLOGY          = 0x4,
    ETH_CPUID_CACHE_HIERARCHY_TOPOLOGY_         = 0x8000001d,
    ETH_CPUID_INTEL_THREAD_CORE_CACHE_TOPOLOGY  = 0x4,
    ETH_CPUID_INTEL_THREAD_CORE_CACHE_TOPOLOGY_ = 0xb,
    ETH_CPUID_MONITOR_FEATURES                  = 0x5,
    ETH_CPUID_THERMAL_POWER_MANAGEMENT          = 0x6,
    ETH_CPUID_EXTENDED_FEATURES_EAX             = 0x7,
    ETH_CPUID_XSAVE_FEATURES_EAX                = 0xd,
    ETH_CPUID_SGX_CAPABILITIES_EAX              = 0x12,
    ETH_CPUID_PROCESSOR_TRACE_EAX               = 0x14,
    ETH_CPUID_TSC_BUS                           = 0x15,
    ETH_CPUID_CORE_CRYSTAL_CLOCK_FREQUENCIES    = 0x16,
    ETH_CPUID_SOC_VENDOR_ATTRIBUTE_ENUMERATION  = 0x17,
    ETH_CPUID_INTEL_KEY_LOCKER_FEATURES         = 0x19,
    ETH_CPUID_RESERVED_FOR_TDX_ENUMERATION      = 0x21,
    ETH_CPUID_AVX10_FEATURES                    = 0x24,
    ETH_CPUID_DISCRETE_AVX10_FEATURES_EAX       = 0x24,
    ETH_CPUID_HYPERVISOR_FIRST_FLAG             = 0x40000000,
    ETH_CPUID_GET_HIGHEST_EXTENDED_FUNCTION     = 0x80000000,
    ETH_CPUID_EXTENDED_PROCESSOR_INFO           = 0x80000001,
    ETH_CPUID_PROCESSOR_BRAND_STRING_1          = 0x80000002,
    ETH_CPUID_PROCESSOR_BRAND_STRING_2          = 0x80000003,
    ETH_CPUID_PROCESSOR_BRAND_STRING_3          = 0x80000004,
    ETH_CPUID_L1_CACHE_TLB_IDENTIFIER           = 0x80000005,
    ETH_CPUID_L1_CACHE_TLB_INFORMATION          = 0x80000002,
    ETH_CPUID_EXTENDED_L2_CACHE_FEATURES        = 0x80000006,
    ETH_CPUID_PROCESSOR_POWER_INFO_RAS_CAP      = 0x80000007,
    ETH_CPUID_PROCESSOR_FEEDBACK_INFO           = 0x80000007,
    ETH_CPUID_VIRTUAL_PHYSICAL_ADDRESS_SIZE     = 0x80000008,
    ETH_CPUID_SECURE_VIRTUAL_MACHINE_FEATURES   = 0x8000000A,
    ETH_CPUID_ENCRYPTED_MEMORY_CAPABILITIES     = 0x8000001F,
    ETH_CPUID_EXTENDED_FEATURE_ID_2             = 0x80000021,
    ETH_CPUID_AMD_EASTER_EGG                    = 0x8FFFFFFF,
    ETH_CPUID_GET_HIGHEST_CENTAUR_EXT_FEAT      = 0xC0000000,
    ETH_CPUID_CENTAUR_FEAT_INFO                 = 0xC0000001,
} eth_cpuid_eax_flag_t;


#endif
