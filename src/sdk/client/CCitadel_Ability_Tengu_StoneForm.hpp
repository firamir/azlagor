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
	// Size: 0xe48
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "GameTime_t m_flLandedTime"
	// MNetworkVarNames "bool m_bLanded"
	// MNetworkVarNames "bool m_bFalling"
	// MNetworkVarNames "bool m_bInStoneForm"
	// MNetworkVarNames "float m_flStartHeight"
	class CCitadel_Ability_Tengu_StoneForm : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x1c0]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStartTime; // 0xe30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLandedTime; // 0xe34		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bLanded; // 0xe38		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bFalling; // 0xe39		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInStoneForm; // 0xe3a		
	private:
		[[maybe_unused]] uint8_t __pad0e3b[0x1]; // 0xe3b
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flStartHeight; // 0xe3c		
		client::ParticleIndex_t m_nStoneFormEffect; // 0xe40		
	};
};
