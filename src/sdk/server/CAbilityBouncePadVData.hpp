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
	// Size: 0x1580
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityBouncePadVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BounceModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_AllyBounceModifier; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_SpeedOnLandModifier; // 0x1560		
		CEmbeddedSubclass<server::CCitadelModifier> m_NoBounceModifier; // 0x1570		
	};
};
