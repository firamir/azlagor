#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe60
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	class CCitadel_Ability_Tokamak_CrimsonCannon : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		bool m_bAirCast; // 0xc70		
	private:
		[[maybe_unused]] uint8_t __pad0c71[0x1c7]; // 0xc71
	public:
		bool m_bIsZoomed; // 0xe38		
	};
};
