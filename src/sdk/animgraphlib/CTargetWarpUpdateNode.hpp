#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTargetWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		animgraphlib::CAnimParamHandle m_hPositionParameter; // 0x6c		
		animgraphlib::CAnimParamHandle m_hOrientationParameter; // 0x6e		
	};
};
