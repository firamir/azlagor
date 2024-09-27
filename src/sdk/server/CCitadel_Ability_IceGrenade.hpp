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
	// Size: 0xbe0
	// Has VTable
	class CCitadel_Ability_IceGrenade : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vLaunchPosition; // 0xae8		
		QAngle m_qLaunchAngle; // 0xaf4		
	};
};
