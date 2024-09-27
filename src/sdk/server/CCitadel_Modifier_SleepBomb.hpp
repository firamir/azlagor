#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x230
	// Has VTable
	class CCitadel_Modifier_SleepBomb : public server::CCitadelModifier
	{
	public:
		float m_flGoalHeight; // 0xc0		
		float m_flFallRate; // 0xc4		
		client::ParticleIndex_t m_nBombEffect; // 0xc8		
		CHandle<server::CBaseEntity> m_eIgnoreTarget; // 0xcc		
	private:
		[[maybe_unused]] uint8_t __pad00d0[0x150]; // 0xd0
	public:
		Vector m_vecOrigin; // 0x220		
	};
};
