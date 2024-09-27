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
	// Size: 0xc20
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastStartTime"
	class CCitadel_Ability_Mirage_FireBeetles : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vLaunchPosition; // 0xae8		
		QAngle m_qLaunchAngle; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flCastStartTime; // 0xb00		
	};
};
