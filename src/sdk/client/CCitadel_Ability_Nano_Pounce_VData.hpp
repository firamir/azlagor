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
	// Size: 0x1a00
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Nano_Pounce_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_ActiveBuff; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x1560		
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
