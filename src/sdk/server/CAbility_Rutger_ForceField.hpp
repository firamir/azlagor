#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xc90
	// Has VTable
	class CAbility_Rutger_ForceField : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_hChargingParticle; // 0xae8		
		client::ParticleIndex_t m_hExplodeParticle; // 0xaec		
		Vector m_vSpawnPos; // 0xaf0		
		entity2::GameTime_t m_fTimeToDestroyForceField; // 0xafc		
		bool m_bFirstThink; // 0xb00		
	};
};
