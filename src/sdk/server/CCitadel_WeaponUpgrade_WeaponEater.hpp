#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbf0
	// Has VTable
	// 
	// MNetworkVarNames "int m_nWeaponPower"
	class CCitadel_WeaponUpgrade_WeaponEater : public server::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0b08[0xe0]; // 0xb08
	public:
		// MNetworkEnable
		int32_t m_nWeaponPower; // 0xbe8		
	};
};
