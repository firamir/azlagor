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
	// Size: 0xc48
	// Has VTable
	// 
	// MNetworkVarNames "float m_flDissipationRate"
	// MNetworkVarNames "GameTime_t m_flDissipationTime"
	// MNetworkVarNames "GameTime_t m_flHeatTime"
	// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
	// MNetworkVarNames "bool m_bOverheating"
	class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public server::CCitadelBaseAbility
	{
	public:
		int32_t m_nIntervalsElapsed; // 0xae8		
		entity2::GameTime_t m_NextShotTime; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flDissipationRate; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDissipationTime; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flHeatTime; // 0xaf8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOverheatSoundTime; // 0xafc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bOverheating; // 0xb00		
	};
};
