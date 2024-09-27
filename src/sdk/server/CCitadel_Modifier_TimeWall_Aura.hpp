#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBulletTimeWarp;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x180
	// Has VTable
	class CCitadel_Modifier_TimeWall_Aura : public server::CCitadelModifierAura
	{
	private:
		[[maybe_unused]] uint8_t __pad00e0[0x70]; // 0xe0
	public:
		CUtlVector<CHandle<server::CCitadelBulletTimeWarp>> m_vecTimeWarps; // 0x150		
	};
};
