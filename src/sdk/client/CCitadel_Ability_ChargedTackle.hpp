#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xeb0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPreparing"
	// MNetworkVarNames "bool m_bTackling"
	// MNetworkVarNames "GameTime_t m_flTackleStartTime"
	// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
	// MNetworkVarNames "Vector m_vecTackleDir"
	class CCitadel_Ability_ChargedTackle : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x1f8]; // 0xc70
	public:
		// MNetworkEnable
		bool m_bPreparing; // 0xe68		
		// MNetworkEnable
		bool m_bTackling; // 0xe69		
	private:
		[[maybe_unused]] uint8_t __pad0e6a[0x2]; // 0xe6a
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTackleStartTime; // 0xe6c		
		// MNetworkEnable
		entity2::GameTime_t m_flPrepareStartTime; // 0xe70		
		// MNetworkEnable
		Vector m_vecTackleDir; // 0xe74		
		Vector m_vecLastPosition; // 0xe80		
		int32_t m_nStuckFramesCount; // 0xe8c		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEnemies; // 0xe90		
		client::ParticleIndex_t m_nDistancePreview; // 0xea8		
	};
};
