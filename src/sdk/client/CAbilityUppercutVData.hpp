#pragma once
#include "client/AttackData_t.hpp"
#include "client/CAbilityMeleeVData.hpp"
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1ab8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityUppercutVData : public client::CAbilityMeleeVData
	{
	public:
		client::AttackData_t m_UppercutAttackData; // 0x1558		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_UppercutModifier; // 0x1a80		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x1a90		
		CEmbeddedSubclass<client::CCitadelModifier> m_ClipModifier; // 0x1aa0		
		// MPropertyStartGroup "Gameplay"
		float m_flMaxPitchUp; // 0x1ab0		
	};
};
