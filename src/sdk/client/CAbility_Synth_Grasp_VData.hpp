#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1570
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Synth_Grasp_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_VictimModifier; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_BulletShieldModifier; // 0x1560		
	};
};
