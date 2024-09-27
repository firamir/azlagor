#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
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
	// Size: 0xd18
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
	// MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
	// MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
	// MNetworkVarNames "bool m_bWantsSlide"
	// MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
	// MNetworkVarNames "bool m_bIsSliding"
	// MNetworkVarNames "float m_flSpeedAdjust"
	// MNetworkVarNames "GameTime_t m_flDuckPressedTime"
	// MNetworkVarNames "float m_flVelocityAtDuckPressedTime"
	// MNetworkVarNames "GameTime_t m_flSlideChangeTime"
	// MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
	// MNetworkVarNames "int m_nJumpsThisSlideSession"
	// MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
	// MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
	class CCitadel_Ability_Slide : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x58]; // 0xc70
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xcc8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlowGetupStartTime; // 0xce0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShouldTriggerSlowGetup; // 0xce4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlide; // 0xce5		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bAirborneWhenDuckPressed; // 0xce6		
		// MNetworkEnable
		bool m_bIsSliding; // 0xce7		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flSpeedAdjust; // 0xce8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDuckPressedTime; // 0xcec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVelocityAtDuckPressedTime; // 0xcf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlideChangeTime; // 0xcf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xcf8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nJumpsThisSlideSession; // 0xcfc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOnGroundStartTime; // 0xd00		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashSlideStartTime; // 0xd04		
		bool m_bStartedSlideViaProbeSlope; // 0xd08		
	private:
		[[maybe_unused]] uint8_t __pad0d09[0x3]; // 0xd09
	public:
		client::ParticleIndex_t m_nSlideEffectIndex; // 0xd0c		
	};
};
