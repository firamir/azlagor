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
	// Size: 0x1988
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Bull_LeapVData : public client::CitadelAbilityVData
	{
	public:
		CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BoostModifier; // 0x1580		
		CEmbeddedSubclass<client::CCitadelModifier> m_CrashModifier; // 0x1590		
		CEmbeddedSubclass<client::CCitadelModifier> m_ImmunityModifier; // 0x15a0		
		CEmbeddedSubclass<client::CCitadelModifier> m_LandingBonusesModifier; // 0x15b0		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TakeOffParticle; // 0x15c0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x16a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle; // 0x1780		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_nHoverParticle; // 0x1860		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCrashingSound; // 0x1940		
		CSoundEventName m_strImpactSound; // 0x1950		
		// MPropertyStartGroup "GamePlay"
		float m_flStartupTime; // 0x1960		
		float m_flForwardBoostSpeed; // 0x1964		
		float m_flUpBoostSpeed; // 0x1968		
		float m_flBoostTurnRate; // 0x196c		
		float m_flHoverTime; // 0x1970		
		float m_flMinAimAngle; // 0x1974		
		float m_flBoostGain; // 0x1978		
		float m_flBoostTime; // 0x197c		
		float m_flLandingTime; // 0x1980		
		float m_flCrashSpeed; // 0x1984		
	};
};
