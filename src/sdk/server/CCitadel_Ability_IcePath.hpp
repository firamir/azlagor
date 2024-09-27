#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIcePathing"
	// MNetworkVarNames "QAngle m_qLastAngles"
	// MNetworkVarNames "Vector m_vLastVelocity"
	// MNetworkVarNames "bool m_bFirstMovementTick"
	class CCitadel_Ability_IcePath : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x70]; // 0xae8
	public:
		Vector m_vInitialPosition; // 0xb58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bIcePathing; // 0xb64		
	private:
		[[maybe_unused]] uint8_t __pad0b65[0x3]; // 0xb65
	public:
		// MNetworkEnable
		QAngle m_qLastAngles; // 0xb68		
		// MNetworkEnable
		Vector m_vLastVelocity; // 0xb74		
		// MNetworkEnable
		bool m_bFirstMovementTick; // 0xb80		
	};
};
