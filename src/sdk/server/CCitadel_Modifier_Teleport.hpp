#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe8
	// Has VTable
	class CCitadel_Modifier_Teleport : public server::CCitadelModifier
	{
	public:
		Vector m_vDest; // 0xc0		
		QAngle m_angDestAngles; // 0xcc		
		Vector m_vDestVelocity; // 0xd8		
	};
};
