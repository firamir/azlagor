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
	// Size: 0xb38
	// Has VTable
	class CCitadel_Ability_MobileResupply : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vDeployPosition; // 0xae8		
		QAngle m_angDeploy; // 0xaf4		
	};
};
