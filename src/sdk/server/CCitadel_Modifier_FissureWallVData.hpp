#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_FissureWallVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebrisParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpikeParticle; // 0x6e8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_WallSpawnSound; // 0x7c8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x7d8		
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyVisionModifier; // 0x7e8		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x7f8		
	};
};
