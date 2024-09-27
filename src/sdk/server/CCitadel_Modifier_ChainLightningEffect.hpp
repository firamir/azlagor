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
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_ChainLightningEffect : public server::CCitadelModifier
	{
	public:
		int32_t m_nChainCount; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities; // 0xc8		
		CUtlVector<CHandle<server::CBaseEntity>> m_hUnhitEnts; // 0xe0		
		Vector m_vLastSource; // 0xf8		
	};
};
