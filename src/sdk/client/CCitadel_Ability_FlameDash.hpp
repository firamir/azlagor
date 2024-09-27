#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe20
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
	// MNetworkVarNames "bool m_bIsSpeedBursting"
	class CCitadel_Ability_FlameDash : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flDashEndTime; // 0xc70		
		// MNetworkEnable
		bool m_bIsSpeedBursting; // 0xc88		
	};
};
