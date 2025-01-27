#pragma once
#include "client/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1170
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
	// MNetworkVarNames "GameTime_t m_flStartFiringTime"
	// MNetworkVarNames "bool m_bFiring"
	class CCitadel_Ability_PrimaryWeapon_Bebop : public client::CCitadel_Ability_PrimaryWeapon_BeamWeapon
	{
	private:
		[[maybe_unused]] uint8_t __pad0d48[0x2a8]; // 0xd48
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStartWindUpTime; // 0xff0		
		// MNetworkEnable
		entity2::GameTime_t m_flStartFiringTime; // 0xff4		
		// MNetworkEnable
		bool m_bFiring; // 0xff8		
	};
};
