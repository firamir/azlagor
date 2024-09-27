#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x178
	// Has VTable
	class CCitadel_Modifier_Thumper_2_Aura : public server::CCitadelModifierAura
	{
	public:
		Vector m_vecOrigin; // 0xe0		
		Vector m_vecWorldSpaceMins; // 0xec		
		Vector m_vecWorldSpaceMaxs; // 0xf8		
		float m_flBarbedWireAuraRadius; // 0x104		
	};
};
