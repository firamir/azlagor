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
	class CAbilityKobunVData : public client::CitadelAbilityVData
	{
	public:
		Vector m_vSummonFollowOffset; // 0x1540		
	private:
		[[maybe_unused]] uint8_t __pad154c[0x4]; // 0x154c
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_CloneModifier; // 0x1550		
	};
};
