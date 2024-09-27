#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierAirLiftExplodeTargetVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strSilenceTargetSound; // 0x608		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier; // 0x618		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x628		
		CEmbeddedSubclass<server::CCitadelModifier> m_BulletResistModifier; // 0x638		
	};
};
