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
	// Size: 0x710
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierUppercuttedVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunParticle; // 0x608		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strStunSound; // 0x6e8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_NoExplodeModifier; // 0x6f8		
		// MPropertyStartGroup "Gameplay"
		float m_flEnemyNoAirDashDuration; // 0x708		
	};
};
