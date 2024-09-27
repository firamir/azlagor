#pragma once
#include "server/CCitadelModifierAuraVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAura_ConeVData : public server::CCitadelModifierAuraVData
	{
	public:
		float m_flAuraTargetingConeHalfWidth; // 0x648		
		float m_flAuraTargetingConeAngle; // 0x64c		
	};
};
