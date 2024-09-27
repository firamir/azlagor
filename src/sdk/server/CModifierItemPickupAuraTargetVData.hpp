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
	class CModifierItemPickupAuraTargetVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Timers"
		float m_PickupTimer; // 0x608		
	private:
		[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_PickupTimerModifier; // 0x610		
	};
};
