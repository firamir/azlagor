#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1820
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ShivDaggerVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DamageDebuffModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowDebuffModifier; // 0x1550		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerStuckParticle; // 0x1560		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerImpactParticle; // 0x1640		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerExplodeParticle; // 0x1720		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDaggerHitSound; // 0x1800		
		CSoundEventName m_strDaggerExplodeSound; // 0x1810		
	};
};
