/*  @file manufacturer_id.c
 *  @brief That file contain the manufacturer_id function code
 *  So this is a simple function which return manufacturer ID
 *  String from CPUID instruction on x86 Architecture
 *  @note no note
 *  @bugs no bugs known
 *  @date 23/06/2024 16:37:16
 *  @author Unam3dd (sam0verfl0w)
 */

///////////////////////////////////////
//
//        INCLUDES
//
//////////////////////////////////////

#include "eth-cpuid-flag.h"
#include "eth-cpuid.h"
#include "eth-types.h"

///////////////////////////////////////
//
//         MANUFACTURER ID
//
//////////////////////////////////////

const char *eth_cpuid_get_cpu_manufacturer_id(void)
{
    static eth_cpuid_reg_t  r = { 0, 0, 0, 0 };
    static u32_t            d[0x4] = { 0, 0, 0, 0 };

    if (d[0] && d[1] && d[2]) return ((const char *)d);

    eth_cpuid(ETH_CPUID_HIGHEST_FEAT, 0, &r);

    d[0] = r.ebx; d[1] = r.edx; d[2] = r.ecx;

    return ((const char *)d);
}
