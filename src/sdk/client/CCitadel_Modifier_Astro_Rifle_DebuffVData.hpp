#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Astro_Rifle_DebuffVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x608		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strTargetHitSound; // 0x618		
	};
};
