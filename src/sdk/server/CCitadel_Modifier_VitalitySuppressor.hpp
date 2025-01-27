#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	class CCitadel_Modifier_VitalitySuppressor : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flLastTickTime; // 0xc0		
	};
};
