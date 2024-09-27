#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1760
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Spinning_BladeVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1540		
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
