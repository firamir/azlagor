#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierObscuredVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		float m_flHideDuration; // 0x608		
		float m_flRevealDuration; // 0x60c		
	};
};
