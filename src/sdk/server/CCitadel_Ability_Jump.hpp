#pragma once
#include "client/ECitadelAbilityOrders.hpp"
#include "client/EJumpType_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc78
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
	// MNetworkVarNames "bool m_bJumped"
	// MNetworkVarNames "bool m_bCanDashJump"
	// MNetworkVarNames "int m_nDesiredAirJumpCount"
	// MNetworkVarNames "int m_nExecutedAirJumpCount"
	// MNetworkVarNames "bool m_bInSlideJump"
	// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
	// MNetworkVarNames "int8 m_nConsecutiveWallJumps"
	class CCitadel_Ability_Jump : public server::CCitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastTimeOnZipLine; // 0xae8		
		entity2::GameTime_t m_flLastOnGroundTime; // 0xaec		
		entity2::GameTime_t m_flPhaseStartTime; // 0xaf0		
		entity2::GameTime_t m_flJumpTime; // 0xaf4		
		client::EJumpType_t m_LastJumpType; // 0xaf8		
		bool m_bShouldCreateAirJumpEffects; // 0xaf9		
	private:
		[[maybe_unused]] uint8_t __pad0afa[0x2]; // 0xafa
	public:
		entity2::GameTime_t m_flDoubleJumpFailTime; // 0xafc		
		client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb00		
		Vector m_vWallJumpNormalUsed; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b10[0x118]; // 0xb10
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc28		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc40		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bJumped; // 0xc58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanDashJump; // 0xc59		
	private:
		[[maybe_unused]] uint8_t __pad0c5a[0x2]; // 0xc5a
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nDesiredAirJumpCount; // 0xc5c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nExecutedAirJumpCount; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInSlideJump; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirJumps; // 0xc65		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveWallJumps; // 0xc66		
	private:
		[[maybe_unused]] uint8_t __pad0c67[0x1]; // 0xc67
	public:
		Vector m_vLastWallCollidedWithNormal; // 0xc68		
	};
};
