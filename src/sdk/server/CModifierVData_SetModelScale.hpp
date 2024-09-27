#pragma once
#include "server/CCitadelModifierVData.hpp"
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVData_SetModelScale : public server::CCitadelModifierVData
	{
	public:
		tier2::CRangeFloat m_flScale; // 0x608		
	};
};
