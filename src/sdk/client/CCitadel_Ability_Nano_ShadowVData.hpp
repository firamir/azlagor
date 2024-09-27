#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1560
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Nano_ShadowVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ShadowModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_PurgeModifier; // 0x1550		
	};
};
