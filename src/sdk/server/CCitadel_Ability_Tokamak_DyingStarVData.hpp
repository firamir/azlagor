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
	// Size: 0x1728
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tokamak_DyingStarVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlameAuraParticle; // 0x1620		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strInFlightAnimGraphParam; // 0x1700		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1708		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_InFlightModifier; // 0x1718		
	};
};
