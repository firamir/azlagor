#pragma once
#include "client/ELashGrappleState.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseLockonAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xda0
	// Has VTable
	// 
	// MNetworkVarNames "ELashGrappleState m_EGrappleState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flBoostEndTime"
	class CCitadel_Ability_Lash_Ultimate : public server::CCitadelBaseLockonAbility
	{
	public:
		// MNetworkEnable
		client::ELashGrappleState m_EGrappleState; // 0xc58		
	private:
		[[maybe_unused]] uint8_t __pad0c59[0x3]; // 0xc59
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xc5c		
		// MNetworkEnable
		entity2::GameTime_t m_flNextStateTime; // 0xc60		
		// MNetworkEnable
		entity2::GameTime_t m_flBoostEndTime; // 0xc64		
	};
};
