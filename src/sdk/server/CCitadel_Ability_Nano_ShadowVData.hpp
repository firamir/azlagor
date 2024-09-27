#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1560
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Nano_ShadowVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ShadowModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_PurgeModifier; // 0x1550		
	};
};
