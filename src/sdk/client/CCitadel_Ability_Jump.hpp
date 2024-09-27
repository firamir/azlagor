#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ECitadelAbilityOrders.hpp"
#include "client/EJumpType_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe00
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
	class CCitadel_Ability_Jump : public client::C_CitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc70		
		entity2::GameTime_t m_flLastOnGroundTime; // 0xc74		
		entity2::GameTime_t m_flPhaseStartTime; // 0xc78		
		entity2::GameTime_t m_flJumpTime; // 0xc7c		
		client::EJumpType_t m_LastJumpType; // 0xc80		
		bool m_bShouldCreateAirJumpEffects; // 0xc81		
	private:
		[[maybe_unused]] uint8_t __pad0c82[0x2]; // 0xc82
	public:
		entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc84		
		client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc88		
		Vector m_vWallJumpNormalUsed; // 0xc8c		
	private:
		[[maybe_unused]] uint8_t __pad0c98[0x118]; // 0xc98
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xdb0		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdc8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bJumped; // 0xde0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanDashJump; // 0xde1		
	private:
		[[maybe_unused]] uint8_t __pad0de2[0x2]; // 0xde2
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nDesiredAirJumpCount; // 0xde4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nExecutedAirJumpCount; // 0xde8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInSlideJump; // 0xdec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveAirJumps; // 0xded		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nConsecutiveWallJumps; // 0xdee		
	private:
		[[maybe_unused]] uint8_t __pad0def[0x1]; // 0xdef
	public:
		Vector m_vLastWallCollidedWithNormal; // 0xdf0		
	};
};
