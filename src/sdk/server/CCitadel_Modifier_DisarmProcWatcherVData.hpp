#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "server/CCitadel_Modifier_Base_Buildup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x748
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_DisarmProcWatcherVData : public server::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier; // 0x638		
		CEmbeddedSubclass<server::CCitadelModifier> m_DisarmProcModifier; // 0x648		
		CEmbeddedSubclass<server::CCitadelModifier> m_ImmunityModifier; // 0x658		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x668		
	};
};
