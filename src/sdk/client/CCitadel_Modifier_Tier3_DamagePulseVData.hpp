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
	// Size: 0x708
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Tier3_DamagePulseVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle; // 0x608		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strPulseTickSound; // 0x6e8		
		// MPropertyStartGroup "Gameplay"
		int32_t m_iMaxTargets; // 0x6f8		
		float m_flRadius; // 0x6fc		
		float m_flDamagePerPulse; // 0x700		
		float m_flTickRate; // 0x704		
	};
};
