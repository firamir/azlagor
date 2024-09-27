#pragma once
#include "client/EViscousChargedGunState.hpp"
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
	// Size: 0xd38
	// Has VTable
	// 
	// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
	// MNetworkVarNames "float m_nClipConsumed"
	// MNetworkVarNames "bool m_bIsCharging"
	// MNetworkVarNames "bool m_bIsToggled"
	class CCitadel_Ability_ViscousWeapon_Alt : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		client::EViscousChargedGunState m_ChargeState; // 0xae8		
		// MNetworkEnable
		float m_nClipConsumed; // 0xaec		
		// MNetworkEnable
		bool m_bIsCharging; // 0xaf0		
		// MNetworkEnable
		bool m_bIsToggled; // 0xaf1		
	private:
		[[maybe_unused]] uint8_t __pad0af2[0x2]; // 0xaf2
	public:
		client::ParticleIndex_t m_fxChargingParticle; // 0xaf4		
	private:
		[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
	public:
		entity2::GameTime_t m_flLastBulletConsumedTime; // 0xb00		
	};
};
