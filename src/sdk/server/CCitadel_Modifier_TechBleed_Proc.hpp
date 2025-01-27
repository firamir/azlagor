#pragma once
#include "server/CCitadel_Modifier_BaseEventProc.hpp"
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
	// Size: 0x258
	// Has VTable
	class CCitadel_Modifier_TechBleed_Proc : public server::CCitadel_Modifier_BaseEventProc
	{
	public:
		float m_flDamage; // 0x168		
		int32_t m_nDamageTick; // 0x16c		
		CHandle<server::CBaseEntity> m_hTarget; // 0x170		
	};
};
