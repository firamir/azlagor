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
	// Size: 0xcc8
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hHookVictim"
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "Vector m_vecHookTargetStartPos"
	class CCitadel_Ability_Hook : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "HookVictimChanged"
		CHandle<server::CBaseEntity> m_hHookVictim; // 0xae8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hProjectile; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecHookTargetStartPos; // 0xaf0		
		bool m_bProjectileHit; // 0xafc		
	private:
		[[maybe_unused]] uint8_t __pad0afd[0x3]; // 0xafd
	public:
		float m_flLastUppercutRestoreTime; // 0xb00		
	};
};
