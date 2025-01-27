#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierItemPickupTimerVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Timers"
		float m_TimerToSilence; // 0x608		
		float m_SilenceDuration; // 0x60c		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier; // 0x610		
	};
};
