#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1810
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ViscousWeapon_Alt_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strChargingParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FiringParticle; // 0x1700		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplosionSound; // 0x17e0		
		CSoundEventName m_ChargeSound; // 0x17f0		
		CSoundEventName m_ShootSound; // 0x1800		
	};
};
