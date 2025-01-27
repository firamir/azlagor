#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Enumerator count: 2
	// Alignment: 4
	// Size: 0x4
	enum class StartupBehavior_t : std::uint32_t
	{
		UNIT_STARTUP_BEHAVIOR_DEFAULT = 0x0,
		UNIT_STARTUP_BEHAVIOR_TAUNT = 0x1,
	};
};
