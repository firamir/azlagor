#pragma once
#include "server/CCitadel_Modifier_Invis.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2d8
	// Has VTable
	class CCitadel_Modifier_Slork_Invis : public server::CCitadel_Modifier_Invis
	{
	private:
		[[maybe_unused]] uint8_t __pad0260[0x70]; // 0x260
	public:
		bool m_bHasGoneFullyInvis; // 0x2d0		
	};
};
