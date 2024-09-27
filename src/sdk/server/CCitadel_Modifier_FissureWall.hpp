#pragma once
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
	// Size: 0x350
	// Has VTable
	class CCitadel_Modifier_FissureWall : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecFissureWallEntities; // 0x2f0		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecFisureEntitiesHit; // 0x308		
		int32_t m_nSegment; // 0x320		
		Vector m_vPosition; // 0x324		
		Vector m_vDirection; // 0x330		
		Vector m_vLeft; // 0x33c		
		float m_Length; // 0x348		
	};
};
