#pragma once
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xc80
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hActiveProjectile"
	class CAbility_Synth_PlasmaFlux : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		bool m_bTeleported; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af1[0x7]; // 0xaf1
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList; // 0xaf8		
		Vector m_vLastValidTeleportPosition; // 0xb10		
		entity2::GameTime_t m_flProjectileLaunchTime; // 0xb1c		
		entity2::GameTime_t m_flProjectileExpireTime; // 0xb20		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_hActiveProjectile; // 0xb24		
	};
};
