#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x728
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_MagicShock_ProcVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcParticle; // 0x638		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_hDamageTrackModifier; // 0x718		
	};
};
