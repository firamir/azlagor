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
	// Size: 0x620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierItemPickupTimerVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Timers"
		float m_TimerToSilence; // 0x608		
		float m_SilenceDuration; // 0x60c		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier; // 0x610		
	};
};
