#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBreakable.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x950
	// Has VTable
	class CPhysBox : public server::CBreakable
	{
	public:
		int32_t m_damageType; // 0x840		
		int32_t m_damageToEnableMotion; // 0x844		
		float m_flForceToEnableMotion; // 0x848		
		QAngle m_angPreferredCarryAngles; // 0x84c		
		bool m_bNotSolidToWorld; // 0x858		
		bool m_bEnableUseOutput; // 0x859		
	private:
		[[maybe_unused]] uint8_t __pad085a[0x2]; // 0x85a
	public:
		int32_t m_iExploitableByPlayer; // 0x85c		
		float m_flTouchOutputPerEntityDelay; // 0x860		
	private:
		[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
	public:
		entity2::CEntityIOOutput m_OnDamaged; // 0x868		
		entity2::CEntityIOOutput m_OnAwakened; // 0x890		
		entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8b8		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0x8e0		
		entity2::CEntityIOOutput m_OnStartTouch; // 0x908		
		CHandle<server::CBasePlayerPawn> m_hCarryingPlayer; // 0x930		
		
		// Datamap fields:
		// void InputWake; // 0x0
		// void InputSleep; // 0x0
		// void InputEnableMotion; // 0x0
		// void InputDisableMotion; // 0x0
		// void InputForceDrop; // 0x0
		// void InputDisableFloating; // 0x0
	};
};
