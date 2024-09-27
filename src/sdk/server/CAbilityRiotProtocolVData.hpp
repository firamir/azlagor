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
	// Size: 0x1720
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityRiotProtocolVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1620		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_CastDelayModifier; // 0x1700		
		CEmbeddedSubclass<server::CCitadelModifier> m_WardenBuffModifier; // 0x1710		
	};
};
