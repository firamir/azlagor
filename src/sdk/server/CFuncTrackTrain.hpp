#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include "server/TrainOrientationType_t.hpp"
#include "server/TrainVelocityType_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CPathTrack;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8b8
	// Has VTable
	class CFuncTrackTrain : public server::CBaseModelEntity
	{
	public:
		CHandle<server::CPathTrack> m_ppath; // 0x768		
		float m_length; // 0x76c		
		Vector m_vPosPrev; // 0x770		
		QAngle m_angPrev; // 0x77c		
		Vector m_controlMins; // 0x788		
		Vector m_controlMaxs; // 0x794		
		Vector m_lastBlockPos; // 0x7a0		
		int32_t m_lastBlockTick; // 0x7ac		
		float m_flVolume; // 0x7b0		
		float m_flBank; // 0x7b4		
		float m_oldSpeed; // 0x7b8		
		float m_flBlockDamage; // 0x7bc		
		float m_height; // 0x7c0		
		float m_maxSpeed; // 0x7c4		
		float m_dir; // 0x7c8		
	private:
		[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
	public:
		CUtlSymbolLarge m_iszSoundMove; // 0x7d0		
		CUtlSymbolLarge m_iszSoundMovePing; // 0x7d8		
		CUtlSymbolLarge m_iszSoundStart; // 0x7e0		
		CUtlSymbolLarge m_iszSoundStop; // 0x7e8		
		CUtlSymbolLarge m_strPathTarget; // 0x7f0		
		float m_flMoveSoundMinDuration; // 0x7f8		
		float m_flMoveSoundMaxDuration; // 0x7fc		
		entity2::GameTime_t m_flNextMoveSoundTime; // 0x800		
		float m_flMoveSoundMinPitch; // 0x804		
		float m_flMoveSoundMaxPitch; // 0x808		
		server::TrainOrientationType_t m_eOrientationType; // 0x80c		
		server::TrainVelocityType_t m_eVelocityType; // 0x810		
	private:
		[[maybe_unused]] uint8_t __pad0814[0xc]; // 0x814
	public:
		entity2::CEntityIOOutput m_OnStart; // 0x820		
		entity2::CEntityIOOutput m_OnNext; // 0x848		
		entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x870		
		bool m_bManualSpeedChanges; // 0x898		
	private:
		[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
	public:
		float m_flDesiredSpeed; // 0x89c		
		entity2::GameTime_t m_flSpeedChangeTime; // 0x8a0		
		float m_flAccelSpeed; // 0x8a4		
		float m_flDecelSpeed; // 0x8a8		
		bool m_bAccelToSpeed; // 0x8ac		
	private:
		[[maybe_unused]] uint8_t __pad08ad[0x3]; // 0x8ad
	public:
		entity2::GameTime_t m_flNextMPSoundTime; // 0x8b0		
		
		// Datamap fields:
		// int64_t m_soundMoveGuid; // 0x814
		// void InputStop; // 0x0
		// void InputStartForward; // 0x0
		// void InputStartBackward; // 0x0
		// void InputToggle; // 0x0
		// void InputResume; // 0x0
		// void InputReverse; // 0x0
		// float InputSetSpeed; // 0x0
		// float InputSetSpeedDir; // 0x0
		// float InputSetSpeedReal; // 0x0
		// float InputSetMaxSpeed; // 0x0
		// float InputSetSpeedDirAccel; // 0x0
		// CUtlSymbolLarge InputMoveToPathNode; // 0x0
		// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
		// void InputLockOrientation; // 0x0
		// void InputUnlockOrientation; // 0x0
		// void CFuncTrackTrainNext; // 0x0
		// void CFuncTrackTrainFind; // 0x0
		// void CFuncTrackTrainNearestPath; // 0x0
		// void CFuncTrackTrainDeadEnd; // 0x0
		// int32_t volume; // 0x7fffffff
	};
};
