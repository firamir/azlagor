#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdd8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
	class CCitadel_Ability_HealthSwap : public client::C_CitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nFXIndex; // 0xc70		
		float m_flHealthToCaster; // 0xc74		
		float m_flTargetHealthLost; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c7c[0x11c]; // 0xc7c
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flPostCastHoldEndTime; // 0xd98		
	};
};
