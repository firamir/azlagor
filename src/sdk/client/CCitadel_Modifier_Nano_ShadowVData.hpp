#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_InvisVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Nano_ShadowVData : public client::CCitadel_Modifier_InvisVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier; // 0x8c0		
		CEmbeddedSubclass<client::CCitadelModifier> m_ArmorDebuff; // 0x8d0		
	};
};
