#pragma once
#include "server/CBaseTrigger.hpp"
#include "server/CountdownTimer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x988
	// Has VTable
	class CTriggerFan : public server::CBaseTrigger
	{
	public:
		Vector m_vFanOrigin; // 0x938		
		Vector m_vFanEnd; // 0x944		
		Vector m_vNoise; // 0x950		
		float m_flForce; // 0x95c		
		float m_flRopeForceScale; // 0x960		
		float m_flPlayerForce; // 0x964		
		float m_flRampTime; // 0x968		
		bool m_bFalloff; // 0x96c		
		bool m_bPushPlayer; // 0x96d		
		bool m_bRampDown; // 0x96e		
		bool m_bAddNoise; // 0x96f		
		server::CountdownTimer m_RampTimer; // 0x970		
		
		// Datamap fields:
		// void CTriggerFanPushThink; // 0x0
	};
};
