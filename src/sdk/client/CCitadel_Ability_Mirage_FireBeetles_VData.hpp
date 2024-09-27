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
	class CCitadel_Ability_Mirage_FireBeetles_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier; // 0x1620		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1630		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplosionSound; // 0x1640		
	};
};
