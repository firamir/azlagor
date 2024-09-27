#pragma once
#include "server/CCitadel_Modifier_Intrinsic_Base.hpp"
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
	// Size: 0x190
	// Has VTable
	class CCitadel_Modifier_ThrowSandProjectile : public server::CCitadel_Modifier_Intrinsic_Base
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00d8[0xa8]; // 0xd8
	public:
		Vector m_vInitialCastPosition; // 0x180		
	};
};
