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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Push : public server::CCitadelModifier
	{
	public:
		Vector m_vPushForce; // 0xc0		
		float m_flDecayRate; // 0xcc		
		entity2::GameTime_t m_TimeDestroy; // 0xd0		
	};
};
