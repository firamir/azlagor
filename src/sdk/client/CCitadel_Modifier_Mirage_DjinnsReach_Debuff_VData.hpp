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
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Mirage_DjinnsReach_Debuff_VData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ChainModifier; // 0x608		
	};
};
