#pragma once
#include "client/ConditionId_t.hpp"
#include "server/CAI_BaseNPC.hpp"
#include "server/CCitadelAbilityComponent.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include "server/CCitadelRegenComponent.hpp"
#include "server/WeakPoint_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1600
	// Has VTable
	// Is Abstract
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iTeam"
	// MNetworkIncludeByName "m_vecViewOffset"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
	// MNetworkVarNames "bool m_bMinion"
	// MNetworkVarNames "EHANDLE m_hLookTarget"
	// MNetworkVarNames "bool m_bBeamActive"
	// MNetworkVarNames "Vector m_vEyeBeamTarget"
	class CAI_CitadelNPC : public server::CAI_BaseNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad10a8[0x18]; // 0x10a8
	public:
		Vector m_vLastGroundEntityCheckPos; // 0x10c0		
	private:
		[[maybe_unused]] uint8_t __pad10cc[0x4]; // 0x10cc
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x10d0		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelRegenComponent"
		// MNetworkAlias "CCitadelRegenComponent"
		// MNetworkTypeAlias "CCitadelRegenComponent"
		server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x12d8		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1458		
	private:
		[[maybe_unused]] uint8_t __pad1470[0x4]; // 0x1470
	public:
		int32_t m_iBaseGoldReward; // 0x1474		
		int32_t m_iSkillShotReward; // 0x1478		
	private:
		[[maybe_unused]] uint8_t __pad147c[0x30]; // 0x147c
	public:
		CHandle<server::CCitadelBaseAbility> m_hAbilityOwner; // 0x14ac		
	private:
		[[maybe_unused]] uint8_t __pad14b0[0x48]; // 0x14b0
	public:
		// MNetworkEnable
		CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints; // 0x14f8		
		// MNetworkEnable
		bool m_bMinion; // 0x1548		
	private:
		[[maybe_unused]] uint8_t __pad1549[0x3]; // 0x1549
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hLookTarget; // 0x154c		
	private:
		[[maybe_unused]] uint8_t __pad1550[0x10]; // 0x1550
	public:
		int32_t m_iCoverGroupID; // 0x1560		
	private:
		[[maybe_unused]] uint8_t __pad1564[0x5c]; // 0x1564
	public:
		Vector m_vecSpawnOrigin; // 0x15c0		
	private:
		[[maybe_unused]] uint8_t __pad15cc[0x18]; // 0x15cc
	public:
		// MNetworkEnable
		bool m_bBeamActive; // 0x15e4		
	private:
		[[maybe_unused]] uint8_t __pad15e5[0x3]; // 0x15e5
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vEyeBeamTarget; // 0x15e8		
		
		// Static fields:
		static client::ConditionId_t &Get_COND_RECEIVED_AGGRO(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[0]->m_pInstance);};
		static client::ConditionId_t &Get_COND_STUNNED(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[1]->m_pInstance);};
		static client::ConditionId_t &Get_COND_FORCED_AGGRO(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[2]->m_pInstance);};
		static client::ConditionId_t &Get_COND_FORCED_CALM(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[3]->m_pInstance);};
		static client::ConditionId_t &Get_COND_IMMOBILIZED(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[4]->m_pInstance);};
		static client::ConditionId_t &Get_COND_DISARMED(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[5]->m_pInstance);};
		static client::ConditionId_t &Get_COND_CAN_MELEE_ATTACK(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[6]->m_pInstance);};
		static client::ConditionId_t &Get_COND_CAN_MELEE_ATTACK_CLOSE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[7]->m_pInstance);};
		static client::ConditionId_t &Get_COND_CAN_RANGE_ATTACK(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[8]->m_pInstance);};
		static client::ConditionId_t &Get_COND_RANGE_ATTACK_LOS_BLOCKED(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[9]->m_pInstance);};
		static client::ConditionId_t &Get_COND_RANGE_ATTACK_TOO_CLOSE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[10]->m_pInstance);};
		static client::ConditionId_t &Get_COND_RANGE_ATTACK_TOO_FAR(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[11]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TAKEN_DAMAGE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[12]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TAKEN_FLINCH_DAMAGE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[13]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_WAIT_RANDOM(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[14]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_NO_OP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[15]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_WAIT_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[16]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_PUSH_AWAY_FROM_BLOCKING_NPC(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[17]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[18]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH_TO_COVER_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[19]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_MOVE_TO_MELEE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[20]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_MOVE_TO_SHOOT_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[21]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER_AGRO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[22]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[23]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TURN_TOWARD_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[24]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[25]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_PUSH_AWAY_FROM_BLOCKING_NPC(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[26]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_PATH_ADVANCE_ON_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[27]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_MELEE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[28]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[29]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH_TO_COVER_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[30]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_FIND_PATH_TO_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[31]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_PATH_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[32]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_NAV_MESH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[33]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[34]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CROUCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[35]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_STAND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[36]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_WAIT_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[37]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_BUILD_PATH_TO_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[38]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[39]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_BEAM_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[40]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[41]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_WAIT_FOR_GROUND_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[42]->m_pInstance);};
	};
};
