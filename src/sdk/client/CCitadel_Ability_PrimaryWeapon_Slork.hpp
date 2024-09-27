#pragma once
#include "client/CCitadel_Ability_PrimaryWeapon.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf18
	// Has VTable
	class CCitadel_Ability_PrimaryWeapon_Slork : public client::CCitadel_Ability_PrimaryWeapon
	{
	private:
		[[maybe_unused]] uint8_t __pad0d48[0x198]; // 0xd48
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
		QAngle m_angAimAngles; // 0xee0		
	private:
		[[maybe_unused]] uint8_t __pad0eec[0x24]; // 0xeec
	public:
		bool m_bNeedAimAngleReset; // 0xf10		
	};
};
