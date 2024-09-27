#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb68
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flParryStartTime"
	// MNetworkVarNames "bool m_bAttackParried"
	// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
	class CCitadel_Ability_MeleeParry : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flParryStartTime; // 0xae8		
		// MNetworkEnable
		bool m_bAttackParried; // 0xaec		
	private:
		[[maybe_unused]] uint8_t __pad0aed[0x3]; // 0xaed
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flParrySuccessTime; // 0xaf0		
	};
};
