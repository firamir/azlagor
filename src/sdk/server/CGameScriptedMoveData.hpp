#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/ForcedCrouchState_t.hpp"
#include "server/ScriptedMoveType_t.hpp"
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
	// Alignment: 4
	// Size: 0x70
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CGameScriptedMoveData
	{
	public:
		Vector m_vAccumulatedRootMotion; // 0x0		
		Vector m_vDest; // 0xc		
		Vector m_vSrc; // 0x18		
		QAngle m_angSrc; // 0x24		
		QAngle m_angDst; // 0x30		
		QAngle m_angCurrent; // 0x3c		
		CHandle<server::CBaseEntity> m_hDestEntity; // 0x48		
		float m_flLockedSpeed; // 0x4c		
		float m_flAngRate; // 0x50		
		float m_flDuration; // 0x54		
		entity2::GameTime_t m_flStartTime; // 0x58		
		bool m_bActive; // 0x5c		
		bool m_bTeleportOnEnd; // 0x5d		
		bool m_bIgnoreRotation; // 0x5e		
	private:
		[[maybe_unused]] uint8_t __pad005f[0x1]; // 0x5f
	public:
		server::ScriptedMoveType_t m_nType; // 0x60		
		bool m_bSuccess; // 0x64		
	private:
		[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
	public:
		server::ForcedCrouchState_t m_nForcedCrouchState; // 0x68		
		bool m_bIgnoreCollisions; // 0x6c		
	};
};
