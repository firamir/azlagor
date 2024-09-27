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
	// Size: 0x6f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ImmobilizeTrapDOT_ThinkerVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle; // 0x608		
		// MPropertyStartGroup "Gameplay"
		float m_flTickRate; // 0x6e8		
		float m_flHeight; // 0x6ec		
	};
};
