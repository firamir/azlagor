#pragma once
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
	// Size: 0xeb0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bLeaping"
	// MNetworkVarNames "GameTime_t m_flLeapStartTime"
	class CCitadel_Ability_HornetLeap : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x2]; // 0xc70
	public:
		// MNetworkEnable
		bool m_bLeaping; // 0xc72		
	private:
		[[maybe_unused]] uint8_t __pad0c73[0x1]; // 0xc73
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flLeapStartTime; // 0xc74		
		client::ParticleIndex_t m_nFXIndex; // 0xc78		
	};
};
