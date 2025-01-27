#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x918
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Nano_PredatoryStatueVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnabledParticle; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle; // 0x7c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strEnabledSound; // 0x8a8		
		CSoundEventName m_strEnabledLoopSound; // 0x8b8		
		CSoundEventName m_strDisabledSound; // 0x8c8		
		CSoundEventName m_strLaserHitSound; // 0x8d8		
		CSoundEventName m_strLaserStartSound; // 0x8e8		
		CSoundEventName m_strLaserLoopSound; // 0x8f8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier; // 0x908		
	};
};
