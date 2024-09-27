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
	// Size: 0xd88
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_anglesCharging"
	// MNetworkVarNames "GameTime_t m_flChargeStartTime"
	// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
	// MNetworkVarNames "bool bHitAnEnemy"
	class CCitadel_Ability_Bull_Charge : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xae8		
		bool m_bGainedWeaponPowerBuff; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b01[0x26f]; // 0xb01
	public:
		// MNetworkEnable
		QAngle m_anglesCharging; // 0xd70		
		// MNetworkEnable
		// MNetworkChangeCallback "OnChargingStateChanged"
		entity2::GameTime_t m_flChargeStartTime; // 0xd7c		
		// MNetworkEnable
		entity2::GameTime_t m_flFastChargeEndTime; // 0xd80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool bHitAnEnemy; // 0xd84		
	};
};
