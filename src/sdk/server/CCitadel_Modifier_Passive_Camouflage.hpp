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
	class CCitadel_Modifier_Passive_Camouflage : public server::CCitadelModifier
	{
	public:
		float m_flRate; // 0xc0		
		Vector m_vLastPosition; // 0xc4		
	};
};
