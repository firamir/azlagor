#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPreparing"
	// MNetworkVarNames "bool m_bTackling"
	// MNetworkVarNames "GameTime_t m_flTackleStartTime"
	// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
	// MNetworkVarNames "Vector m_vecTackleDir"
	class CCitadel_Ability_ChargedTackle : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1f8]; // 0xae8
	public:
		// MNetworkEnable
		bool m_bPreparing; // 0xce0		
		// MNetworkEnable
		bool m_bTackling; // 0xce1		
	private:
		[[maybe_unused]] uint8_t __pad0ce2[0x2]; // 0xce2
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTackleStartTime; // 0xce4		
		// MNetworkEnable
		entity2::GameTime_t m_flPrepareStartTime; // 0xce8		
		// MNetworkEnable
		Vector m_vecTackleDir; // 0xcec		
		Vector m_vecLastPosition; // 0xcf8		
		int32_t m_nStuckFramesCount; // 0xd04		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEnemies; // 0xd08		
		client::ParticleIndex_t m_nDistancePreview; // 0xd20		
	};
};
