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
	// Size: 0x228
	// Has VTable
	class CCitadel_Modifier_HookTarget : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x4]; // 0xc0
	public:
		float m_flCurrentVerticalSpeed; // 0xc4		
		bool m_bSuccess; // 0xc8		
		bool m_bSameTeam; // 0xc9		
		bool m_bPlayedApproachingWhoosh; // 0xca		
	private:
		[[maybe_unused]] uint8_t __pad00cb[0x1]; // 0xcb
	public:
		float m_flInitialTravelDistance; // 0xcc		
	};
};