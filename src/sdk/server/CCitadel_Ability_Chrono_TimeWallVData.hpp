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
	// Size: 0x18f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Chrono_TimeWallVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_AuraModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallParticle; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallChargeParticle; // 0x1630		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallHitParticle; // 0x1710		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallHitTimerParticle; // 0x17f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWallCreated; // 0x18d0		
		CSoundEventName m_strChargeUpSound; // 0x18e0		
	};
};
