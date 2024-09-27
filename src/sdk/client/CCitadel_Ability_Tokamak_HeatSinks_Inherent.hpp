#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdd0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flDissipationRate"
	// MNetworkVarNames "GameTime_t m_flDissipationTime"
	// MNetworkVarNames "GameTime_t m_flHeatTime"
	// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
	// MNetworkVarNames "bool m_bOverheating"
	class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public client::C_CitadelBaseAbility
	{
	public:
		int32_t m_nIntervalsElapsed; // 0xc70		
		entity2::GameTime_t m_NextShotTime; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flDissipationRate; // 0xc78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDissipationTime; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flHeatTime; // 0xc80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOverheatSoundTime; // 0xc84		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bOverheating; // 0xc88		
	};
};
