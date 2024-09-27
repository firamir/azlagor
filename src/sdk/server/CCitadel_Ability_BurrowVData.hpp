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
	// Size: 0x18f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_BurrowVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowStartParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowEndParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowInGroundParticle; // 0x17e0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BurrowModifier; // 0x18c0		
		CEmbeddedSubclass<server::CCitadelModifier> m_SpinModifier; // 0x18d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strBurrowEndSound; // 0x18e0		
		// MPropertyStartGroup "+Burrow Properties"
		float m_flChannelEndEnemyPopUpForce; // 0x18f0		
		float m_flChannelEndEnemyPopUpCylinderHeight; // 0x18f4		
	};
};
