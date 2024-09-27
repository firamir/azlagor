#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Surging_PowerVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_BerserkerSound; // 0x608		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ModifierActiveDisplay; // 0x618		
	};
};
