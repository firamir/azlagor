#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_FissureWallVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebrisParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpikeParticle; // 0x6e8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_WallSpawnSound; // 0x7c8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x7d8		
		CEmbeddedSubclass<client::CCitadelModifier> m_EnemyVisionModifier; // 0x7e8		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x7f8		
	};
};
