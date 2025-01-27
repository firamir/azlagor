#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseToggle.hpp"
#include "server/MoveLinearAuthoredPos_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x890
	// Has VTable
	// 
	// MNetworkIncludeByName "m_fFlags"
	// MNetworkIncludeByName "m_vecVelocity"
	// MNetworkOverride "m_fFlags CBaseEntity"
	class CFuncMoveLinear : public server::CBaseToggle
	{
	public:
		server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x7e8		
		QAngle m_angMoveEntitySpace; // 0x7ec		
		Vector m_vecMoveDirParentSpace; // 0x7f8		
	private:
		[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
	public:
		CUtlSymbolLarge m_soundStart; // 0x808		
		CUtlSymbolLarge m_soundStop; // 0x810		
		CUtlSymbolLarge m_currentSound; // 0x818		
		float m_flBlockDamage; // 0x820		
		float m_flStartPosition; // 0x824		
	private:
		[[maybe_unused]] uint8_t __pad0828[0x8]; // 0x828
	public:
		entity2::CEntityIOOutput m_OnFullyOpen; // 0x830		
		entity2::CEntityIOOutput m_OnFullyClosed; // 0x858		
		bool m_bCreateMovableNavMesh; // 0x880		
		bool m_bCreateNavObstacle; // 0x881		
		
		// Datamap fields:
		// float m_flMoveDistance; // 0x76c
		// bool movewithoutpushingblockers; // 0x7fffffff
		// void CFuncMoveLinearNavObstacleThink; // 0x0
		// void CFuncMoveLinearNavMovableThink; // 0x0
		// void InputOpen; // 0x0
		// void InputClose; // 0x0
		// float InputSetPosition; // 0x0
		// float InputSetSpeed; // 0x0
		// CUtlSymbolLarge InputTeleportToTarget; // 0x0
		// float InputResetPosition; // 0x0
		// float InputSetMoveDistanceFromStart; // 0x0
		// float InputSetMoveDistanceFromEnd; // 0x0
		// void CFuncMoveLinearStopMoveSound; // 0x0
	};
};
