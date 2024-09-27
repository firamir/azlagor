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
	// Size: 0xc98
	// Has VTable
	class CCitadel_Ability_Teleport : public client::C_CitadelBaseAbility
	{
	public:
		bool m_bTeleportingToTarget; // 0xc70		
	private:
		[[maybe_unused]] uint8_t __pad0c71[0x3]; // 0xc71
	public:
		Vector m_vTargetPosition; // 0xc74		
		QAngle m_vTargetAngles; // 0xc80		
	};
};
