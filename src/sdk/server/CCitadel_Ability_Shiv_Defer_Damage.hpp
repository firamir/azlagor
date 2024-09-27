#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseShivAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbf0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flTotalPendingDamage"
	class CCitadel_Ability_Shiv_Defer_Damage : public server::CCitadelBaseShivAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0xe0]; // 0xae8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flTotalPendingDamage; // 0xbc8		
	private:
		[[maybe_unused]] uint8_t __pad0bcc[0x1c]; // 0xbcc
	public:
		entity2::GameTime_t m_flLastDeferredDamageApplicationTime; // 0xbe8		
	};
};
