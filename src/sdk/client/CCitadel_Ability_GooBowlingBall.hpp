#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EViscousBowlingBallState_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelViscousBall;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1158
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
	// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flNextWallCheck"
	// MNetworkVarNames "GameTime_t m_flRollStartTime"
	// MNetworkVarNames "GameTime_t m_flWallExitTime"
	// MNetworkVarNames "Vector m_vecWallExitVelocity"
	class CCitadel_Ability_GooBowlingBall : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x348]; // 0xc70
	public:
		bool m_bHasAirJumped; // 0xfb8		
		bool m_bIsShowingBall; // 0xfb9		
	private:
		[[maybe_unused]] uint8_t __pad0fba[0x2]; // 0xfba
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<client::C_CitadelViscousBall> m_hBall; // 0xfbc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::EViscousBowlingBallState_t m_eRollingState; // 0xfc0		
	private:
		[[maybe_unused]] uint8_t __pad0fc1[0x3]; // 0xfc1
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextStateTime; // 0xfc4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextWallCheck; // 0xfc8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flRollStartTime; // 0xfcc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flWallExitTime; // 0xfd0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		Vector m_vecWallExitVelocity; // 0xfd4		
	private:
		[[maybe_unused]] uint8_t __pad0fe0[0x8]; // 0xfe0
	public:
		client::ParticleIndex_t m_nDirectionParticleIndex; // 0xfe8		
	};
};
