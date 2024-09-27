#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include "client/ShotID_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Mirage_SandPhantom_Proc : public client::CCitadelModifier
	{
	public:
		client::ShotID_t m_nSuppressProcShotID; // 0xc0		
		client::ParticleIndex_t m_nProcReadyParticleIndex; // 0xc4		
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastProcTime; // 0xc8		
	};
};
