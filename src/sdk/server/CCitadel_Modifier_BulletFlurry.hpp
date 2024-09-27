#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x210
	// Has VTable
	class CCitadel_Modifier_BulletFlurry : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
	public:
		float m_flRadius; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecShootTargets; // 0x1e0		
		int32_t m_nNumPlayersKilled; // 0x1f8		
		int32_t m_nShootIndex; // 0x1fc		
		int32_t m_nShootIndexNPC; // 0x200		
		int32_t m_nBurstShots; // 0x204		
		entity2::GameTime_t m_flNextAttackTime; // 0x208		
	};
};
