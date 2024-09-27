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
	// Size: 0xc20
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "float m_flArrowSpeed"
	// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
	class CCitadel_Ability_WreckerTeleport : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hProjectile; // 0xaf0		
		// MNetworkEnable
		float m_flArrowSpeed; // 0xaf4		
		// MNetworkEnable
		entity2::GameTime_t m_flSnapAnglesBackTime; // 0xaf8		
		float m_flCastTimeDamage; // 0xafc		
		entity2::GameTime_t m_flCastTime; // 0xb00		
		bool m_bNeedsExplosion; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b05[0x3]; // 0xb05
	public:
		Vector m_vProjectileRemovedOrigin; // 0xb08		
		QAngle m_angCasterAnglesAtCastTime; // 0xb14		
		float m_flTravelDistance; // 0xb20		
	};
};
