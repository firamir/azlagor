#pragma once
#include "client/CRemapFloat.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CCitadelYamatoBaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1900
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityHealingSlashVData : public server::CCitadelYamatoBaseVData
	{
	public:
		float m_flEffectSize; // 0x1548		
		float m_flMaxAttackAngle; // 0x154c		
		client::CRemapFloat m_remapAngleToTime; // 0x1550		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DebuffModifier; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1570		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashParticle; // 0x1650		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashSwordGlow; // 0x1730		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1810		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDamageTarget; // 0x18f0		
	};
};