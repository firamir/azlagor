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
	// Size: 0xee8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flNextShootTime"
	class CAbility_Synth_Barrage : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x268]; // 0xc70
	public:
		int32_t m_nProjectilesScheduled; // 0xed8		
		client::ParticleIndex_t m_ChannelParticle; // 0xedc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextShootTime; // 0xee0		
	};
};
