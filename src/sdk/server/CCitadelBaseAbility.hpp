#pragma once
#include "client/EAbilitySlots_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseEntity.hpp"
#include "server/CCitadelModifier.hpp"
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
	// Size: 0xae8
	// Has VTable
	// Is Abstract
	// 
	// MNetworkIncludeByName "m_flTimeScale"
	// MNetworkExcludeByName "m_angRotation"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_cellX"
	// MNetworkExcludeByName "m_cellY"
	// MNetworkExcludeByName "m_cellZ"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkExcludeByName "m_flSimulationTime"
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_nForceBone"
	// MNetworkExcludeByName "m_nHitboxSet"
	// MNetworkExcludeByName "m_baseLayer.m_hSequence"
	// MNetworkExcludeByName "m_vecForce"
	// MNetworkExcludeByName "m_vecMaxs"
	// MNetworkExcludeByName "m_vecMins"
	// MNetworkExcludeByName "m_vecOrigin"
	// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
	// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
	// MNetworkExcludeByName "m_vLookTargetPosition"
	// MNetworkExcludeByName "m_MoveCollide"
	// MNetworkExcludeByName "m_MoveType"
	// MNetworkExcludeByName "m_Gender"
	// MNetworkExcludeByName "m_flElasticity"
	// MNetworkExcludeByName "m_nMinCPULevel"
	// MNetworkExcludeByName "m_nMinGPULevel"
	// MNetworkExcludeByName "m_nMaxCPULevel"
	// MNetworkExcludeByName "m_nMaxGPULevel"
	// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
	// MNetworkExcludeByName "m_ubInterpolationFrame"
	// MNetworkExcludeByName "m_flScale"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkUserGroupProxy "CCitadelBaseAbility"
	// MNetworkUserGroupProxy "CCitadelBaseAbility"
	// MNetworkOverride "m_flTimeScale"
	// MNetworkVarNames "bool m_bChanneling"
	// MNetworkVarNames "bool m_bInCastDelay"
	// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
	// MNetworkVarNames "int m_nUpgradeBits"
	// MNetworkVarNames "int m_iBucketID"
	// MNetworkVarNames "bool m_bToggleState"
	// MNetworkVarNames "GameTime_t m_flToggledTime"
	// MNetworkVarNames "GameTime_t m_flCooldownStart"
	// MNetworkVarNames "GameTime_t m_flCooldownEnd"
	// MNetworkVarNames "GameTime_t m_flCastCompletedTime"
	// MNetworkVarNames "GameTime_t m_flChannelStartTime"
	// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
	// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
	// MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
	// MNetworkVarNames "int m_iRemainingCharges"
	// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
	// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
	// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
	// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
	// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
	// MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
	// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
	// MNetworkVarNames "bool m_bSelectionModeIsAltMode"
	class CCitadelBaseAbility : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0xd0]; // 0x4d8
	public:
		CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecIntrinsicModifiers; // 0x5a8		
		CModifierHandleTyped<server::CCitadelModifier> m_pCastDelayAutoModifier; // 0x5c0		
		CModifierHandleTyped<server::CCitadelModifier> m_pChannelAutoModifier; // 0x5d8		
		CGlobalSymbol m_strUsedCastGraphParam; // 0x5f0		
		int32_t m_nCastParamNeedsResetTick; // 0x5f8		
		bool m_bIsCoolingDownInternal; // 0x5fc		
	private:
		[[maybe_unused]] uint8_t __pad05fd[0x3]; // 0x5fd
	public:
		entity2::GameTime_t m_flCancelLockoutTime; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0604[0x1c]; // 0x604
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnChannelingChanged"
		bool m_bChanneling; // 0x620		
		// MNetworkEnable
		// MNetworkChangeCallback "OnInCastDelayChanged"
		bool m_bInCastDelay; // 0x621		
	private:
		[[maybe_unused]] uint8_t __pad0622[0x6]; // 0x622
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnAbilityImbuedChanged"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecImbuedByAbilitiyIDs; // 0x628		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpgradeBitsChanged"
		// MNetworkPriority "32"
		int32_t m_nUpgradeBits; // 0x640		
		// MNetworkEnable
		int32_t m_iBucketID; // 0x644		
		// MNetworkEnable
		bool m_bToggleState; // 0x648		
	private:
		[[maybe_unused]] uint8_t __pad0649[0x3]; // 0x649
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flToggledTime; // 0x64c		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flCooldownStart; // 0x650		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flCooldownEnd; // 0x654		
		// MNetworkEnable
		entity2::GameTime_t m_flCastCompletedTime; // 0x658		
		// MNetworkEnable
		entity2::GameTime_t m_flChannelStartTime; // 0x65c		
		// MNetworkEnable
		entity2::GameTime_t m_flCastDelayStartTime; // 0x660		
		// MNetworkEnable
		// MNetworkChangeCallback "OnAbilitySlotChanged"
		client::EAbilitySlots_t m_eAbilitySlot; // 0x664		
	private:
		[[maybe_unused]] uint8_t __pad0666[0x2]; // 0x666
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flPostCastDelayEndTime; // 0x668		
		// MNetworkEnable
		// MNetworkPriority "32"
		int32_t m_iRemainingCharges; // 0x66c		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flChargeRechargeStart; // 0x670		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flChargeRechargeEnd; // 0x674		
		// MNetworkEnable
		entity2::GameTime_t m_flMovementControlActiveTime; // 0x678		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSelectedChangedTime; // 0x67c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAltCastHoldStartTime; // 0x680		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x684		
		// MNetworkEnable
		CUtlStringToken m_nImbuedAbilityID; // 0x688		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSelectionModeIsAltMode; // 0x68c		
	private:
		[[maybe_unused]] uint8_t __pad068d[0x3]; // 0x68d
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEnemyHeroesDamaged; // 0x690		
		float m_flPreviousEffectiveCooldown; // 0x6a8		
		
		// Datamap fields:
		// int32_t slot; // 0x7fffffff
		// int32_t bucket_id; // 0x7fffffff
		// float time_scale; // 0x7fffffff
	};
};
