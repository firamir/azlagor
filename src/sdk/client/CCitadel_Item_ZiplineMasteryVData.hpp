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
	// Size: 0x1598
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_ZiplineMasteryVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_JumpBonusModifier; // 0x1588		
	};
};
