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
	// Size: 0x1a00
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Nano_Pounce_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_LeapModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_ActiveBuff; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle; // 0x1570		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle; // 0x1650		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1730		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle; // 0x1810		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrimaryHitParticle; // 0x18f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_AttackSound; // 0x19d0		
		CSoundEventName m_strExplodeSound; // 0x19e0		
		// MPropertyStartGroup "Gameplay"
		float m_flPreArrivalAttackStartTime; // 0x19f0		
		float m_flAllyMinTargetRange; // 0x19f4		
		float m_flTargetVerticalOffset; // 0x19f8		
	};
};
