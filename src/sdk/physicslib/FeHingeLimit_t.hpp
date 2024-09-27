#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeHingeLimit_t
	{
	public:
		uint16_t nNode[6]; // 0x0		
		uint32_t nFlags; // 0xc		
		float flWeight4; // 0x10		
		float flWeight5; // 0x14		
		float flAngleCenter; // 0x18		
		float flAngleExtents; // 0x1c		
	};
};
