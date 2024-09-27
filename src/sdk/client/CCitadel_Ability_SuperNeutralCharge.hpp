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
	// Size: 0xe80
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPreparing"
	// MNetworkVarNames "bool m_bTackling"
	// MNetworkVarNames "GameTime_t m_flTackleStartTime"
	// MNetworkVarNames "float m_flTackleDuration"
	// MNetworkVarNames "Vector m_vecTackleDir"
	class CCitadel_Ability_SuperNeutralCharge : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x1c0]; // 0xc70
	public:
		// MNetworkEnable
		bool m_bPreparing; // 0xe30		
		// MNetworkEnable
		bool m_bTackling; // 0xe31		
	private:
		[[maybe_unused]] uint8_t __pad0e32[0x2]; // 0xe32
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTackleStartTime; // 0xe34		
		// MNetworkEnable
		float m_flTackleDuration; // 0xe38		
		// MNetworkEnable
		Vector m_vecTackleDir; // 0xe3c		
		Vector m_vecLastPosition; // 0xe48		
		int32_t m_nStuckFramesCount; // 0xe54		
		CUtlVector<CEntityIndex> m_vecHitEnemies; // 0xe58		
		entity2::GameTime_t m_flPrepareStartTime; // 0xe70		
		client::ParticleIndex_t m_nDistancePreview; // 0xe74		
	};
};
