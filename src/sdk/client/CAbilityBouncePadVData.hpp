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
	// Size: 0x1580
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityBouncePadVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BounceModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_AllyBounceModifier; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_SpeedOnLandModifier; // 0x1560		
		CEmbeddedSubclass<client::CCitadelModifier> m_NoBounceModifier; // 0x1570		
	};
};
