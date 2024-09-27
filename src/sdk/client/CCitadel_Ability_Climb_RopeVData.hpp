#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x15b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Climb_RopeVData : public client::CitadelAbilityVData
	{
	public:
		float m_flMinButtonHoldTimeToActivate; // 0x1540		
		float m_flClimbSpeedUp; // 0x1544		
		float m_flClimbSpeedDown; // 0x1548		
		float m_flClimbSpeedDownMax; // 0x154c		
		float m_flClimbDownAccelTime; // 0x1550		
		float m_flLatchSpeed; // 0x1554		
		float m_flAttachOffset; // 0x1558		
		float m_flMinReconnectTime; // 0x155c		
		float m_flSideMoveReduction; // 0x1560		
		float m_flTopOffset; // 0x1564		
		float m_flBottomOffset; // 0x1568		
		float m_flTraceRadiusSize; // 0x156c		
		float m_flStopTimeToShoot; // 0x1570		
		float m_flJumpOffVertical; // 0x1574		
		float m_flJumpOffHorizontal; // 0x1578		
		float m_flDuckOffVertical; // 0x157c		
		float m_flDuckOffHorizontal; // 0x1580		
		float m_flActivateRange; // 0x1584		
		float m_flJumpToRoofRayCheckDist; // 0x1588		
		float m_flMinTimeToRoofCheck; // 0x158c		
		float m_flTimeToHintRefresh; // 0x1590		
		float m_iMaxHintCount; // 0x1594		
		float m_flClimbRopeSlowDurationOnHit; // 0x1598		
	private:
		[[maybe_unused]] uint8_t __pad159c[0x4]; // 0x159c
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ClimbRopeSlowOnHitModifier; // 0x15a0		
	};
};
