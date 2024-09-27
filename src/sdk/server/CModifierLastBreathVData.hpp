#pragma once
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
	// Size: 0x9d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierLastBreathVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletShieldHitParticle; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TechShieldHitParticle; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x8a8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStartSound; // 0x988		
		CSoundEventName m_ExplodeSound; // 0x998		
		float m_flShieldImpactEffectDuration; // 0x9a8		
	private:
		[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BulletShieldImpactModifier; // 0x9b0		
		CEmbeddedSubclass<server::CCitadelModifier> m_TechShieldImpactModifier; // 0x9c0		
	};
};
