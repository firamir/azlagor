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
	// Size: 0x1748
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityGooGrenadeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_GooGrenadeImpactModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_GooGrenadePuddleAuraModifier; // 0x1550		
		// MPropertyStartGroup "Particles"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle; // 0x1560		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle; // 0x1640		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_GrenadeHitImpactSound; // 0x1720		
		CSoundEventName m_GrenadeMissImpactSound; // 0x1730		
		// MPropertyStartGroup "BounceSettings"
		float m_flMinRestitution; // 0x1740		
		float m_flMaxRestitution; // 0x1744		
	};
};
