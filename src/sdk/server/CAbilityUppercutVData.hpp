#pragma once
#include "client/AttackData_t.hpp"
#include "server/CAbilityMeleeVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1ab8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityUppercutVData : public server::CAbilityMeleeVData
	{
	public:
		client::AttackData_t m_UppercutAttackData; // 0x1558		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_UppercutModifier; // 0x1a80		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1a90		
		CEmbeddedSubclass<server::CCitadelModifier> m_ClipModifier; // 0x1aa0		
		// MPropertyStartGroup "Gameplay"
		float m_flMaxPitchUp; // 0x1ab0		
	};
};
