#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x640
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_VeilWalkerWatcherVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_InvisModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_VeilWalkerTriggeredModifier; // 0x618		
		CEmbeddedSubclass<client::CCitadelModifier> m_VeilWalkerMovespeed; // 0x628		
		// MPropertyStartGroup "Gameplay"
		float m_flTraceLengthMin; // 0x638		
	};
};
