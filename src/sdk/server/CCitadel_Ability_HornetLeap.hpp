#pragma once
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
	// Size: 0xd30
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bLeaping"
	// MNetworkVarNames "GameTime_t m_flLeapStartTime"
	class CCitadel_Ability_HornetLeap : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x2]; // 0xae8
	public:
		// MNetworkEnable
		bool m_bLeaping; // 0xaea		
	private:
		[[maybe_unused]] uint8_t __pad0aeb[0x1]; // 0xaeb
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flLeapStartTime; // 0xaec		
		client::ParticleIndex_t m_nFXIndex; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af4[0x234]; // 0xaf4
	public:
		client::ParticleIndex_t m_TrailFX; // 0xd28		
	};
};
