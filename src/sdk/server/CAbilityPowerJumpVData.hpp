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
	// Size: 0x1640
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPowerJumpVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_InAirModifier; // 0x1620		
		CEmbeddedSubclass<server::CCitadelModifier> m_PowerJumpModifier; // 0x1630		
	};
};
