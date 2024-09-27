#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_UtilityUpgrade_RocketBootsVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1950
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_UtilityUpgrade_RocketBoosterVData : public server::CCitadel_UtilityUpgrade_RocketBootsVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LandingParticle; // 0x1678		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle; // 0x1758		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DropDownStartParticle; // 0x1838		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DropDownStartSound; // 0x1918		
		CSoundEventName m_LandingSound; // 0x1928		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1938		
		// MPropertyStartGroup "Gameplay"
		float m_flSlamEnabledTime; // 0x1948		
	};
};
