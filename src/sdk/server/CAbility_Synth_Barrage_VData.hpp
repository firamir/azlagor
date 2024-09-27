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
	// Size: 0x1828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Synth_Barrage_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BarrageCasterModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_AmpModifier; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShootParticle; // 0x1570		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1650		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle; // 0x1730		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strProjectileLaunchSound; // 0x1810		
		// MPropertyStartGroup "Gameplay"
		float m_flAttackInterval; // 0x1820		
	};
};
