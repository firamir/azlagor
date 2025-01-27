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
	// Size: 0xcc8
	// Has VTable
	class CCitadel_Item_Intensifying_Clip : public client::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0c88[0x38]; // 0xc88
	public:
		float m_flSpinUpTime; // 0xcc0		
	};
};
