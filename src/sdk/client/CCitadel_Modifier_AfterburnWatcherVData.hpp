#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "client/CCitadel_Modifier_Base_Buildup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x668
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_AfterburnWatcherVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_AfterburnDotModifier; // 0x638		
		CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier; // 0x648		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x658		
	};
};
