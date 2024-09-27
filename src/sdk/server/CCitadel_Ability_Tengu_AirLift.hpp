#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd08
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bFlying"
	// MNetworkVarNames "bool m_bFlyingStarted"
	// MNetworkVarNames "bool m_bIsGrabbing"
	// MNetworkVarNames "bool m_bIsHoldingBomb"
	// MNetworkVarNames "float m_flCurrentSpeed"
	class CCitadel_Ability_Tengu_AirLift : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1c]; // 0xae8
	public:
		client::ParticleIndex_t m_nHoldBombEffect; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b08[0x1f8]; // 0xb08
	public:
		// MNetworkEnable
		bool m_bFlying; // 0xd00		
		// MNetworkEnable
		bool m_bFlyingStarted; // 0xd01		
		// MNetworkEnable
		bool m_bIsGrabbing; // 0xd02		
		// MNetworkEnable
		bool m_bIsHoldingBomb; // 0xd03		
		// MNetworkEnable
		float m_flCurrentSpeed; // 0xd04		
	};
};
