#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Enumerator count: 3
	// Alignment: 1
	// Size: 0x1
	enum class NmPoseBlendMode_t : std::uint8_t
	{
		Overlay = 0,
		Additive = 1,
		ModelSpace = 2,
	};
};
