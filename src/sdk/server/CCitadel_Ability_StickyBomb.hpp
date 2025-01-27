#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbd8
	// Has VTable
	// 
	// MNetworkVarNames "int m_nPlayersHit"
	class CCitadel_Ability_StickyBomb : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		// MNetworkEnable
		int32_t m_nPlayersHit; // 0xaf0		
	};
};
