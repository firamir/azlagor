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
	// Size: 0x200
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public server::CCitadelModifier
	{
	public:
		bool m_bAppliesSlow; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		CHandle<server::CBaseEntity> m_hFirstPartner; // 0xc4		
		CHandle<server::CBaseEntity> m_hSecondPartner; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecPartners; // 0xd0		
	};
};
