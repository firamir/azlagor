#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xb90
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
	class CCitadel_Ability_Slide : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x58]; // 0xae8
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xb40		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlowGetupStartTime; // 0xb58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShouldTriggerSlowGetup; // 0xb5c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bWantsSlide; // 0xb5d		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bAirborneWhenDuckPressed; // 0xb5e		
		// MNetworkEnable
		bool m_bIsSliding; // 0xb5f		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flSpeedAdjust; // 0xb60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDuckPressedTime; // 0xb64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVelocityAtDuckPressedTime; // 0xb68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlideChangeTime; // 0xb6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xb70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nJumpsThisSlideSession; // 0xb74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flOnGroundStartTime; // 0xb78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashSlideStartTime; // 0xb7c		
		bool m_bStartedSlideViaProbeSlope; // 0xb80		
	private:
		[[maybe_unused]] uint8_t __pad0b81[0x3]; // 0xb81
	public:
		client::ParticleIndex_t m_nSlideEffectIndex; // 0xb84		
	};
};
