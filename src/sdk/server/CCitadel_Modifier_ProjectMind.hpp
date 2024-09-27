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
	// Size: 0x1a0
	// Has VTable
	class CCitadel_Modifier_ProjectMind : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_particleStart; // 0xc0		
		client::ParticleIndex_t m_particleEnd; // 0xc4		
		client::ParticleIndex_t m_particleTrail; // 0xc8		
		Vector m_vecEndLocation; // 0xcc		
		Vector m_vecStartPosition; // 0xd8		
		float m_flStartDelay; // 0xe4		
		Vector m_vecApplyOffset; // 0xe8		
	};
};
