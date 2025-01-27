#pragma once
#include "client/ShotID_t.hpp"
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
	// Size: 0x168
	// Has VTable
	// Is Abstract
	class CCitadel_Modifier_BaseEventProc : public server::CCitadelModifier
	{
	public:
		CUtlVector<server::CBaseEntity*> m_vecProcdUnitsThisShot; // 0xc0		
		CUtlVector<server::CBaseEntity*> m_vecTrackedUnitsThisFrame; // 0xd8		
		client::ShotID_t m_nLastShotId; // 0xf0		
	};
};
