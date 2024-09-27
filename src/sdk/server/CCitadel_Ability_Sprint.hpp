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
	// Size: 0xb00
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bSprinting"
	// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
	// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
	// MNetworkVarNames "GameTime_t m_flSprintStartTime"
	class CCitadel_Ability_Sprint : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nSprintParticle; // 0xae8		
		// MNetworkEnable
		// MNetworkChangeCallback "OnSprintingChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSprinting; // 0xaec		
	private:
		[[maybe_unused]] uint8_t __pad0aed[0x3]; // 0xaed
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flInCombatStartTime; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flInCombatEndTime; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSprintStartTime; // 0xaf8		
		bool m_bInCombat; // 0xafc		
	};
};
