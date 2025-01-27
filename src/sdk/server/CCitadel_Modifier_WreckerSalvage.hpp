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
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_WreckerSalvage : public server::CCitadelModifier
	{
	public:
		float m_flDPS; // 0xc0		
		Vector m_vLiftTarget; // 0xc4		
	};
};
