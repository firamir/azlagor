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
	// Size: 0x108
	// Has VTable
	class CCitadel_Modifier_ShieldTracker_Base : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x28]; // 0xc0
	public:
		Vector m_vecShield; // 0xe8		
		float m_flShieldDamageTime; // 0xf4		
		float m_flShieldBreakTime; // 0xf8		
		float m_flShieldBreakHealAmount; // 0xfc		
		float m_flShieldBreakHealDone; // 0x100		
		bool m_bShieldHealingAfterBreak; // 0x104		
		bool m_bForceRegen; // 0x105		
	};
};
