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
	// Size: 0x100
	// Has VTable
	class CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
	public:
		float m_flEnemyMoveSlow; // 0xf8		
	};
};
