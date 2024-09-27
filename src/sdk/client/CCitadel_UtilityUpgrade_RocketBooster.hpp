#pragma once
#include "client/CCitadel_UtilityUpgrade_RocketBoots.hpp"
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
	// Size: 0xee0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flCastTime"
	// MNetworkVarNames "bool m_bCrashingDown"
	// MNetworkVarNames "bool m_bImpulseApplied"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	class CCitadel_UtilityUpgrade_RocketBooster : public client::CCitadel_UtilityUpgrade_RocketBoots
	{
	private:
		[[maybe_unused]] uint8_t __pad0cf8[0x4]; // 0xcf8
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xcfc		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCanSlamDownChanged"
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flCastTime; // 0xd00		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCrashingDown; // 0xd04		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bImpulseApplied; // 0xd05		
	private:
		[[maybe_unused]] uint8_t __pad0d06[0x2]; // 0xd06
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashPosition; // 0xd08		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCrashDirection; // 0xd14		
	};
};
