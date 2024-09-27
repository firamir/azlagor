#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x9d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierLastBreathVData : public client::CCitadelModifierVData
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
		CEmbeddedSubclass<client::CCitadelModifier> m_BulletShieldImpactModifier; // 0x9b0		
		CEmbeddedSubclass<client::CCitadelModifier> m_TechShieldImpactModifier; // 0x9c0		
	};
};
