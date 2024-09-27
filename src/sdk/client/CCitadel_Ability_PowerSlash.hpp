#pragma once
#include "client/CCitadelBaseYamatoAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf30
	// Has VTable
	// 
	// MNetworkVarNames "int m_nPowerLevel"
	class CCitadel_Ability_PowerSlash : public client::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c78[0xc]; // 0xc78
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nPowerLevel; // 0xc84		
		client::ParticleIndex_t m_nCastParticle; // 0xc88		
	};
};
