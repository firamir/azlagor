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
	class CCitadel_Modifier_IntensifyingClip : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		entity2::GameTime_t m_LastThinkTime; // 0x130		
		float m_flSpinUpTime; // 0x134		
	};
};
