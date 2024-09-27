#pragma once
#include "client/CNetworkOriginQuantizedVector.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EClimbRopeState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd08
	// Has VTable
	// 
	// MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
	// MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
	// MNetworkVarNames "bool m_bRequestStopClimbing"
	// MNetworkVarNames "bool m_bRequestJumpToRoof"
	// MNetworkVarNames "GameTime_t m_flLastMoveTime"
	// MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
	// MNetworkVarNames "EClimbRopeState_t m_eClimbState"
	class CCitadel_Ability_Climb_Rope : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkOriginQuantizedVector m_vTop; // 0xc70		
	private:
		[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkOriginQuantizedVector m_vBottom; // 0xca0		
	private:
		[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
	public:
		entity2::GameTime_t m_flActivatePressTime; // 0xcd0		
		entity2::GameTime_t m_flDisconnectTime; // 0xcd4		
		entity2::GameTime_t m_flClimbStartTime; // 0xcd8		
		Vector m_vLastPos; // 0xcdc		
	private:
		[[maybe_unused]] uint8_t __pad0ce8[0x8]; // 0xce8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bRequestStopClimbing; // 0xcf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bRequestJumpToRoof; // 0xcf1		
	private:
		[[maybe_unused]] uint8_t __pad0cf2[0x2]; // 0xcf2
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastMoveTime; // 0xcf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flMoveDownStartTime; // 0xcf8		
		// MNetworkEnable
		client::EClimbRopeState_t m_eClimbState; // 0xcfc		
	private:
		[[maybe_unused]] uint8_t __pad0d00[0x4]; // 0xd00
	public:
		int32_t m_ClimbCount; // 0xd04		
	};
};
