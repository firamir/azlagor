#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityShivDeferDamageVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveCastParticle; // 0x1540		
		// MPropertyStartGroup "+Defer Properties"
		float m_flDeferredDamageApplicationInterval; // 0x1620		
	};
};
