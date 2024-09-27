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
	// Size: 0xcc0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "GameTime_t m_flLandedTime"
	// MNetworkVarNames "bool m_bLanded"
	// MNetworkVarNames "bool m_bFalling"
	// MNetworkVarNames "bool m_bInStoneForm"
	// MNetworkVarNames "float m_flStartHeight"
	class CCitadel_Ability_Tengu_StoneForm : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1c0]; // 0xae8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStartTime; // 0xca8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLandedTime; // 0xcac		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bLanded; // 0xcb0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bFalling; // 0xcb1		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInStoneForm; // 0xcb2		
	private:
		[[maybe_unused]] uint8_t __pad0cb3[0x1]; // 0xcb3
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flStartHeight; // 0xcb4		
		client::ParticleIndex_t m_nStoneFormEffect; // 0xcb8		
	};
};
