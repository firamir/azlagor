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
	// Size: 0x1838
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityShivDashVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DashModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect; // 0x1630		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect; // 0x1710		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDashStartWithTargets; // 0x17f0		
		CSoundEventName m_strDashStartEcho; // 0x1800		
		CSoundEventName m_strDashStartMiss; // 0x1810		
		CSoundEventName m_strDashHitEnemy; // 0x1820		
		// MPropertyStartGroup "+Dash Properties"
		float m_flEchoDelay; // 0x1830		
	};
};
