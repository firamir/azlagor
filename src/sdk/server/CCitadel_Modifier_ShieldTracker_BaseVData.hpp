#pragma once
#include "client/EShieldType_t.hpp"
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
	class CCitadel_Modifier_ShieldTracker_BaseVData : public server::CCitadelModifierVData
	{
	public:
		float m_flShieldImpactEffectDuration; // 0x608		
	private:
		[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldImpactParticle; // 0x610		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ShieldImpactModifier; // 0x6f0		
		// MPropertyDescription "What type of shield is this."
		client::EShieldType_t eShieldType; // 0x700		
	private:
		[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
	public:
		// MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
		float flCooldownOnDamage; // 0x704		
		// MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
		float flCooldownOnBreak; // 0x708		
		// MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
		float flRegenDuration; // 0x70c		
	};
};
