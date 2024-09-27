#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseYamatoAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xba8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
	// MNetworkVarNames "GameTime_t m_flBuffEndTime"
	class CCitadel_Ability_InfinitySlash : public server::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0af0[0xa8]; // 0xaf0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flExplodeEndTime; // 0xb98		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flBuffEndTime; // 0xb9c		
		client::ParticleIndex_t m_nCastEffect; // 0xba0		
	};
};
