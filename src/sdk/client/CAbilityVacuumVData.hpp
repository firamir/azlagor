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
	// Size: 0x1560
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityVacuumVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_VacuumAuraModifier; // 0x1540		
		// MPropertyStartGroup "+Vacuum Properties"
		float m_flAirSpeedMax; // 0x1550		
		float m_flFallSpeedMax; // 0x1554		
		float m_flAirDrag; // 0x1558		
		float m_flMaxMovespeed; // 0x155c		
	};
};
