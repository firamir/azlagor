#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1888
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_SlorkVData : public server::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1590		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponShapeParticle; // 0x1670		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponRangeAssistParticle; // 0x1750		
		int32_t m_nNumConePoints; // 0x1830		
		float m_flRoundPerSecond; // 0x1834		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1838		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_PoisonSprayerHitSound; // 0x1848		
		CSoundEventName m_WeaponLoopStartSound; // 0x1858		
		CSoundEventName m_WeaponLoopSound; // 0x1868		
		CSoundEventName m_WeaponLoopEndSound; // 0x1878		
	};
};
