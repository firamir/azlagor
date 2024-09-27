#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x200
	// Has VTable
	class CCitadel_Modifier_Nikuman : public server::CCitadelModifierAura
	{
	private:
		[[maybe_unused]] uint8_t __pad00e0[0x118]; // 0xe0
	public:
		int32_t m_nTotalSelfHeal; // 0x1f8		
		int32_t m_nTotalTeammateHeal; // 0x1fc		
	};
};
