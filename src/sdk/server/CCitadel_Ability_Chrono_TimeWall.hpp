#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBulletTimeWarp;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xca0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	class CCitadel_Ability_Chrono_TimeWall : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadelBulletTimeWarp> m_hWall; // 0xae8		
		Vector vecDir; // 0xaec		
		client::ParticleIndex_t m_hChargingParticle; // 0xaf8		
		Vector m_vSpawnPos; // 0xafc		
		QAngle m_qAngles; // 0xb08		
		// MNetworkEnable
		bool m_bAirCast; // 0xb14		
	};
};
