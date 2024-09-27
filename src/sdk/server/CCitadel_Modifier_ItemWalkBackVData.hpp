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
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ItemWalkBackVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flStopDistance; // 0x608		
		float m_flMaxSpeedDistance; // 0x60c		
		float m_flSlowSpeed; // 0x610		
		float m_flFastSpeed; // 0x614		
		float m_flVerticalOffset; // 0x618		
		float m_flTolerance; // 0x61c		
		float m_flRepathTime; // 0x620		
	};
};
