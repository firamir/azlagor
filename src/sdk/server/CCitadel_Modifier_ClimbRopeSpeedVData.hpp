#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ClimbRopeSpeedVData : public server::CCitadelModifierVData
	{
	public:
		float m_flRampUpTime; // 0x608		
		float m_flPercentageMultiplierStart; // 0x60c		
		float m_flPercentageMultiplierEnd; // 0x610		
	};
};
