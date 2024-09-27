#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelAnimatingModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc58
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "float m_flArrowSpeed"
	// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
	// MNetworkVarNames "int m_nBonusTechPower"
	class CCitadel_Ability_GuidedArrow : public server::CCitadelBaseAbility
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
		// MNetworkEnable
		int32_t m_nBonusTechPower; // 0xafc		
		CHandle<server::CCitadelAnimatingModelEntity> m_hOwl; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b04[0xc]; // 0xb04
	public:
		entity2::GameTime_t m_flCastTime; // 0xb10		
		bool m_bNeedsExplosion; // 0xb14		
	private:
		[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
	public:
		Vector m_vProjectileRemovedOrigin; // 0xb18		
		QAngle m_angCasterAnglesAtCastTime; // 0xb24		
		float m_flTravelDistance; // 0xb30		
		bool m_bInKillFlow; // 0xb34		
	private:
		[[maybe_unused]] uint8_t __pad0b35[0x3]; // 0xb35
	public:
		float m_flProjectileTurnVel; // 0xb38		
	};
};
