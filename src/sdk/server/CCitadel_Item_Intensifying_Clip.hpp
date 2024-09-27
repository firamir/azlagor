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
	// Size: 0xb48
	// Has VTable
	class CCitadel_Item_Intensifying_Clip : public server::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0b08[0x38]; // 0xb08
	public:
		float m_flSpinUpTime; // 0xb40		
	};
};
