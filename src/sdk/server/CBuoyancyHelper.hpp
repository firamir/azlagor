#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	class CBuoyancyHelper
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlStringToken m_nFluidType; // 0x18		
		float m_flFluidDensity; // 0x1c		
		CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelFriction; // 0x20		
		CUtlVector<float> m_vecWheelFrictionScales; // 0x38		
		CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelDrag; // 0x50		
		CUtlVector<float> m_vecWheelDrag; // 0x68		
		
		// Datamap fields:
		// void m_pController; // 0x8
	};
};
