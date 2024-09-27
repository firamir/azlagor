#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc88
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bSprinting"
	// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
	// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
	// MNetworkVarNames "GameTime_t m_flSprintStartTime"
	class CCitadel_Ability_Sprint : public client::C_CitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nSprintParticle; // 0xc70		
		// MNetworkEnable
		// MNetworkChangeCallback "OnSprintingChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSprinting; // 0xc74		
	private:
		[[maybe_unused]] uint8_t __pad0c75[0x3]; // 0xc75
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flInCombatStartTime; // 0xc78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flInCombatEndTime; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSprintStartTime; // 0xc80		
		bool m_bInCombat; // 0xc84		
	};
};
