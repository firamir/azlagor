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
	// MNetworkVarNames "bool m_bAirCast"
	class CCitadel_Ability_Tokamak_CrimsonCannon : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x20]; // 0xae8
	public:
		CUtlVector<client::ParticleIndex_t> m_TargetPreviews; // 0xb08		
		// MNetworkEnable
		bool m_bAirCast; // 0xb20		
	};
};
