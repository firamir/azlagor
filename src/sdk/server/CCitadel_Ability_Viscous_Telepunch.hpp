#pragma once
#include "client/ETelepunchState_t.hpp"
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
	// Size: 0xd10
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecTeleportPosition"
	// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
	// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	class CCitadel_Ability_Viscous_Telepunch : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1f8]; // 0xae8
	public:
		// MNetworkEnable
		Vector m_vecTeleportPosition; // 0xce0		
		// MNetworkEnable
		Vector m_vecTeleportPositionNormal; // 0xcec		
		// MNetworkEnable
		client::ETelepunchState_t m_eTelepunchState; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0cf9[0x3]; // 0xcf9
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flNextStateTime; // 0xcfc		
	};
};
