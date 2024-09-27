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
	// Size: 0x1900
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHornetSnipeVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly; // 0x17e0		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SnipeModifier; // 0x18c0		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffOnKillModifier; // 0x18d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSnipeImpactSound; // 0x18e0		
		// MPropertyStartGroup "+Snipe Properties"
		float m_flMinScopeTimeToShoot; // 0x18f0		
		float m_flScopeTimeToFullPower; // 0x18f4		
		float m_flScopeMinPowerFrac; // 0x18f8		
		float m_flFadeToBlackTime; // 0x18fc		
	};
};
