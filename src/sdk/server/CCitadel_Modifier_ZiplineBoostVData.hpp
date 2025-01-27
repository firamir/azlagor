#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x698
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ZiplineBoostVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flRampUpTime; // 0x608		
		float m_flPercentageSpeedIncrease; // 0x60c		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x610		
	};
};
