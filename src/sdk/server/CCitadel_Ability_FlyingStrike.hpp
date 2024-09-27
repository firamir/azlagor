#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseYamatoAbility.hpp"
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
	// Size: 0xd40
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bShadowFormCast"
	// MNetworkVarNames "Vector m_vecCastStartPos"
	// MNetworkVarNames "Vector m_vecDashStartPos"
	// MNetworkVarNames "QAngle m_angDashStartAng"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "GameTime_t m_flEndAttackTime"
	// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
	// MNetworkVarNames "Vector m_rgTargetPos"
	// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
	class CCitadel_Ability_FlyingStrike : public server::CCitadelBaseYamatoAbility
	{
	public:
		int32_t m_iTargetPosIndex; // 0xaf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShadowFormCast; // 0xaf4		
	private:
		[[maybe_unused]] uint8_t __pad0af5[0x3]; // 0xaf5
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCastStartPos; // 0xaf8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashStartPos; // 0xb04		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angDashStartAng; // 0xb10		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xb1c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flEndAttackTime; // 0xb20		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleStartTime; // 0xb24		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleArriveTime; // 0xb28		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTarget; // 0xb2c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGrappleShotAttackTime; // 0xb30		
		float m_flVelSpring; // 0xb34		
		int32_t m_nTicksNotMoving; // 0xb38		
		Vector m_vecPrevPos; // 0xb3c		
		CHandle<server::CBaseEntity> m_hAttackTarget; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		// MNetworkEncoder "coord"
		Vector m_rgTargetPos[20]; // 0xb4c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_rgTargetPosTime[20]; // 0xc3c		
	private:
		[[maybe_unused]] uint8_t __pad0c8c[0xac]; // 0xc8c
	public:
		client::ParticleIndex_t m_nGrappleTravelEffect; // 0xd38		
	};
};
