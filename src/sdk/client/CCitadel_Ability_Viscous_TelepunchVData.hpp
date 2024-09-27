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
	// Size: 0x1a18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Viscous_TelepunchVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PortalParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PunchParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallPunchParticle; // 0x17e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CeilingPunchParticle; // 0x18c0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_EnemyPortalSound; // 0x19a0		
		CSoundEventName m_SelfPortalSound; // 0x19b0		
		CSoundEventName m_WindupSound; // 0x19c0		
		CSoundEventName m_PunchSound; // 0x19d0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PunchRollSlowModifier; // 0x19e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier; // 0x19f0		
		// MPropertyStartGroup "+Telepunch Parameters"
		float m_flEnemyPortalTelegraphTime; // 0x1a00		
		float m_flSelfPortalTelegraphTime; // 0x1a04		
		float m_flWindupTime; // 0x1a08		
		float m_flAttackTime; // 0x1a0c		
		float m_flGroundTraceOnPlayerHitDistance; // 0x1a10		
		float m_flPlayerCheckSphereRadius; // 0x1a14		
	};
};
