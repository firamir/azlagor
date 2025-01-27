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
	// Size: 0x1b0
	// Has VTable
	class CCitadel_Modifier_Magic_Clarity_Buff : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
	public:
		uint64_t m_iAbilityID; // 0x168		
	private:
		[[maybe_unused]] uint8_t __pad0170[0x38]; // 0x170
	public:
		bool m_bAbilityLocked; // 0x1a8		
	};
};
