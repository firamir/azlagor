#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseYamatoAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xda8
	// Has VTable
	// 
	// MNetworkVarNames "int m_nPowerLevel"
	class CCitadel_Ability_PowerSlash : public server::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0af0[0xc]; // 0xaf0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nPowerLevel; // 0xafc		
		client::ParticleIndex_t m_nCastParticle; // 0xb00		
	};
};
