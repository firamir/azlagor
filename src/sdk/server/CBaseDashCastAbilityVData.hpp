#pragma once
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBaseDashCastAbilityVData : public server::CitadelAbilityVData
	{
	public:
		CSubclassName<4> m_AbilityToTrigger; // 0x1540		
		// MPropertyDescription "How big of a trigger to use when tracing for targets"
		float m_flDashCastTriggerRadius; // 0x1550		
		// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
		float m_flDashSpeed; // 0x1554		
		// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
		bool m_bSnapToZeroSpeedOnEnd; // 0x1558		
		// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
		bool m_bUseCurveToDefineSpeed; // 0x1559		
	private:
		[[maybe_unused]] uint8_t __pad155a[0x6]; // 0x155a
	public:
		// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
		CPiecewiseCurve m_MovementSpeedCurve; // 0x1560		
		// MPropertySuppressField
		float m_flMovementSpeedCurveAvgSpeed; // 0x15a0		
	private:
		[[maybe_unused]] uint8_t __pad15a4[0x4]; // 0x15a4
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play if we hit a target."
		CSoundEventName m_strTargetHitSound; // 0x15a8		
		// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
		CSoundEventName m_strMissSound; // 0x15b8		
	};
};
