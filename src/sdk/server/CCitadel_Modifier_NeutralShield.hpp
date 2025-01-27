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
	// Size: 0xc8
	// Has VTable
	class CCitadel_Modifier_NeutralShield : public server::CCitadelModifier
	{
	public:
		float m_flShieldActivateDelay; // 0xc0		
		entity2::GameTime_t m_timeEnemyDisappeared; // 0xc4		
	};
};
