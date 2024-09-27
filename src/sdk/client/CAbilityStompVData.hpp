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
	// Size: 0x1660
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityStompVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStompExplosionSound; // 0x1620		
		CSoundEventName m_strCastDelayLocalPlayerSound; // 0x1630		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1640		
		CEmbeddedSubclass<client::CCitadelModifier> m_BulletResistModifier; // 0x1650		
	};
};
