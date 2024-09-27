#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_WeaponUpgrade_BurstFireVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ActivationSound; // 0x1588		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1598		
	};
};
