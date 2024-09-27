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
	class CCitadel_Ability_IcePathVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_IcePathModifier; // 0x1540		
		// MPropertyStartGroup "Gameplay"
		float m_flMomentumDecayRate; // 0x1550		
		float m_flMomentumWeight; // 0x1554		
		float m_flMaxPitchChange; // 0x1558		
		float m_flMaxPitchUp; // 0x155c		
		float m_flMaxPitchDown; // 0x1560		
		float m_flMaxHeight; // 0x1564		
		float m_flForwardAngleBias; // 0x1568		
	};
};
