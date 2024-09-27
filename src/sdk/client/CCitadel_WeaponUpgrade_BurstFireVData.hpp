#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x15a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_WeaponUpgrade_BurstFireVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ActivationSound; // 0x1588		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x1598		
	};
};
