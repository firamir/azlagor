#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbf8
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angBeamAngles"
	class CCitadel_Ability_Wrecker_Ultimate : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x20]; // 0xae8
	public:
		// MNetworkEnable
		QAngle m_angBeamAngles; // 0xb08		
	};
};
