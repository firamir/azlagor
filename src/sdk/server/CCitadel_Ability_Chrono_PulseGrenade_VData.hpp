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
	// Size: 0x1568
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Chrono_PulseGrenade_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_PulseAreaModifier; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHitSound; // 0x1550		
		// MPropertyStartGroup "Misc"
		CUtlString m_strDebuffStatName; // 0x1560		
	};
};
