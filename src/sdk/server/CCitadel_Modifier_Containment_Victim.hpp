#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x120
	// Has VTable
	class CCitadel_Modifier_Containment_Victim : public server::CCitadelModifier
	{
	public:
		float m_flGoalHeight; // 0xc0		
		float m_flFallRate; // 0xc4		
		client::ParticleIndex_t m_nFXIndex; // 0xc8		
		client::ParticleIndex_t m_nFXIndexVictim; // 0xcc		
		client::ParticleIndex_t m_nChainFxIndex; // 0xd0		
		float m_flTetherRadius; // 0xd4		
		Vector m_vecOrigin; // 0xd8		
	};
};
