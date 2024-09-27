#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeHingeLimitBuild_t
	{
	public:
		uint16_t nNode[6]; // 0x0		
		uint32_t nFlags; // 0xc		
		float flLimitCW; // 0x10		
		float flLimitCCW; // 0x14		
	};
};
