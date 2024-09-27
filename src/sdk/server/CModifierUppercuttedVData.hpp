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
	// Size: 0x710
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierUppercuttedVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunParticle; // 0x608		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strStunSound; // 0x6e8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_NoExplodeModifier; // 0x6f8		
		// MPropertyStartGroup "Gameplay"
		float m_flEnemyNoAirDashDuration; // 0x708		
	};
};
