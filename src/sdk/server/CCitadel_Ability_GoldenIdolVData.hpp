#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Ability_BaseHeldItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1670
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_GoldenIdolVData : public server::CCitadel_Ability_BaseHeldItemVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sIdolDropOffSound; // 0x1620		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DropoffTimerModifier; // 0x1630		
		CEmbeddedSubclass<server::CCitadelModifier> m_Bonus01; // 0x1640		
		CEmbeddedSubclass<server::CCitadelModifier> m_Bonus02; // 0x1650		
		// MPropertyStartGroup "Gameplay"
		float m_flInstantGoldPercentage; // 0x1660		
		int32_t m_iComebackBounty; // 0x1664		
		int32_t m_iComebackGoldThreshold; // 0x1668		
		float m_flCasterBonusPercent; // 0x166c		
	};
};
