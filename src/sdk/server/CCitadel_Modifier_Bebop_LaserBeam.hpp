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
	// Size: 0x370
	// Has VTable
	class CCitadel_Modifier_Bebop_LaserBeam : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x270]; // 0xc0
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0x330		
	private:
		[[maybe_unused]] uint8_t __pad0334[0x4]; // 0x334
	public:
		Vector m_vStart; // 0x338		
		Vector m_vEnd; // 0x344		
		Vector m_vPrevEnd; // 0x350		
		float m_flAngleBetweenTrace; // 0x35c		
		float m_flDamagePerTick; // 0x360		
		entity2::GameTime_t m_flNextDamageTick; // 0x364		
		int32_t m_nTotalDamage; // 0x368		
	};
};
