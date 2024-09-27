#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_MeleeCharge_VData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SwingParticle; // 0x638		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x718		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ReloadVisualModifier; // 0x7f8		
	};
};
