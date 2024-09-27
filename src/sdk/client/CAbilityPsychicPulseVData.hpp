#pragma once
#include "client/CBaseModifier.hpp"
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
	// Size: 0x1640
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPsychicPulseVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle; // 0x1550		
		// MPropertyStartGroup "+Psychic Pulse Properties"
		float m_flCastEffectLifetime; // 0x1630		
		float m_flConeAngle; // 0x1634		
		float m_flConeHalfWidth; // 0x1638		
	};
};
