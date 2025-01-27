#pragma once
#include "client/ParticleIndex_t.hpp"
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
	class CCitadel_Modifier_Backdoor_Protection : public server::CCitadelModifier
	{
	public:
		int32_t m_MaxHealth; // 0xc0		
		entity2::GameTime_t m_flLastAttackedTime; // 0xc4		
		client::ParticleIndex_t m_nActiveShieldEffect; // 0xc8		
	};
};
