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
	// Size: 0x1920
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Shiv_KillingBlowVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_ActiveBuff; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_KillableModifier; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle; // 0x1570		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1650		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle; // 0x1730		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillingBlowCastParticle; // 0x1810		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ChargeUpSound; // 0x18f0		
		CSoundEventName m_OnKillSound; // 0x1900		
		// MPropertyStartGroup "+Killing Blow Params"
		float m_flPreArrivalAttackStartTime; // 0x1910		
		float m_flKillableGlowRange; // 0x1914		
		float m_flGlowMinTime; // 0x1918		
	};
};
