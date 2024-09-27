#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1778
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_CheatDeathVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagePulseParticle; // 0x1588		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageTargetParticle; // 0x1668		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sHealPulseSound; // 0x1748		
		CSoundEventName m_sHealAndDamagePulseSound; // 0x1758		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DeathImmuneModifier; // 0x1768		
	};
};
