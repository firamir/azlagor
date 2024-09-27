#pragma once
#include "client/CNetworkOriginQuantizedVector.hpp"
#include "client/EClimbRopeState_t.hpp"
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
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
	// MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
	// MNetworkVarNames "bool m_bRequestStopClimbing"
	// MNetworkVarNames "bool m_bRequestJumpToRoof"
	// MNetworkVarNames "GameTime_t m_flLastMoveTime"
	// MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
	// MNetworkVarNames "EClimbRopeState_t m_eClimbState"
	class CCitadel_Ability_Climb_Rope : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkOriginQuantizedVector m_vTop; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkOriginQuantizedVector m_vBottom; // 0xb18		
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x8]; // 0xb40
	public:
		entity2::GameTime_t m_flActivatePressTime; // 0xb48		
		entity2::GameTime_t m_flDisconnectTime; // 0xb4c		
		entity2::GameTime_t m_flClimbStartTime; // 0xb50		
		Vector m_vLastPos; // 0xb54		
	private:
		[[maybe_unused]] uint8_t __pad0b60[0x8]; // 0xb60
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bRequestStopClimbing; // 0xb68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bRequestJumpToRoof; // 0xb69		
	private:
		[[maybe_unused]] uint8_t __pad0b6a[0x2]; // 0xb6a
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastMoveTime; // 0xb6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flMoveDownStartTime; // 0xb70		
		// MNetworkEnable
		client::EClimbRopeState_t m_eClimbState; // 0xb74		
	};
};
