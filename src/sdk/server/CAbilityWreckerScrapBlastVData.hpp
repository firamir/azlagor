#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1710
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityWreckerScrapBlastVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprayParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelStartParticle; // 0x1620		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DebuffModifier; // 0x1700		
	};
};
