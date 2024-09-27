#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1780
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CItem_ActiveReload_VData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SuccessModifier; // 0x1588		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSuccessSound; // 0x1598		
		CSoundEventName m_strFailureSound; // 0x15a8		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessParticle; // 0x15b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FailureParticle; // 0x1698		
		// MPropertyStartGroup "Gameplay"
		float m_flGraceTime; // 0x1778		
	};
};
