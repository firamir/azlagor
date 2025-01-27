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
	// Size: 0xd38
	// Has VTable
	// 
	// MNetworkVarNames "int m_nNumStacks"
	class CItem_RestorativeLocket : public client::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0c88[0xa8]; // 0xc88
	public:
		// MNetworkEnable
		int32_t m_nNumStacks; // 0xd30		
	};
};
