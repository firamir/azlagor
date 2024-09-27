#pragma once
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
	// Size: 0x1910
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tokamak_CrimsonCannonVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserShot; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CasterOnlyTargetParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyTargetedParticle; // 0x17e0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strEnemyBeenTargetedSound; // 0x18c0		
		CSoundEventName m_strCasterTargetSelectedSound; // 0x18d0		
		CSoundEventName m_strFireSound; // 0x18e0		
		CSoundEventName m_strImpactSound; // 0x18f0		
		CSoundEventName m_strBlockedSound; // 0x1900		
	};
};
