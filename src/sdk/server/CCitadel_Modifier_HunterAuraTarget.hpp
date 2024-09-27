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
	// Size: 0x188
	// Has VTable
	class CCitadel_Modifier_HunterAuraTarget : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
	public:
		float m_flDebuffScale; // 0x168		
	private:
		[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_AuraModifierHandle; // 0x170		
	};
};
