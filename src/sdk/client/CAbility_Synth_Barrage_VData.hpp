#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Synth_Barrage_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BarrageCasterModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_AmpModifier; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1560		
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
