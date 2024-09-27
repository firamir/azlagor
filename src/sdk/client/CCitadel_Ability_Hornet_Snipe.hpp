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
	// Size: 0xf00
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flScopeStartTime"
	class CCitadel_Ability_Hornet_Snipe : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x244]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flScopeStartTime; // 0xeb4		
	};
};
