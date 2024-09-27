#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityLightningBallVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ZapModifier; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHitSound; // 0x1550		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strProjectileLoopingSound; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapParticle; // 0x1570		
	};
};
