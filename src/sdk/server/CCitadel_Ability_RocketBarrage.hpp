#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd08
	// Has VTable
	class CCitadel_Ability_RocketBarrage : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1f8]; // 0xae8
	public:
		float m_flCurrentTimeScale; // 0xce0		
		Vector m_vecAimPos; // 0xce4		
		Vector m_vecAimVel; // 0xcf0		
		entity2::GameTime_t m_flLastUpdateTime; // 0xcfc		
	};
};
