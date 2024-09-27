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
	// Size: 0x15d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_ArmorUpgrade_AblativeCoatVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_RestoreEffectModifier; // 0x1588		
		CEmbeddedSubclass<server::CCitadelModifier> m_OnTakeDamageEffectModifier; // 0x1598		
		CEmbeddedSubclass<server::CCitadelModifier> m_OnBreakEffectModifier; // 0x15a8		
		CEmbeddedSubclass<server::CCitadelModifier> m_ResistBuffModifier; // 0x15b8		
		// MPropertyStartGroup "Gameplay"
		float m_flOnTakeDamageEffectDuration; // 0x15c8		
		float m_flOnBreakEffectDuration; // 0x15cc		
		float m_flOnRestoreEffectDuration; // 0x15d0		
	};
};
