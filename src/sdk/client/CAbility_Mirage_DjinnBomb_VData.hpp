#pragma once
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
	// Size: 0x1630
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Mirage_DjinnBomb_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DetonateParticle; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDetonateSound; // 0x1620		
	};
};
