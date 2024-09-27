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
	// Size: 0x160
	// Has VTable
	class CCitadel_Modifier_Item_AOESilence : public server::CCitadelModifierAura
	{
	public:
		float m_flStartRadius; // 0xe0		
		float m_flEndRadius; // 0xe4		
		float m_flSpreadDuration; // 0xe8		
	};
};
