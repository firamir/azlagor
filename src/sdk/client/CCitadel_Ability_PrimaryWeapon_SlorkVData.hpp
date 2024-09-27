#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1880
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_SlorkVData : public client::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1588		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponShapeParticle; // 0x1668		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponRangeAssistParticle; // 0x1748		
		int32_t m_nNumConePoints; // 0x1828		
		float m_flRoundPerSecond; // 0x182c		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1830		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_PoisonSprayerHitSound; // 0x1840		
		CSoundEventName m_WeaponLoopStartSound; // 0x1850		
		CSoundEventName m_WeaponLoopSound; // 0x1860		
		CSoundEventName m_WeaponLoopEndSound; // 0x1870		
	};
};
