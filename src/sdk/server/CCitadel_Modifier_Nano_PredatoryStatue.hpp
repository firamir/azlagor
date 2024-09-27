#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x300
	// Has VTable
	class CCitadel_Modifier_Nano_PredatoryStatue : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x2c]; // 0xc0
	public:
		entity2::GameTime_t m_GameTimeEnabled; // 0xec		
		entity2::GameTime_t m_LastCatInAreaTime; // 0xf0		
		bool m_bIsAttacking; // 0xf4		
	private:
		[[maybe_unused]] uint8_t __pad00f5[0x3]; // 0xf5
	public:
		int32_t m_iTargetID; // 0xf8		
	};
};
