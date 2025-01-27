#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_Intrinsic_BaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ReinforcingCasingsVData : public server::CCitadel_Modifier_Intrinsic_BaseVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x608		
	};
};
