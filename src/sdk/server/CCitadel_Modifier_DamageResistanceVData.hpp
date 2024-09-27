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
	class CCitadel_Modifier_DamageResistanceVData : public server::CCitadelModifierVData
	{
	public:
		float m_flDamageResistancePerSecond; // 0x608		
		float m_flTickInterval; // 0x60c		
		float m_flDamageResistanceBonusPerGameMinute; // 0x610		
	};
};
