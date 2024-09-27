#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityChargedBombVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargeBombModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1550		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1630		
		// MPropertyStartGroup "GamePlay"
		float m_flChargeForMaxDamage; // 0x1640		
		float m_flMinDamagePercent; // 0x1644		
	};
};
