#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include "server/CCitadel_Ability_CardToss__Card_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd88
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bCardIsFlying"
	class CCitadel_Ability_CardToss : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<server::CCitadel_Ability_CardToss__Card_t> m_vecCards; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0b00[0x280]; // 0xb00
	public:
		// MNetworkEnable
		bool m_bCardIsFlying; // 0xd80		
	};
};
