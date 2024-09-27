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
	// Size: 0x828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_SiphonBullets_VData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_StealWatcherModifier; // 0x638		
		CEmbeddedSubclass<client::CCitadelModifier> m_HealModifier; // 0x648		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x658		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x738		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x818		
	};
};
