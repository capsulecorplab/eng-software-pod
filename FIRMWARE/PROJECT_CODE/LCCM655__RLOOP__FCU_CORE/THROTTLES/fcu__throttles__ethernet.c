/**
 * @file		FCU__THROTTLE__ETHERNET.C
 * @brief		Eth interface to throttle system
 * @author		Lachlan Grogan
 * @copyright	rLoop Inc.
 */
/**
 * @addtogroup RLOOP
 * @{ */
/**
 * @addtogroup FCU
 * @ingroup RLOOP
 * @{ */
/**
 * @addtogroup FCU__THROTTLE__ETHERNET
 * @ingroup FCU
 * @{ */

#include "../fcu_core.h"

#if C_LOCALDEF__LCCM655__ENABLE_THIS_MODULE == 1U
#if C_LOCALDEF__LCCM655__ENABLE_THROTTLES == 1U
#if C_LOCALDEF__LCCM655__ENABLE_ETHERNET == 1U

extern struct _strFCU sFCU;

/***************************************************************************//**
 * @brief
 * Init the throttle eth layer
 * 
 * @st_funcMD5		9668C2BF99BB9AE8A102370F75A04DE1
 * @st_funcID		LCCM655R0.FILE.073.FUNC.001
 */
void vFCU_THROTTLE_ETH__Init(void)
{

}

/***************************************************************************//**
 * @brief
 * Send a throttle eth packet
 * 
 * @param[in]		ePacketType				Packet Type
 * @st_funcMD5		A4CFC93349CAA75AE865E8DA5B587D50
 * @st_funcID		LCCM655R0.FILE.073.FUNC.002
 */
void vFCU_THROTTLE_ETH__Transmit(E_NET__PACKET_T ePacketType)
{

	Lint16 s16Return;
	Luint8 * pu8Buffer;
	Luint8 u8BufferIndex;
	Luint16 u16Length;
	Luint8 u8Device;

	pu8Buffer = 0;

	//setup length based on packet.
	switch(ePacketType)
	{
		case NET_PKT__FCU_ASI__TX_ASI_DATA:
			u16Length = 24U;
			break;


		default:
			u16Length = 0U;
			break;

	}//switch(ePacketType)

	//pre-comit
	s16Return = s16SAFEUDP_TX__PreCommit(u16Length, (SAFE_UDP__PACKET_T)ePacketType, &pu8Buffer, &u8BufferIndex);
	if(s16Return == 0)
	{
		//handle the packet
		switch(ePacketType)
		{
			case NET_PKT__FCU_ASI__TX_ASI_DATA:


				//fault flags
				vNUMERICAL_CONVERT__Array_U32(pu8Buffer, 0U);
				pu8Buffer += 4U;

				break;

			default:

				break;

		}//switch(ePacketType)

		//send it
		vSAFEUDP_TX__Commit(u8BufferIndex, u16Length,
							C_LOCALDEF__LCCM528__ETHERNET_PORT_NUMBER,
							C_LOCALDEF__LCCM528__ETHERNET_PORT_NUMBER);

	}//if(s16Return == 0)
	else
	{
		//fault

	}//else if(s16Return == 0)

}



#endif //C_LOCALDEF__LCCM655__ENABLE_ETHERNET
#endif //C_LOCALDEF__LCCM655__ENABLE_THROTTLES
#endif //#if C_LOCALDEF__LCCM655__ENABLE_THIS_MODULE == 1U
//safetys
#ifndef C_LOCALDEF__LCCM655__ENABLE_THIS_MODULE
	#error
#endif
/** @} */
/** @} */
/** @} */
