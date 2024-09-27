#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierObscuredVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		float m_flHideDuration; // 0x608		
		float m_flRevealDuration; // 0x60c		
	};
};
