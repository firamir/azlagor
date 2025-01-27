#pragma once
#include "server/CCitadel_Ability_Melee_Base.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xdb0
	// Has VTable
	class CCitadel_Ability_Uppercut : public server::CCitadel_Ability_Melee_Base
	{
	public:
		CUtlStringToken m_TypeIDStickyBombAttached; // 0xb70		
	private:
		[[maybe_unused]] uint8_t __pad0b74[0x234]; // 0xb74
	public:
		bool m_bShouldUseResources; // 0xda8		
	};
};
