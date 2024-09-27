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
	// Size: 0x1670
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityChargedTackleVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargePrepareModifier; // 0x1620		
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargeActiveModifier; // 0x1630		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1640		
		CEmbeddedSubclass<server::CCitadelModifier> m_DragModifier; // 0x1650		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strHitSound; // 0x1660		
	};
};
