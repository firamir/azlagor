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
	// Size: 0x1568
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Chrono_PulseGrenade_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PulseAreaModifier; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHitSound; // 0x1550		
		// MPropertyStartGroup "Misc"
		CUtlString m_strDebuffStatName; // 0x1560		
	};
};
