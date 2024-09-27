#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t.hpp"
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
	class CCitadel_Modifier_ExplosiveShots : public server::CCitadelModifier
	{
	public:
		CUtlVector<server::CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t> m_vecHitEnts; // 0xc0		
		bool m_bExplosionCanHitMultipleTimes; // 0xd8		
	};
};
