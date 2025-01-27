#pragma once
#include "client/CCitadelModifierAura.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1550
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCadenceCrescendoVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifierAura> m_CrescendoAOEModifier; // 0x1540		
	};
};
