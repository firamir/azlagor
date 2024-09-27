#pragma once
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
	// Size: 0x1760
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_TechDamagePulseVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle; // 0x1588		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle; // 0x1668		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strPulseTickSound; // 0x1748		
		// MPropertyStartGroup "Gameplay"
		int32_t m_iMaxTargets; // 0x1758		
	};
};
