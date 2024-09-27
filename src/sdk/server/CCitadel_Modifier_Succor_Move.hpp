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
	// Size: 0xc8
	// Has VTable
	class CCitadel_Modifier_Succor_Move : public server::CCitadelModifier
	{
	public:
		bool m_bHasPulled; // 0xc0		
		bool m_bIsPulling; // 0xc1		
	};
};
