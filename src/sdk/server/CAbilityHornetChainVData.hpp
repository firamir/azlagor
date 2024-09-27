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
	// Size: 0x1650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHornetChainVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1540		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1620		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ChainModifier; // 0x1630		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DisarmModifier; // 0x1640		
	};
};
