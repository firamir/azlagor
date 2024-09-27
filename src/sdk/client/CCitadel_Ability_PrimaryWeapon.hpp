#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EFireMode_t.hpp"
#include "client/ENextAttackDelayReason_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd48
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
	// MNetworkVarNames "int32 m_iClip"
	// MNetworkVarNames "int32 m_iBonusClip"
	// MNetworkVarNames "float m_flSpreadPenalty"
	// MNetworkVarNames "GameTime_t m_flZoomTime"
	// MNetworkVarNames "GameTime_t m_flZoomOutTime"
	// MNetworkVarNames "int8 m_iSpreadIndex"
	// MNetworkVarNames "int16 m_nShotRecoilIndex"
	// MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
	// MNetworkVarNames "bool m_bIsZoomed"
	// MNetworkVarNames "uint8 m_nBurstShotsRemaining"
	// MNetworkVarNames "uint32 m_nShotNumber"
	// MNetworkVarNames "bool m_bInReload"
	// MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
	// MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
	// MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
	// MNetworkVarNames "bool m_bCanActiveReload"
	// MNetworkVarNames "GameTime_t m_flLastAttackTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
	// MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
	// MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
	// MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
	// MNetworkVarNames "bool m_bInputPressedWhileSelected"
	// MNetworkVarNames "EFireMode_t m_eActiveFireMode"
	class CCitadel_Ability_PrimaryWeapon : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextPrimaryAttack; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iClip; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iBonusClip; // 0xc78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flSpreadPenalty; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flZoomTime; // 0xc80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flZoomOutTime; // 0xc84		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int8_t m_iSpreadIndex; // 0xc88		
	private:
		[[maybe_unused]] uint8_t __pad0c89[0x1]; // 0xc89
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int16_t m_nShotRecoilIndex; // 0xc8a		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xc8c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		bool m_bIsZoomed; // 0xc90		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		uint8_t m_nBurstShotsRemaining; // 0xc91		
	private:
		[[maybe_unused]] uint8_t __pad0c92[0x2]; // 0xc92
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		uint32_t m_nShotNumber; // 0xc94		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInReload; // 0xc98		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSingleShotReloadFirstBullet; // 0xc99		
	private:
		[[maybe_unused]] uint8_t __pad0c9a[0x2]; // 0xc9a
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTime_t m_reloadQueuedStartTime; // 0xc9c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flReloadAvailableTime; // 0xca0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanActiveReload; // 0xca4		
	private:
		[[maybe_unused]] uint8_t __pad0ca5[0x3]; // 0xca5
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flLastAttackTime; // 0xca8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xcac		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xcb0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flAttackDelayPauseTotalTime; // 0xcb4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xcb8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xcbc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		bool m_bInputPressedWhileSelected; // 0xcc0		
	private:
		[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::EFireMode_t m_eActiveFireMode; // 0xcc4		
		QAngle m_angRecoilAngles; // 0xcc8		
		QAngle m_angRecoilToAdd; // 0xcd4		
		QAngle m_angRecoilRecovery; // 0xce0		
		entity2::GameTime_t m_flRecoilStartTime; // 0xcec		
		float m_flRecoilRecoverySpeed; // 0xcf0		
		float m_flAddApproachSpeed; // 0xcf4		
		bool m_bFireBackwards; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0cf9[0x3]; // 0xcf9
	public:
		float m_currentSpread; // 0xcfc		
		float m_currentMaxSpread; // 0xd00		
		float m_currentFireSpread; // 0xd04		
		float m_flCurrentSpinRate; // 0xd08		
	private:
		[[maybe_unused]] uint8_t __pad0d0c[0x4]; // 0xd0c
	public:
		float m_fFireDuration; // 0xd10		
	private:
		[[maybe_unused]] uint8_t __pad0d14[0x1]; // 0xd14
	public:
		bool m_bFireOnEmpty; // 0xd15		
	private:
		[[maybe_unused]] uint8_t __pad0d16[0x2]; // 0xd16
	public:
		entity2::GameTime_t m_flNextDisarmSound; // 0xd18		
	};
};
