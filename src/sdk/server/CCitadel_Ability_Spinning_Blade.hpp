#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelProjectile;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd00
	// Has VTable
	class CCitadel_Ability_Spinning_Blade : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1f8]; // 0xae8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecOutgoingHits; // 0xce0		
		CHandle<server::CCitadelProjectile> m_hActiveProjectile; // 0xcf8		
	};
};
