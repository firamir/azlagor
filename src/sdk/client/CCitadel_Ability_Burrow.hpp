#pragma once
#include "client/C_CitadelBaseAbility.hpp"
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
	// Size: 0xd60
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bInGround"
	// MNetworkVarNames "GameTime_t m_SpinEndTime"
	class CCitadel_Ability_Burrow : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0xe0]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInGround; // 0xd50		
	private:
		[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_SpinEndTime; // 0xd54		
		client::ParticleIndex_t m_nBurrowEffect; // 0xd58		
	};
};
