#pragma once
#include "client/CCitadelBaseYamatoAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
	// MNetworkVarNames "GameTime_t m_flBuffEndTime"
	class CCitadel_Ability_InfinitySlash : public client::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c78[0xa8]; // 0xc78
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flExplodeEndTime; // 0xd20		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flBuffEndTime; // 0xd24		
	};
};
