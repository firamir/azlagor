#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xc90
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecCastStartPos"
	// MNetworkVarNames "Vector m_vecDashStartPos"
	// MNetworkVarNames "Vector m_vecDashEndPos"
	// MNetworkVarNames "QAngle m_angDashStartAng"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
	// MNetworkVarNames "Vector m_rgTargetPos"
	// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
	class CCitadel_Ability_TangoTether : public server::CCitadelBaseAbility
	{
	public:
		int32_t m_iTargetPosIndex; // 0xae8		
		CHandle<server::CBaseEntity> m_hLockOnTarget; // 0xaec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCastStartPos; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashStartPos; // 0xafc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashEndPos; // 0xb08		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angDashStartAng; // 0xb14		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xb20		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleStartTime; // 0xb24		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleArriveTime; // 0xb28		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTarget; // 0xb2c		
		float m_flVelSpring; // 0xb30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGrappleShotAttackTime; // 0xb34		
		int32_t m_nTicksNotMoving; // 0xb38		
		Vector m_vecPrevPos; // 0xb3c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		// MNetworkEncoder "coord"
		Vector m_rgTargetPos[20]; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_rgTargetPosTime[20]; // 0xc38		
		client::ParticleIndex_t m_nGrappleTravelEffect; // 0xc88		
	};
};
