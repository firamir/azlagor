#pragma once
#include "client/CAI_ScheduleBits.hpp"
#include "client/CRandStopwatch.hpp"
#include "client/CSimpleSimTimer.hpp"
#include "client/CTakeDamageResult.hpp"
#include "client/HitGroup_t.hpp"
#include "client/NPC_STATE.hpp"
#include "client/SquadSlotNPCEntry_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CAI_Scheduler.hpp"
#include "server/CBaseCombatCharacter.hpp"
#include "server/CUnreachableTargetList.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_AnimGraphServices;
};
namespace source2sdk::server
{
	struct CAI_BehaviorHost;
};
namespace source2sdk::server
{
	struct CAI_EnemyServices;
};
namespace source2sdk::server
{
	struct CAI_Motor;
};
namespace source2sdk::server
{
	struct CAI_Navigator;
};
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x10a8
	// Has VTable
	// 
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "NPC_STATE m_NPCState"
	// MNetworkVarNames "bool m_bFadeCorpse"
	// MNetworkVarNames "bool m_bImportantRagdoll"
	class CAI_BaseNPC : public server::CBaseCombatCharacter
	{
	private:
		[[maybe_unused]] uint8_t __pad0ac0[0x10]; // 0xac0
	public:
		bool m_bCheckContacts; // 0xad0		
		bool m_bIsUsingSmallHull; // 0xad1		
	private:
		[[maybe_unused]] uint8_t __pad0ad2[0x2]; // 0xad2
	public:
		Vector m_vecLastPosition; // 0xad4		
		float m_flLastPositionTolerance; // 0xae0		
		CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC; // 0xae4		
		CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs; // 0xae8		
		// MNetworkEnable
		client::NPC_STATE m_NPCState; // 0xb00		
		client::NPC_STATE m_nPreModifierNPCState; // 0xb04		
		client::NPC_STATE m_IdealNPCState; // 0xb08		
		entity2::GameTime_t m_flLastStateChangeTime; // 0xb0c		
	private:
		[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
	public:
		client::CAI_ScheduleBits m_Conditions; // 0xb18		
		client::CAI_ScheduleBits m_NonGatherConditions; // 0xb3c		
		client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb60		
		bool m_bForceConditionsGather; // 0xb84		
		bool m_bConditionsGathered; // 0xb85		
		bool m_bDoPostRestoreRefindPath; // 0xb86		
	private:
		[[maybe_unused]] uint8_t __pad0b87[0x1]; // 0xb87
	public:
		server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb88		
	private:
		[[maybe_unused]] uint8_t __pad0b90[0x8]; // 0xb90
	public:
		entity2::GameTime_t m_flBlinkTime; // 0xb98		
	private:
		[[maybe_unused]] uint8_t __pad0b9c[0x4]; // 0xb9c
	public:
		server::CAI_EnemyServices* m_pEnemyServices; // 0xba0		
		client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xba8		
		client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xbbc		
		entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xbc4		
		bool m_bSkippedChooseEnemy; // 0xbc8		
		bool m_bIgnoreUnseenEnemies; // 0xbc9		
	private:
		[[maybe_unused]] uint8_t __pad0bca[0x2]; // 0xbca
	public:
		CHandle<server::CBaseFilter> m_hEnemyFilter; // 0xbcc		
		CUtlSymbolLarge m_iszEnemyFilterName; // 0xbd0		
		CHandle<server::CBaseEntity> m_hTargetEnt; // 0xbd8		
		bool m_bClearTargetOnScheduleEnd; // 0xbdc		
	private:
		[[maybe_unused]] uint8_t __pad0bdd[0x3]; // 0xbdd
	public:
		entity2::GameTime_t m_flSoundWaitTime; // 0xbe0		
		int32_t m_nSoundPriority; // 0xbe4		
		bool m_bSuppressFootsteps; // 0xbe8		
	private:
		[[maybe_unused]] uint8_t __pad0be9[0x3]; // 0xbe9
	public:
		int32_t m_afCapability; // 0xbec		
		// MNetworkDisable
		float m_flGroundSpeed; // 0xbf0		
		entity2::GameTime_t m_flMoveWaitFinished; // 0xbf4		
		CHandle<server::CBaseEntity> m_hOpeningDoor; // 0xbf8		
	private:
		[[maybe_unused]] uint8_t __pad0bfc[0x4]; // 0xbfc
	public:
		server::CUnreachableTargetList m_UnreachableTargets; // 0xc00		
		CHandle<server::CBaseEntity> m_hPathObstructor; // 0xc20		
		float m_flJumpMaxRise; // 0xc24		
		float m_flJumpMaxDrop; // 0xc28		
		float m_flJumpMaxDist; // 0xc2c		
		float m_flJumpMinDist; // 0xc30		
	private:
		[[maybe_unused]] uint8_t __pad0c34[0x4]; // 0xc34
	public:
		server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xc38		
		bool m_bAnimGraphIsAnimatingDeath; // 0xc40		
		bool m_bDeferredNavigation; // 0xc41		
	private:
		[[maybe_unused]] uint8_t __pad0c42[0x6]; // 0xc42
	public:
		server::CAI_Scheduler m_Scheduler; // 0xc48		
		server::CAI_Navigator* m_pNavigatorNavmesh; // 0xcf0		
	private:
		[[maybe_unused]] uint8_t __pad0cf8[0x18]; // 0xcf8
	public:
		server::CAI_Motor* m_pMotor; // 0xd10		
		entity2::GameTime_t m_flTimeLastMovement; // 0xd18		
		entity2::GameTime_t m_flTimeLastFootstep; // 0xd1c		
		client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xd20		
		CUtlSymbolLarge m_strNavRestrictionVolume; // 0xd28		
		Vector m_vDefaultEyeOffset; // 0xd30		
		int32_t m_afMemory; // 0xd3c		
		entity2::GameTime_t m_flLastAttackTime; // 0xd40		
		entity2::GameTime_t m_flLastTookDamageTime; // 0xd44		
		entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xd48		
		Vector m_vecLastTookDamageAttackVector; // 0xd4c		
		CUtlSymbolLarge m_iszSquadName; // 0xd58		
		CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots; // 0xd60		
	private:
		[[maybe_unused]] uint8_t __pad0d78[0x8]; // 0xd78
	public:
		client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xd80		
		client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xd84		
		client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xd88		
		client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xd8c		
		client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xd90		
		int32_t m_nLastHitDestructiblePartIndex; // 0xd94		
		int32_t m_nPrevHealthDuringModifyDamage; // 0xd98		
		// MNetworkEnable
		bool m_bFadeCorpse; // 0xd9c		
		// MNetworkEnable
		bool m_bImportantRagdoll; // 0xd9d		
	private:
		[[maybe_unused]] uint8_t __pad0d9e[0x2]; // 0xd9e
	public:
		client::CTakeDamageResult m_deathBlowResult; // 0xda0		
		bool m_bDidDeathCleanup; // 0xdb8		
		bool m_bReceivedEnemyDeadNotification; // 0xdb9		
	private:
		[[maybe_unused]] uint8_t __pad0dba[0x2]; // 0xdba
	public:
		entity2::GameTime_t m_flWaitFinished; // 0xdbc		
		bool m_fNoDamageDecal; // 0xdc0		
	private:
		[[maybe_unused]] uint8_t __pad0dc1[0x7]; // 0xdc1
	public:
		CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments; // 0xdc8		
		entity2::CEntityIOOutput m_OnDamaged; // 0xdd0		
		entity2::CEntityIOOutput m_OnDeath; // 0xdf8		
		entity2::CEntityIOOutput m_OnQuarterHealth; // 0xe20		
		entity2::CEntityIOOutput m_OnHalfHealth; // 0xe48		
		entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xe70		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy; // 0xe98		
		entity2::CEntityIOOutput m_OnLostEnemy; // 0xec0		
		entity2::CEntityIOOutput m_OnLostPlayer; // 0xee8		
		entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0xf10		
		entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0xf38		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0xf60		
		entity2::CEntityIOOutput m_OnUse; // 0xf88		
		entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0xfb0		
		entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0xfd8		
		entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1000		
		entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1028		
		uint64_t m_nAITraceMask; // 0x1050		
		float m_flThinkTime; // 0x1058		
	private:
		[[maybe_unused]] uint8_t __pad105c[0x44]; // 0x105c
	public:
		int32_t m_nDebugCurIndex; // 0x10a0		
		struct 
		{
			uint8_t m_bInvokingBehaviorIsValidEnemy: 1; 			
			uint8_t m_bInvokingBehaviorBestEnemy: 1; 			
			uint8_t m_bInvokingBehaviorShouldIgnoreSound: 1; 			
			uint8_t m_bInvokingBehaviorIsInterruptable: 1; 			
			uint8_t m_bInvokingBehaviorOnTakeDamage_React_Alive: 1; 			
			uint8_t m_bInvokingBehaviorQueryHearSound: 1; 			
			uint8_t m_bInvokingBehaviorOnCalcBaseMove: 1; 			
			uint8_t m_bInvokingBehaviorShouldAlwaysGatherEnvironmentalConditions: 1; 			
			uint8_t m_bInvokingBehaviorAimGun: 1; 			
			uint8_t __pad0: 1;
		}; // 10 bits
		
		// Static fields:
		static CUtlSymbolLarge &Get_sm_iszPlayerSquad(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_sm_nDebugBits(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
		static int32_t &Get_sm_nDebugPauseIndex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
		
		// Datamap fields:
		// CAI_Senses m_pSenses; // 0xb10
		// void m_pSquad; // 0xd78
		// void m_vecTaskThinkTimes; // 0x1060
		// CAI_Pathfinder m_pPathfinderNavmesh; // 0xcf8
		// void m_DestructiblePartsRuntimeDataByHitGroup; // 0x1078
		// CUtlSymbolLarge InputSetEnemyFilter; // 0x0
		// int32_t InputOverrideHealth; // 0x0
		// int32_t InputSetHealth; // 0x0
		// CUtlSymbolLarge InputSetSquad; // 0x0
		// CUtlSymbolLarge InputForgetEntity; // 0x0
		// void InputBreak; // 0x0
		// void InputGagEnable; // 0x0
		// void InputGagDisable; // 0x0
		// void InputInsideTransition; // 0x0
		// void InputOutsideTransition; // 0x0
		// CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
		// CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
		// void CAI_BaseNPCCallNPCThink; // 0x0
		// void CAI_BaseNPCCallNPCPerTickThink; // 0x0
		// void CAI_BaseNPCBlinkThink; // 0x0
	};
};
