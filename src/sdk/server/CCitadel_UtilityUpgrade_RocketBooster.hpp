#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_UtilityUpgrade_RocketBoots.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd60
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastTime"
	// MNetworkVarNames "bool m_bCrashingDown"
	// MNetworkVarNames "bool m_bImpulseApplied"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	class CCitadel_UtilityUpgrade_RocketBooster : public server::CCitadel_UtilityUpgrade_RocketBoots
	{
	private:
		[[maybe_unused]] uint8_t __pad0b78[0x4]; // 0xb78
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xb7c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCanSlamDownChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flCastTime; // 0xb80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCrashingDown; // 0xb84		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bImpulseApplied; // 0xb85		
	private:
		[[maybe_unused]] uint8_t __pad0b86[0x2]; // 0xb86
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashPosition; // 0xb88		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashDirection; // 0xb94		
	};
};
