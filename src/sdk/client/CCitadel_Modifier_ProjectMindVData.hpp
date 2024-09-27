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
	// Size: 0x998
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ProjectMindVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportModelParticle; // 0x8a8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier; // 0x988		
	};
};
