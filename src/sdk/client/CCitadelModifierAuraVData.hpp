#pragma once
#include "client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "client/CModifierVData_BaseAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAuraVData : public client::CModifierVData_BaseAura
	{
	public:
		client::CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x640		
		client::CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x644		
	};
};
