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
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Objective_RegenVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Objective Health Regen"
		// MPropertyDescription "How health per second when out of combat?"
		float m_flOutOfCombatHealthRegen; // 0x608		
		// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
		float m_flOutOfCombatRegenDelay; // 0x60c		
	};
};
