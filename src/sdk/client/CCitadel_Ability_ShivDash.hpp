#pragma once
#include "client/CCitadelBaseShivAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xef0
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDashDirection"
	// MNetworkVarNames "bool m_bIsDashing"
	// MNetworkVarNames "bool m_bStartedInAir"
	class CCitadel_Ability_ShivDash : public client::CCitadelBaseShivAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStartPosition; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vDashDirection; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bIsDashing; // 0xc88		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bStartedInAir; // 0xc89		
	private:
		[[maybe_unused]] uint8_t __pad0c8a[0x6]; // 0xc8a
	public:
		CUtlVector<CEntityIndex> m_vecHitEnemies; // 0xc90		
		Vector m_vecLastPosition; // 0xca8		
		int32_t m_nReductionsLeft; // 0xcb4		
	private:
		[[maybe_unused]] uint8_t __pad0cb8[0x230]; // 0xcb8
	public:
		entity2::GameTime_t m_flStuckTime; // 0xee8		
	};
};
