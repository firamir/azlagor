#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbb8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iCurrentResistValue"
	class CCitadel_ArmorUpgrade_AblativeCoat : public server::CCitadel_Item
	{
	public:
		entity2::GameTime_t m_flLastDamageTime; // 0xb08		
		// MNetworkEnable
		int32_t m_iCurrentResistValue; // 0xb0c		
	};
};
