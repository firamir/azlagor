#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1688
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_UtilityUpgrade_AOESmokeBombVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastCompleteParticle; // 0x1588		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strBuffGainedSound; // 0x1668		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_InvisModifier; // 0x1678		
	};
};
