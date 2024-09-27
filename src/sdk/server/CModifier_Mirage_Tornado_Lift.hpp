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
	// Size: 0x148
	// Has VTable
	class CModifier_Mirage_Tornado_Lift : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		Vector m_vecFloatDest; // 0x130		
		Vector m_vecStartingPos; // 0x13c		
	};
};
