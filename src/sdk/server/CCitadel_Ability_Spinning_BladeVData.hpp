#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
	// Size: 0x1760
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Spinning_BladeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchIndicator; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchParticle; // 0x1630		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strThrowSound; // 0x1710		
		CSoundEventName m_strReturnSound; // 0x1720		
		CSoundEventName m_strCatchSound; // 0x1730		
		CSoundEventName m_strFailSound; // 0x1740		
		CSoundEventName m_strHitSound; // 0x1750		
	};
};
