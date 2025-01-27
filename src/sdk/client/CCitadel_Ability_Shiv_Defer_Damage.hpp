#pragma once
#include "client/CCitadelBaseShivAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd58
	// Has VTable
	// 
	// MNetworkVarNames "float m_flTotalPendingDamage"
	class CCitadel_Ability_Shiv_Defer_Damage : public client::CCitadelBaseShivAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0xe0]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flTotalPendingDamage; // 0xd50		
	};
};
