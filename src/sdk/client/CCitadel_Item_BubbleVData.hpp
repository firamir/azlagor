#pragma once
#include "client/CBaseModifier.hpp"
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
	class CCitadel_Item_BubbleVData : public client::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1588		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_CastTargetSound; // 0x1668		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_BubbleModifier; // 0x1678		
	};
};
