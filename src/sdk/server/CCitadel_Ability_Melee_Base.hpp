#pragma once
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
	// Size: 0xb70
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "bool m_bUsingThisMelee"
	// MNetworkVarNames "bool m_bUsingMeleeTagActive"
	// MNetworkVarNames "bool m_bHitWithThisAttack"
	// MNetworkVarNames "GameTime_t m_flLastActivateTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
	// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
	class CCitadel_Ability_Melee_Base : public server::CCitadelBaseAbility
	{
	public:
		int32_t m_nHitNumber; // 0xae8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingThisMelee; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingMeleeTagActive; // 0xaed		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bHitWithThisAttack; // 0xaee		
	private:
		[[maybe_unused]] uint8_t __pad0aef[0x1]; // 0xaef
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastActivateTime; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextAttackAllowedTime; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAttackTriggeredTime; // 0xaf8		
	};
};
