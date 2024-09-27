#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdd0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "float m_flArrowSpeed"
	// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
	// MNetworkVarNames "int m_nBonusTechPower"
	class CCitadel_Ability_GuidedArrow : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x8]; // 0xc70
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hProjectile; // 0xc78		
		// MNetworkEnable
		float m_flArrowSpeed; // 0xc7c		
		// MNetworkEnable
		entity2::GameTime_t m_flSnapAnglesBackTime; // 0xc80		
		// MNetworkEnable
		int32_t m_nBonusTechPower; // 0xc84		
		entity2::GameTime_t m_flCastTime; // 0xc88		
		bool m_bNeedsExplosion; // 0xc8c		
	private:
		[[maybe_unused]] uint8_t __pad0c8d[0x3]; // 0xc8d
	public:
		Vector m_vProjectileRemovedOrigin; // 0xc90		
		QAngle m_angCasterAnglesAtCastTime; // 0xc9c		
		float m_flTravelDistance; // 0xca8		
		bool m_bInKillFlow; // 0xcac		
	private:
		[[maybe_unused]] uint8_t __pad0cad[0x3]; // 0xcad
	public:
		float m_flProjectileTurnVel; // 0xcb0		
	};
};
