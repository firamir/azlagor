#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Backdoor_ProtectionVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Backdoor Protection"
		// MPropertyDescription "Range to check for nearby troopers (in units). Once troopers are within range, backdoor protection is removed. 0 range means disabled"
		float m_flBackdoorProtectionNearbyTrooperRange; // 0x608		
		// MPropertyDescription "How often do we check for troopers?"
		float m_flBackdoorProtectionNearbyTrooperThinkInterval; // 0x60c		
		// MPropertyDescription "How long does a nearby trooper lower backdoor protection?"
		float m_flBackdoorProtectionNearbyTrooperRemovalDuration; // 0x610		
		// MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
		// MPropertyAttributeRange "0 100"
		float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x614		
		// MPropertyDescription "How health per second does backdoor protection regen?"
		float m_flHealthPerSecondRegen; // 0x618		
		// MPropertyDescription "How health per second when out of combat?"
		float m_flOutOfCombatHealthRegen; // 0x61c		
		// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
		float m_flOutOfCombatRegenDelay; // 0x620		
		// MPropertyDescription "How long the shield effect lingers after having taken damage"
		float m_flEffectsLingerTime; // 0x624		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldImpactParticle; // 0x628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldActiveParticle; // 0x708		
		CUtlString m_strActiveEffectConfigName; // 0x7e8		
		float flShieldImpactDirectionOffset; // 0x7f0		
	};
};
