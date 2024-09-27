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
	// Size: 0xb10
	// Has VTable
	class CCitadel_Ability_Teleport : public server::CCitadelBaseAbility
	{
	public:
		bool m_bTeleportingToTarget; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
	public:
		Vector m_vTargetPosition; // 0xaec		
		QAngle m_vTargetAngles; // 0xaf8		
	};
};
