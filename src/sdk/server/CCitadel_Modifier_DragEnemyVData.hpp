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
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_DragEnemyVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flForwardOffset; // 0x608		
		float m_flVerticalOffset; // 0x60c		
		float m_flDragDistance; // 0x610		
		float m_flForceDistScale; // 0x614		
	};
};
