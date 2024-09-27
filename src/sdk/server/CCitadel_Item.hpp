#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb08
	// Has VTable
	// 
	// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
	class CCitadel_Item : public server::CCitadelBaseAbility
	{
	public:
		bool m_bEquipped; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x7]; // 0xae9
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecComponentsConsumed; // 0xaf0		
	};
};
