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
	// Size: 0xc08
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hActiveProjectile"
	class CCitadel_Ability_Perched_Predator : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x118]; // 0xae8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_hActiveProjectile; // 0xc00		
	};
};
