#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/LockonTarget_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xde8
	// Has VTable
	// 
	// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
	// MNetworkVarNames "GameTime_t m_LockOnStartTime"
	class CCitadelBaseLockonAbility : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x118]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		C_UtlVectorEmbeddedNetworkVar<client::LockonTarget_t> m_vecLockonTargets; // 0xd88		
		// MNetworkEnable
		entity2::GameTime_t m_LockOnStartTime; // 0xdd8		
	private:
		[[maybe_unused]] uint8_t __pad0ddc[0x4]; // 0xddc
	public:
		client::ParticleIndex_t m_nTargetingLightEffect; // 0xde0		
	};
};
