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
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Core_PushTarget : public server::CCitadelModifier
	{
	public:
		float m_flImpulseAmount; // 0xc0		
		entity2::GameTime_t m_flTossTime; // 0xc4		
		bool m_bShouldToss; // 0xc8		
	};
};
