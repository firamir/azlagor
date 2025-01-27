#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include "server/CitadelAbilityProjectileCreateInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcc0
	// Has VTable
	class CCitadel_Ability_HornetSting : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x70]; // 0xae8
	public:
		server::CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb58		
	};
};
