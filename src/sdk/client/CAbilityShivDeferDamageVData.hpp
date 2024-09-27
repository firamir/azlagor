#pragma once
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
	// Size: 0x1628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityShivDeferDamageVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveCastParticle; // 0x1540		
		// MPropertyStartGroup "+Defer Properties"
		float m_flDeferredDamageApplicationInterval; // 0x1620		
	};
};
