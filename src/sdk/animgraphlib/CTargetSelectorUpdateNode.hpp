#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTargetSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	public:
		CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
	public:
		animgraphlib::CAnimParamHandle m_hPositionParameter; // 0x74		
		animgraphlib::CAnimParamHandle m_hOrientationParameter; // 0x76		
	};
};
