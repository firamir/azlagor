#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_NearDeathFXVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyNearDeathParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyNearDeathParticle; // 0x6e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sSelfDestructStart; // 0x7c8		
		CSoundEventName m_sSelfDestructEnd; // 0x7d8		
	};
};
