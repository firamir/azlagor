#pragma once
#include "client/ConditionId_t.hpp"
#include "client/ETier3Phase_t.hpp"
#include "client/ETier3State_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "server/CAI_CitadelNPC.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x16b8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "QAngle m_angTargeting1"
	// MNetworkVarNames "QAngle m_angTargeting2"
	// MNetworkVarNames "int m_nElectricBeamCasts"
	// MNetworkVarNames "ETier3State_t m_eAliveState"
	// MNetworkVarNames "ETier3Phase_t m_ePhase"
	class CNPC_Boss_Tier3 : public server::CAI_CitadelNPC
	{
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x1600		
	private:
		[[maybe_unused]] uint8_t __pad1604[0x30]; // 0x1604
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		QAngle m_angTargeting1; // 0x1634		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		QAngle m_angTargeting2; // 0x1640		
		// MNetworkEnable
		int32_t m_nElectricBeamCasts; // 0x164c		
	private:
		[[maybe_unused]] uint8_t __pad1650[0x20]; // 0x1650
	public:
		entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1670		
		CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1698		
	private:
		[[maybe_unused]] uint8_t __pad16a0[0x4]; // 0x16a0
	public:
		// MNetworkEnable
		client::ETier3State_t m_eAliveState; // 0x16a4		
	private:
		[[maybe_unused]] uint8_t __pad16a8[0x4]; // 0x16a8
	public:
		// MNetworkEnable
		client::ETier3Phase_t m_ePhase; // 0x16ac		
		
		// Static fields:
		static client::ConditionId_t &Get_COND_T3BOSS_CAN_ELECTRIC_BEAM(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[0]->m_pInstance);};
		static client::ConditionId_t &Get_COND_T3BOSS_OVER_CORE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[1]->m_pInstance);};
		static client::ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_1(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[2]->m_pInstance);};
		static client::ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_2(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_STAND_STILL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[5]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[6]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM_QUICK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[7]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_RETURN_TO_HOME_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[8]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_FALL_BACK_TO_CORE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[9]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_RANDOM_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[10]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[11]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[12]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[13]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_FIRING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[14]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_DYING_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[15]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_WAIT_AT_DYING_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[16]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_VULNERABLE_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[17]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_ARRIVE_AT_VULNERABLE_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[18]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_HOME_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[19]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_RANDOM_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[20]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[21]->m_pInstance);};
		
		// Datamap fields:
		// void m_vecStartingPosition; // 0x1610
		// int32_t m_nDyingEndCoverPointID; // 0x1620
		// int32_t m_nVulnerableCoverPointID; // 0x1624
	};
};
