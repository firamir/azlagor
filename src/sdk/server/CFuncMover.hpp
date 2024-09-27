#pragma once
#include "client/SolidType_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include "server/CFuncMover__Move_t.hpp"
#include "server/CFuncMover__OrientationUpdate_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CMoverPathNode;
};
namespace source2sdk::server
{
	struct CPathMover;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 16
	// Size: 0x870
	// Has VTable
	class CFuncMover : public server::CBaseModelEntity
	{
	public:
		bool m_bCreateMovableNavMesh; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0769[0x7]; // 0x769
	public:
		CUtlSymbolLarge m_iszPathName; // 0x770		
		CHandle<server::CPathMover> m_hPathMover; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad077c[0x4]; // 0x77c
	public:
		CUtlSymbolLarge m_iszPathNodeStart; // 0x780		
		server::CFuncMover__Move_t m_eMoveType; // 0x788		
		bool m_bIsReversing; // 0x78c		
	private:
		[[maybe_unused]] uint8_t __pad078d[0x3]; // 0x78d
	public:
		Vector m_vTarget; // 0x790		
		float m_flStartSpeed; // 0x79c		
		float m_flPathLocation; // 0x7a0		
		float m_flT; // 0x7a4		
		int32_t m_nCurrentNodeIndex; // 0x7a8		
		int32_t m_nPreviousNodeIndex; // 0x7ac		
		bool m_bFixedOrientation; // 0x7b0		
		bool m_bFixedPitch; // 0x7b1		
		client::SolidType_t m_eSolidType; // 0x7b2		
		bool m_bIsMoving; // 0x7b3		
		float m_flTimeToReachMaxSpeed; // 0x7b4		
		float m_flDistanceToReachMaxSpeed; // 0x7b8		
		float m_flTimeToReachZeroSpeed; // 0x7bc		
		float m_flDistanceToReachZeroSpeed; // 0x7c0		
		entity2::GameTime_t m_flTimeMovementStart; // 0x7c4		
		entity2::GameTime_t m_flTimeMovementStop; // 0x7c8		
		CHandle<server::CMoverPathNode> m_hStopAtNode; // 0x7cc		
		float m_flPathLocationToBeginStop; // 0x7d0		
	private:
		[[maybe_unused]] uint8_t __pad07d4[0x4]; // 0x7d4
	public:
		CUtlSymbolLarge m_iszStartForwardSound; // 0x7d8		
		CUtlSymbolLarge m_iszLoopForwardSound; // 0x7e0		
		CUtlSymbolLarge m_iszStopForwardSound; // 0x7e8		
		CUtlSymbolLarge m_iszStartReverseSound; // 0x7f0		
		CUtlSymbolLarge m_iszLoopReverseSound; // 0x7f8		
		CUtlSymbolLarge m_iszStopReverseSound; // 0x800		
		CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x808		
	private:
		[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
	public:
		entity2::CEntityIOOutput m_OnMovementEnd; // 0x818		
		bool m_bStartAtEnd; // 0x840		
	private:
		[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
	public:
		server::CFuncMover__OrientationUpdate_t m_eOrientationUpdate; // 0x844		
		entity2::GameTime_t m_flTimeStartOrientationChange; // 0x848		
		float m_flTimeToBlendToNewOrientation; // 0x84c		
		float m_flDurationBlendToNewOrientationRan; // 0x850		
	private:
		[[maybe_unused]] uint8_t __pad0854[0xc]; // 0x854
	public:
		Quaternion m_qOriginalOrientation; // 0x860		
		
		// Datamap fields:
		// void InputStartForward; // 0x0
		// void InputStartReverse; // 0x0
		// void InputStop; // 0x0
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
		// CUtlSymbolLarge InputMoveToPathNode; // 0x0
		// CUtlSymbolLarge InputTransitionToPathNode; // 0x0
		// float InputSetSpeed; // 0x0
		// float InputSetSpeedImmediate; // 0x0
		// float InputSetTimeToReachMaxSpeed; // 0x0
		// float InputSetTimeToBlendToNewOrientation; // 0x0
		// void CFuncMoverMove; // 0x0
	};
};
