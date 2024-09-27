#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ELeapState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe30
	// Has VTable
	// 
	// MNetworkVarNames "float m_flBoostYaw"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	// MNetworkVarNames "ELeapState_t m_eLeapState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
	class CCitadel_Ability_Bull_Leap : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		float m_flBoostYaw; // 0xc70		
		// MNetworkEnable
		Vector m_vecCrashPosition; // 0xc74		
		// MNetworkEnable
		Vector m_vecCrashDirection; // 0xc80		
		// MNetworkEnable
		// MNetworkChangeCallback "OnLeapStateChanged"
		client::ELeapState_t m_eLeapState; // 0xc8c		
	private:
		[[maybe_unused]] uint8_t __pad0c8d[0x3]; // 0xc8d
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xc90		
	private:
		[[maybe_unused]] uint8_t __pad0c94[0x4]; // 0xc94
	public:
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flNextStateTime; // 0xc98		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flBoostEndTime; // 0xcb0		
	private:
		[[maybe_unused]] uint8_t __pad0cc8[0x158]; // 0xcc8
	public:
		Vector m_vecLastVel; // 0xe20		
	};
};
