#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1570
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityWreckerSalvageVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SalvageEnemyModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_StunEnemyModifier; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1560		
	};
};
