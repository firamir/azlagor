#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct FeAntiTunnelProbeBuild_t
	{
	public:
		float flWeight; // 0x0		
		float flActivationDistance; // 0x4		
		float flCurvature; // 0x8		
		uint32_t nFlags; // 0xc		
		uint16_t nProbeNode; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x6]; // 0x12
	public:
		CUtlVector<uint16_t> targetNodes; // 0x18		
	};
};
