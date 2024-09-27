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
	// Size: 0x1650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityThumper2VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle; // 0x1540		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strStompExplosionSound; // 0x1620		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1630		
		CEmbeddedSubclass<server::CCitadelModifier> m_BarbedWireAuraModifier; // 0x1640		
	};
};
