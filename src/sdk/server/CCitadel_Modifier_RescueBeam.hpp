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
	// Size: 0x1a8
	// Has VTable
	class CCitadel_Modifier_RescueBeam : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
	public:
		float m_flHealthPerTick; // 0x1a0		
		client::ParticleIndex_t m_nBeamIndex; // 0x1a4		
	};
};
