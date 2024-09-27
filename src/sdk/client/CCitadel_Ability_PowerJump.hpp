#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirRaiding"
	class CCitadel_Ability_PowerJump : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x4]; // 0xc70
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xc74		
		// MNetworkEnable
		bool m_bAirRaiding; // 0xc78		
	};
};
