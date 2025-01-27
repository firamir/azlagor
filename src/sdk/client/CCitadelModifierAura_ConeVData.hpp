#pragma once
#include "client/CCitadelModifierAuraVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAura_ConeVData : public client::CCitadelModifierAuraVData
	{
	public:
		float m_flAuraTargetingConeHalfWidth; // 0x648		
		float m_flAuraTargetingConeAngle; // 0x64c		
	};
};
