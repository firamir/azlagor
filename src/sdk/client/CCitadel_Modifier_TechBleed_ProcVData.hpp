#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x658
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_TechBleed_ProcVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_BleedModifier; // 0x638		
		CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier; // 0x648		
	};
};
