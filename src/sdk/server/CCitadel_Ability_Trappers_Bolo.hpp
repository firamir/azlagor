#pragma once
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xc60
	// Has VTable
	class CCitadel_Ability_Trappers_Bolo : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x38]; // 0xae8
	public:
		CHandle<server::CBaseEntity> m_hProjectile; // 0xb20		
		CHandle<server::CBaseEntity> m_hNextTarget; // 0xb24		
		CUtlVector<CHandle<server::CBaseEntity>> m_hHitTargets; // 0xb28		
		int32_t m_iBounces; // 0xb40		
		bool m_bReturning; // 0xb44		
	};
};
