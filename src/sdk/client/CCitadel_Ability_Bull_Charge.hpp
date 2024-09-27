#pragma once
#include "client/C_CitadelBaseAbility.hpp"
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
	// MNetworkVarNames "QAngle m_anglesCharging"
	// MNetworkVarNames "GameTime_t m_flChargeStartTime"
	// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
	// MNetworkVarNames "bool bHitAnEnemy"
	class CCitadel_Ability_Bull_Charge : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x268]; // 0xc70
	public:
		// MNetworkEnable
		QAngle m_anglesCharging; // 0xed8		
		// MNetworkEnable
		// MNetworkChangeCallback "OnChargingStateChanged"
		entity2::GameTime_t m_flChargeStartTime; // 0xee4		
		// MNetworkEnable
		entity2::GameTime_t m_flFastChargeEndTime; // 0xee8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool bHitAnEnemy; // 0xeec		
	};
};
