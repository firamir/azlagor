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
	// Size: 0xda0
	// Has VTable
	class CCitadel_Ability_Hornet_Chain : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vLaunchPosition; // 0xc70		
		QAngle m_qLaunchAngle; // 0xc7c		
	};
};