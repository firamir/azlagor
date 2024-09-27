#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x15a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_RescueBeamVData : public client::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DispelAndHealModifier; // 0x1588		
		CEmbeddedSubclass<client::CCitadelModifier> m_PullModifier; // 0x1598		
	};
};
