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
	// Size: 0x158
	// Has VTable
	class CModifier_Mirage_SandPhantom : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_particleStart; // 0xc0		
		client::ParticleIndex_t m_particleEnd; // 0xc4		
		client::ParticleIndex_t m_particleTrail; // 0xc8		
		Vector m_vecStartPosition; // 0xcc		
		float m_flStartDelay; // 0xd8		
		Vector m_vecApplyOffset; // 0xdc		
	};
};
