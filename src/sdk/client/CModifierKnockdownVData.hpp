#pragma once
#include "client/CCitadel_Modifier_StunnedVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x780
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierKnockdownVData : public client::CCitadel_Modifier_StunnedVData
	{
	public:
		float m_flSatVolumeRadius; // 0x6e8		
		float m_flSatVolumeFadeOut; // 0x6ec		
		// MPropertyStartGroup "Camera"
		float m_flGetUpSeqDuration; // 0x6f0		
	private:
		[[maybe_unused]] uint8_t __pad06f4[0x4]; // 0x6f4
	public:
		client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6f8		
	};
};
