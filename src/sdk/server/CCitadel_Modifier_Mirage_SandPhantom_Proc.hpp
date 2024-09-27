#pragma once
#include "client/ParticleIndex_t.hpp"
#include "client/ShotID_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Mirage_SandPhantom_Proc : public server::CCitadelModifier
	{
	public:
		client::ShotID_t m_nSuppressProcShotID; // 0xc0		
		client::ParticleIndex_t m_nProcReadyParticleIndex; // 0xc4		
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastProcTime; // 0xc8		
	};
};
