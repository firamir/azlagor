#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcc8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bWantsSlow"
	// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
	// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
	// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
	// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
	class CCitadel_Ability_Chrono_KineticCarbine : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlow; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flLatchedTimeScaleFrac; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSpeedBoostEndTime; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xaf8		
	private:
		[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
	public:
		float m_flStoredPowerPct; // 0xb00		
	};
};
