#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ArcaneEaterProcVData : public server::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_StealWatcherModifier; // 0x638		
	};
};