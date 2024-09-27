#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	class CCitadel_Modifier_RespawnCredit : public server::CCitadelModifier
	{
	public:
		bool m_bActivated; // 0xc0		
		bool m_bSpokeAboutToExpire; // 0xc1		
	};
};
