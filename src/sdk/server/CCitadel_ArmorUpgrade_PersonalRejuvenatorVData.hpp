#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1768
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeployParticle; // 0x1588		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RespawnParticle; // 0x1668		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sDeploySound; // 0x1748		
		CSoundEventName m_sRespawnSound; // 0x1758		
	};
};
