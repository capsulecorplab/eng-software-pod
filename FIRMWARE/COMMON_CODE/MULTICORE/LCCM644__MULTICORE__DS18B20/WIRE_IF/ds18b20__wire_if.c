/**
 * @file		DS18B20__WIRE_IF.C
 * @brief		Interface to various 1-wire calls from other modules
 * @author		Lachlan Grogan
 * @copyright	This file contains proprietary and confidential information of
 *				SIL3 Pty. Ltd. (ACN 123 529 064). This code may be distributed
 *				under a license from SIL3 Pty. Ltd., and may be used, copied
 *				and/or disclosed only pursuant to the terms of that license agreement.
 *				This copyright notice must be retained as part of this file at all times.
 * @copyright	This file is copyright SIL3 Pty. Ltd. 2003-2016, All Rights Reserved.
 * @st_fileID	LCCM644R0.FILE.007
 */
/**
 * @addtogroup MULTICORE
 * @{ */
/**
 * @addtogroup DS18B20
 * @ingroup MULTICORE
 * @{ */
/**
 * @addtogroup DS18B20__WIRE_IF
 * @ingroup DS18B20
 * @{ */

#include "../ds18b20.h"
#if C_LOCALDEF__LCCM644__ENABLE_THIS_MODULE == 1U

/***************************************************************************//**
 * @brief
 * Generate a reset
 * 
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		2CAA2D1D51A8A30B1F02BB384899DC15
 * @st_funcID		LCCM644R0.FILE.007.FUNC.001
 */
Lint16 s16DS18B20_1WIRE__Generate_Reset(Luint8 u8ChannelIndex)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_1WIRE__Generate_Reset(u8ChannelIndex);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_1WIRE__Generate_Reset(u8ChannelIndex);
	#else
		#error
	#endif

	return s16Return;
	
}

/***************************************************************************//**
 * @brief
 * Select a device
 * 
 * @param[in]		*pu8Addx				Device addx
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		06998B55144CC01375E2AC8A1EB245D4
 * @st_funcID		LCCM644R0.FILE.007.FUNC.002
 */
Lint16 s16DS18B20_1WIRE__SelectDevice(Luint8 u8ChannelIndex, Luint8 *pu8Addx)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_1WIRE__SelectDevice(u8ChannelIndex, pu8Addx);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_1WIRE__SelectDevice(u8ChannelIndex, pu8Addx);
	#else
		#error
	#endif
	return s16Return;
}

/***************************************************************************//**
 * @brief
 * Write a byte to the wire
 * 
 * @param[in]		u8Byte					The byte value to write
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		D1029FDB0323D178BEB48CED2EBBACD3
 * @st_funcID		LCCM644R0.FILE.007.FUNC.003
 */
Lint16 s16DS18B20_1WIRE__WriteByte(Luint8 u8ChannelIndex, Luint8 u8Byte)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_1WIRE__WriteByte(u8ChannelIndex, u8Byte, 0U);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_1WIRE__WriteByte(u8ChannelIndex, u8Byte);
	#else
		#error
	#endif
	return s16Return;

}

/***************************************************************************//**
 * @brief
 * Read a byte from the 1-wire
 * 
 * @param[out]		*pu8Byte				Returned byte if found
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		4003C7393E488C897BD8C3A529BA45FB
 * @st_funcID		LCCM644R0.FILE.007.FUNC.004
 */
Lint16 s16DS18B20_1WIRE__ReadByte(Luint8 u8ChannelIndex, Luint8 *pu8Byte)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_1WIRE__ReadByte(u8ChannelIndex, pu8Byte, 0U);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_1WIRE__ReadByte(u8ChannelIndex, pu8Byte);
	#else
		#error
	#endif
	return s16Return;

}

/***************************************************************************//**
 * @brief
 * Search for the first device on the bus
 * 
 * @param[out]		*pu8Addx				Returned address if found
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		82C98C519B4B0C31BD1FFADA610F054B
 * @st_funcID		LCCM644R0.FILE.007.FUNC.005
 */
Lint16 s16DS18B20_SEARCH__SearchFirstDevice(Luint8 u8ChannelIndex, Luint8 *pu8Addx)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_SEARCH__SearchFirstDevice(u8ChannelIndex, pu8Addx);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_SEARCH__SearchFirstDevice(u8ChannelIndex, pu8Addx);
	#else
		#error
	#endif
	return s16Return;
}

/***************************************************************************//**
 * @brief
 * Search for the next device on the bus
 * 
 * @param[out]		*pu8Addx				Returned address if found
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		7FFCCEE86EEB11DA92C5B64052D8EDCE
 * @st_funcID		LCCM644R0.FILE.007.FUNC.006
 */
Lint16 s16DS18B20_SEARCH__SearchNextDevice(Luint8 u8ChannelIndex, Luint8 *pu8Addx)
{
	Lint16 s16Return;
	
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_SEARCH__SearchNextDevice(u8ChannelIndex, pu8Addx);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		s16Return = s16WIRE_SEARCH__SearchNextDevice(u8ChannelIndex, pu8Addx);
	#else
		#error
	#endif
	return s16Return;
}


/***************************************************************************//**
 * @brief
 * Implement a 1-Wire skip function.
 * 
 * @param[in]		u8ChannelIndex			Index of 1-wire interface
 * @st_funcMD5		FD552EC3A61EA374A1CA2E1039247C7E
 * @st_funcID		LCCM644R0.FILE.007.FUNC.007
 */
Lint16 s16DS18B20_1WIRE__Skip(Luint8 u8ChannelIndex)
{
	Lint16 s16Return;
	#if C_LOCALDEF__LCCM644__CONNECT_LCCM641 == 1U
		s16Return = s16DS2482S_1WIRE__Skip(u8ChannelIndex);
	#elif C_LOCALDEF__LCCM644__CONNECT_LCCM236 == 1U
		#error
	#else
		#error
	#endif
	return s16Return;
}

#endif //#if C_LOCALDEF__LCCM644__ENABLE_THIS_MODULE == 1U
//safetys
#ifndef C_LOCALDEF__LCCM644__ENABLE_THIS_MODULE
	#error
#endif
/** @} */
/** @} */
/** @} */

