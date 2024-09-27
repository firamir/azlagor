#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/INavSmartGoal.hpp"
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
	// Size: 0x28
	// Has VTable
	class CNavSmartGoal_PrimaryTest : public server::INavSmartGoal
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0x10		
		entity2::GameTime_t m_flTimeEnd; // 0x14		
		Vector m_vLastGoal; // 0x18		
	};
};
