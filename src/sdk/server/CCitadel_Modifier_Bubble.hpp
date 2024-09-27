#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadel_Modifier_Silenced.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1f0
	// Has VTable
	class CCitadel_Modifier_Bubble : public server::CCitadel_Modifier_Silenced
	{
	public:
		float m_flDampingFactor; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x11c]; // 0xcc
	public:
		client::ParticleIndex_t m_ParticleIndex; // 0x1e8		
	};
};
