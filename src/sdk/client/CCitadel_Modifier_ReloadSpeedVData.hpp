#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ReloadSpeedVData : public client::CCitadelModifierVData
	{
	public:
		float m_flReloadSpeedPercent; // 0x608		
		bool m_bDestroyAfterReload; // 0x60c		
	};
};
