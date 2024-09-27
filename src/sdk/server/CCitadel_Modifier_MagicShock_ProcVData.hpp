#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x728
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_MagicShock_ProcVData : public server::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcParticle; // 0x638		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_hDamageTrackModifier; // 0x718		
	};
};
