#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmStateCompletedConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		int16_t m_nSourceStateNodeIdx; // 0x10		
		int16_t m_nTransitionDurationOverrideNodeIdx; // 0x12		
		float m_flTransitionDurationSeconds; // 0x14		
	};
};