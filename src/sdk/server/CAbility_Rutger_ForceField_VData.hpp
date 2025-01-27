#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
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
	// Size: 0x1680
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Rutger_ForceField_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_AuraModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_VictimPushModifier; // 0x1550		
		CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier; // 0x1560		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strDomeCreated; // 0x1570		
		CSoundEventName m_strChargeUpSound; // 0x1580		
		CSoundEventName m_strPushAndDamage; // 0x1590		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChronoSphereChargeParticle; // 0x15a0		
	};
};
