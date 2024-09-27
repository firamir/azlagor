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
	// Size: 0xda8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastStartTime"
	class CCitadel_Ability_Mirage_FireBeetles : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vLaunchPosition; // 0xc70		
		QAngle m_qLaunchAngle; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flCastStartTime; // 0xc88		
	};
};
