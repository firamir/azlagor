#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_SiphonBullets_VData : public server::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_StealWatcherModifier; // 0x638		
		CEmbeddedSubclass<server::CCitadelModifier> m_HealModifier; // 0x648		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x658		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x738		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x818		
	};
};
