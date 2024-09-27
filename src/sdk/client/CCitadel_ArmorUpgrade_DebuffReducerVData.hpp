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
	// Size: 0x1758
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_ArmorUpgrade_DebuffReducerVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffReducedParticle; // 0x1588		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PurgeCastParticle; // 0x1668		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_MoveSpeedModifier; // 0x1748		
	};
};
