#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_SilencedVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x9a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BubbleVData : public client::CCitadel_Modifier_SilencedVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x8a8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_ExplodeSound; // 0x988		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x998		
	};
};
