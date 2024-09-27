#pragma once
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
	// Size: 0x28
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CGameScriptedMoveDef_t
	{
	public:
		server::ScriptedMoveType_t m_nType; // 0x0		
		Vector m_vDestOffset; // 0x4		
		CHandle<server::CBaseEntity> m_hDestEntity; // 0x10		
		QAngle m_angDest; // 0x14		
		float m_flDuration; // 0x20		
		float m_flAngRate; // 0x24		
	};
};
