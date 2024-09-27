#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x698
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ZiplineBoostVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flRampUpTime; // 0x608		
		float m_flPercentageSpeedIncrease; // 0x60c		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x610		
	};
};
