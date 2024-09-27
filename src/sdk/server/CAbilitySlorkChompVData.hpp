#pragma once
#include "server/CBaseModifier.hpp"
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
	class CAbilitySlorkChompVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_ChompHobbled; // 0x1540		
		CEmbeddedSubclass<server::CBaseModifier> m_ChompGrapple; // 0x1550		
	};
};
