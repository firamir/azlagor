#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Chrono_KineticCarbineVData : public server::CitadelAbilityVData
	{
	public:
		float m_flShotTimeScaleLingerDuration; // 0x1540		
	private:
		[[maybe_unused]] uint8_t __pad1544[0x4]; // 0x1544
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargingModifier; // 0x1548		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1558		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1568		
	};
};
