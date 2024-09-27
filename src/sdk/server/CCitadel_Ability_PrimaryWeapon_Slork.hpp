#pragma once
#include "server/CCitadel_Ability_PrimaryWeapon.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd50
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angAimAngles"
	class CCitadel_Ability_PrimaryWeapon_Slork : public server::CCitadel_Ability_PrimaryWeapon
	{
	private:
		[[maybe_unused]] uint8_t __pad0b98[0x198]; // 0xb98
	public:
		CUtlString m_strSprayerName; // 0xd30		
		CUtlString m_strPoisonName; // 0xd38		
		// MNetworkEnable
		QAngle m_angAimAngles; // 0xd40		
		bool m_bTracingConeAttack; // 0xd4c		
	};
};
