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
	struct FeAntiTunnelProbe_t
	{
	public:
		float flWeight; // 0x0		
		uint32_t nFlags; // 0x4		
		uint16_t nProbeNode; // 0x8		
		uint16_t nCount; // 0xa		
		uint32_t nBegin; // 0xc		
		float flActivationDistance; // 0x10		
		float flCurvatureRadius; // 0x14		
	};
};
