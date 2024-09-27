#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EViscousChargedGunState.hpp"
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
	// Size: 0xec0
	// Has VTable
	// 
	// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
	// MNetworkVarNames "float m_nClipConsumed"
	// MNetworkVarNames "bool m_bIsCharging"
	// MNetworkVarNames "bool m_bIsToggled"
	class CCitadel_Ability_ViscousWeapon_Alt : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		client::EViscousChargedGunState m_ChargeState; // 0xc70		
		// MNetworkEnable
		float m_nClipConsumed; // 0xc74		
		// MNetworkEnable
		bool m_bIsCharging; // 0xc78		
		// MNetworkEnable
		bool m_bIsToggled; // 0xc79		
	private:
		[[maybe_unused]] uint8_t __pad0c7a[0x2]; // 0xc7a
	public:
		client::ParticleIndex_t m_fxChargingParticle; // 0xc7c		
	private:
		[[maybe_unused]] uint8_t __pad0c80[0x8]; // 0xc80
	public:
		entity2::GameTime_t m_flLastBulletConsumedTime; // 0xc88		
	};
};
