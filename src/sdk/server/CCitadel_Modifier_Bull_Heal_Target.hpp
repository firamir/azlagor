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
	// Size: 0x1e0
	// Has VTable
	class CCitadel_Modifier_Bull_Heal_Target : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
	public:
		float m_flTetherRangeSquared; // 0x1d8		
	};
};
