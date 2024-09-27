#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Modifier_Burning.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1a8
	// Has VTable
	class CCitadel_Modifier_Afterburn_DOT : public server::CCitadel_Modifier_Burning
	{
	public:
		bool m_bCheckForExplosion; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		entity2::GameTime_t m_flLastBurnTime; // 0xc4		
	};
};
