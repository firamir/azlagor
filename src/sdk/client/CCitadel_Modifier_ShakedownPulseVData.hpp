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
	// Size: 0x7d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ShakedownPulseVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strFireSound; // 0x608		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShakeParticle; // 0x618		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChainParticle; // 0x6f8		
	};
};
