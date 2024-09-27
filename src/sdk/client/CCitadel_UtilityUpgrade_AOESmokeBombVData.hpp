#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1688
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_UtilityUpgrade_AOESmokeBombVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastCompleteParticle; // 0x1588		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strBuffGainedSound; // 0x1668		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_InvisModifier; // 0x1678		
	};
};
