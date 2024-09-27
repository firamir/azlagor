#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc60
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	class CCitadel_Ability_FireBomb : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x158]; // 0xae8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		server::CCitadelAutoScaledTime m_flDetonateTime; // 0xc40		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flStartTime; // 0xc58		
	};
};
