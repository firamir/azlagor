#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x148
	// Has VTable
	class CCitadel_Modifier_Uppercutted : public server::CCitadelModifier
	{
	public:
		Vector m_vecFromBebop; // 0xc0		
		float m_flDamage; // 0xcc		
		bool m_bExplodeOnLand; // 0xd0		
	};
};
