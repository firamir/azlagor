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
	class CAbilityDustStormVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DustStormAura; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_GrenadeTrailModifier; // 0x1550		
	};
};
