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
	// Size: 0x2a0
	// Has VTable
	class CCitadel_Modifier_Gravity_Lasso_Self : public server::CCitadelModifier
	{
	public:
		bool m_bHasUsedBouncePad; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x7]; // 0xc1
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vCastTargets; // 0xc8		
	};
};
