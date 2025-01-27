#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strLaserHitSound; // 0x608		
		CSoundEventName m_strLaserStartSound; // 0x618		
		CSoundEventName m_strLaserLoopSound; // 0x628		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x638		
	};
};
