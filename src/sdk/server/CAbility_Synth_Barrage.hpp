#pragma once
#include "client/ParticleIndex_t.hpp"
#include "client/ShotID_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd68
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flNextShootTime"
	class CAbility_Synth_Barrage : public server::CCitadelBaseAbility
	{
	public:
		client::ShotID_t m_tLastShotID; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0aec[0x26c]; // 0xaec
	public:
		int32_t m_nProjectilesScheduled; // 0xd58		
		client::ParticleIndex_t m_ChannelParticle; // 0xd5c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextShootTime; // 0xd60		
	};
};
