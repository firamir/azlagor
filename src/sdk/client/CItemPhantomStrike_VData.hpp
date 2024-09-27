#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1860
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CItemPhantomStrike_VData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1588		
		CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier; // 0x1598		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x15a8		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x15b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1698		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffParticle; // 0x1778		
		// MPropertyGroupName "Gameplay"
		float m_flTeleportDistance; // 0x1858		
	};
};
