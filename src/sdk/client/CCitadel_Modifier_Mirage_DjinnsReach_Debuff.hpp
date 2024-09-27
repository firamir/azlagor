#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x200
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public client::CCitadelModifier
	{
	public:
		bool m_bAppliesSlow; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		CHandle<client::C_BaseEntity> m_hFirstPartner; // 0xc4		
		CHandle<client::C_BaseEntity> m_hSecondPartner; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecPartners; // 0xd0		
	};
};
