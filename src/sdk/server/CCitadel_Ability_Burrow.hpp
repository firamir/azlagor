#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xbd8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bInGround"
	// MNetworkVarNames "GameTime_t m_SpinEndTime"
	class CCitadel_Ability_Burrow : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0xe0]; // 0xae8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInGround; // 0xbc8		
	private:
		[[maybe_unused]] uint8_t __pad0bc9[0x3]; // 0xbc9
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_SpinEndTime; // 0xbcc		
		client::ParticleIndex_t m_nBurrowEffect; // 0xbd0		
	};
};
