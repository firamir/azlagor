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
	// Size: 0x1670
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityChargedTackleVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargePrepareModifier; // 0x1620		
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargeActiveModifier; // 0x1630		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x1640		
		CEmbeddedSubclass<client::CCitadelModifier> m_DragModifier; // 0x1650		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strHitSound; // 0x1660		
	};
};
