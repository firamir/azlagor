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
	// Size: 0xcf8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPreparing"
	// MNetworkVarNames "bool m_bTackling"
	// MNetworkVarNames "GameTime_t m_flTackleStartTime"
	// MNetworkVarNames "float m_flTackleDuration"
	// MNetworkVarNames "Vector m_vecTackleDir"
	class CCitadel_Ability_SuperNeutralCharge : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1c0]; // 0xae8
	public:
		// MNetworkEnable
		bool m_bPreparing; // 0xca8		
		// MNetworkEnable
		bool m_bTackling; // 0xca9		
	private:
		[[maybe_unused]] uint8_t __pad0caa[0x2]; // 0xcaa
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTackleStartTime; // 0xcac		
		// MNetworkEnable
		float m_flTackleDuration; // 0xcb0		
		// MNetworkEnable
		Vector m_vecTackleDir; // 0xcb4		
		Vector m_vecLastPosition; // 0xcc0		
		int32_t m_nStuckFramesCount; // 0xccc		
		CUtlVector<CEntityIndex> m_vecHitEnemies; // 0xcd0		
		entity2::GameTime_t m_flPrepareStartTime; // 0xce8		
		client::ParticleIndex_t m_nDistancePreview; // 0xcec		
	};
};
