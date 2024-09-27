#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x18c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityDashVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle; // 0x1620		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strArriveSound; // 0x1700		
		CSoundEventName m_strStaminaDrainedSound; // 0x1710		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1720		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x17a8		
		// MPropertyStartGroup "Ground Dash Stuff"
		float m_flMaxAngDiff; // 0x1830		
		float m_flDurationScaleForSpeed; // 0x1834		
		float m_flSlideEarlyOutWindow; // 0x1838		
		float m_flSlideLockoutTime; // 0x183c		
		float m_flGroundDashAirbornDrag; // 0x1840		
		float m_flGroundDashAirbornSpeedClamp; // 0x1844		
		CSoundEventName m_strGroundDashActivate; // 0x1848		
		CPiecewiseCurve m_curvePosition; // 0x1858		
		float m_flGroundDashDuration; // 0x1898		
		float m_flGroundDashDistanceInMeters; // 0x189c		
		// MPropertyStartGroup "Air Dash Stuff"
		float m_flAirDashEndVelocityScale; // 0x18a0		
		float m_flAirDashAccPct; // 0x18a4		
		float m_flDuringDrag; // 0x18a8		
		float m_flPostDrag; // 0x18ac		
		float m_flPostDragDuration; // 0x18b0		
		float m_flDownwardAirDashSpeed; // 0x18b4		
		CSoundEventName m_strDashActivate; // 0x18b8		
	};
};
