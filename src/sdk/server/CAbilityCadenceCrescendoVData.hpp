#pragma once
#include "server/CCitadelModifierAura.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1550
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCadenceCrescendoVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifierAura> m_CrescendoAOEModifier; // 0x1540		
	};
};
