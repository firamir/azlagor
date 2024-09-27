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
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "float m_flVertOffset"
	// MNetworkVarNames "float m_flHorizGap"
	// MNetworkVarNames "Vector m_vStartPos"
	// MNetworkVarNames "Vector m_vTargetPos"
	// MNetworkVarNames "QAngle m_angFacing"
	// MNetworkVarNames "int m_nMantleTypeIndex"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	class CCitadel_Ability_Mantle : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flVertOffset; // 0xae8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flHorizGap; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStartPos; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vTargetPos; // 0xafc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angFacing; // 0xb08		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nMantleTypeIndex; // 0xb14		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStartTime; // 0xb18		
	};
};
