#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Mirage_Tornado_Aura_Apply_VData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TossModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_LiftModifier; // 0x618		
	};
};
