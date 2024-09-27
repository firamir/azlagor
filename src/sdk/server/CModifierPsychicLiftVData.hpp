#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadel_Modifier_StunnedVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierPsychicLiftVData : public server::CCitadel_Modifier_StunnedVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle; // 0x6e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStartSound; // 0x7c8		
	};
};
