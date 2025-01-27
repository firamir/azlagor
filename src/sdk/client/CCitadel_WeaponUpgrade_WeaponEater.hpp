#pragma once
#include "client/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd70
	// Has VTable
	// 
	// MNetworkVarNames "int m_nWeaponPower"
	class CCitadel_WeaponUpgrade_WeaponEater : public client::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0c88[0xe0]; // 0xc88
	public:
		// MNetworkEnable
		int32_t m_nWeaponPower; // 0xd68		
	};
};
