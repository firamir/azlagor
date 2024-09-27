#pragma once
#include "client/ELeapState_t.hpp"
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
	// Size: 0xca8
	// Has VTable
	// 
	// MNetworkVarNames "float m_flBoostYaw"
	// MNetworkVarNames "Vector m_vecCrashPosition"
	// MNetworkVarNames "Vector m_vecCrashDirection"
	// MNetworkVarNames "ELeapState_t m_eLeapState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
	class CCitadel_Ability_Bull_Leap : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		float m_flBoostYaw; // 0xae8		
		// MNetworkEnable
		Vector m_vecCrashPosition; // 0xaec		
		// MNetworkEnable
		Vector m_vecCrashDirection; // 0xaf8		
		// MNetworkEnable
		// MNetworkChangeCallback "OnLeapStateChanged"
		client::ELeapState_t m_eLeapState; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b05[0x3]; // 0xb05
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xb08		
	private:
		[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
	public:
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flNextStateTime; // 0xb10		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flBoostEndTime; // 0xb28		
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x158]; // 0xb40
	public:
		Vector m_vecLastVel; // 0xc98		
	};
};
