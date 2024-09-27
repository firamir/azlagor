#pragma once
#include "server/CCitadelBaseTriggerAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb00
	// Has VTable
	// 
	// MNetworkVarNames "float m_flActiveRadius"
	class CCitadelNanoPredatoryStatueTrigger : public server::CCitadelBaseTriggerAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flActiveRadius; // 0xaf8		
	};
};
