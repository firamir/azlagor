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
	// Size: 0x7f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_PowerSurgeVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponFxParticle; // 0x6e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWeaponShootSound; // 0x7c8		
		CSoundEventName m_strBulletWhizSound; // 0x7d8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x7e8		
	};
};
