#pragma once
#include "server/CAI_CitadelNPCVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xfc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelPlayerBotNPCBrainVData : public server::CAI_CitadelNPCVData
	{
	public:
		// MPropertyStartGroup "Movement"
		float m_flJumpMaxRise; // 0xf58		
		float m_flAirJumpMin; // 0xf5c		
		float m_flJumpMaxDrop; // 0xf60		
		float m_flJumpMaxDist; // 0xf64		
		float m_flJumpMinDist; // 0xf68		
		float m_flClimbUpCostBase; // 0xf6c		
		float m_flClimbUpCostScalar; // 0xf70		
		float m_flFaceTargetDistance; // 0xf74		
		float m_flNavGoalTolerance; // 0xf78		
		float m_flVerticalAttachOffset; // 0xf7c		
		float m_flStuckTime; // 0xf80		
		float m_flStuckTimeAir; // 0xf84		
		float m_flMajorStuckTime; // 0xf88		
		float m_flStuckDistance; // 0xf8c		
		float m_flMaxPathDistance; // 0xf90		
		float m_flMinLanePathDistance; // 0xf94		
		float m_flEnemyDistanceForReload; // 0xf98		
		float m_flReloadEnemyFarPct; // 0xf9c		
		float m_flReloadEnemyLoSPct; // 0xfa0		
		float m_flReloadEnemyLosTime; // 0xfa4		
		float m_flMinShootTimeToReload; // 0xfa8		
		float m_flDashDamageThreshold; // 0xfac		
		float m_flDashDamageTickDown; // 0xfb0		
		float m_flMinDesiredDashDist; // 0xfb4		
		float m_flMinAbilityAimTime; // 0xfb8		
		float m_flDisengageFromEnemyToLaneDist; // 0xfbc		
		float m_flDefendBaseSearchRadius; // 0xfc0		
	};
};
