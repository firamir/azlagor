#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc08
	// Has VTable
	class CCitadel_Ability_Lash_Flog : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x118]; // 0xae8
	public:
		client::ParticleIndex_t m_SandEffect; // 0xc00		
	};
};
