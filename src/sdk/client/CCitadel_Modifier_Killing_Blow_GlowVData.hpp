#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x7e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Killing_Blow_GlowVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShivOnlyDeathStatus; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShivOnlyDeathTrail; // 0x6e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strShivOnlyActivateSound; // 0x7c8		
		CSoundEventName m_strShivOnlyLoopSound; // 0x7d8		
	};
};
