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
	// Size: 0x15b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_WeaponUpgrade_Headhunter_VData : public client::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_HeadshotBuffModifier; // 0x1588		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_HeadShotVictimSound; // 0x1598		
		CSoundEventName m_HeadShotConfirmationSound; // 0x15a8		
	};
};
