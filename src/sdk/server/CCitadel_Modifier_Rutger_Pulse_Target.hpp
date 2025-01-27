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
	class CCitadel_Modifier_Rutger_Pulse_Target : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
	public:
		Vector m_vAuraCenter; // 0x1a0		
	};
};
