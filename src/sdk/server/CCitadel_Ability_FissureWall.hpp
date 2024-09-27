#pragma once
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
	// Size: 0xbf0
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecStartPos"
	// MNetworkVarNames "Vector m_vecPosition"
	// MNetworkVarNames "Vector m_vecInitialPosition"
	// MNetworkVarNames "GameTime_t m_CastTime"
	// MNetworkVarNames "Vector m_vecDirection"
	// MNetworkVarNames "Vector m_vecLeft"
	// MNetworkVarNames "float m_Length"
	// MNetworkVarNames "bool m_bTraveling"
	// MNetworkVarNames "bool m_bPreview"
	class CCitadel_Ability_FissureWall : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0xb8]; // 0xae8
	public:
		// MNetworkEnable
		Vector m_vecStartPos; // 0xba0		
		// MNetworkEnable
		Vector m_vecPosition; // 0xbac		
		// MNetworkEnable
		Vector m_vecInitialPosition; // 0xbb8		
		// MNetworkEnable
		entity2::GameTime_t m_CastTime; // 0xbc4		
		// MNetworkEnable
		Vector m_vecDirection; // 0xbc8		
		// MNetworkEnable
		Vector m_vecLeft; // 0xbd4		
		// MNetworkEnable
		float m_Length; // 0xbe0		
	private:
		[[maybe_unused]] uint8_t __pad0be4[0xa]; // 0xbe4
	public:
		// MNetworkEnable
		bool m_bTraveling; // 0xbee		
		// MNetworkEnable
		bool m_bPreview; // 0xbef		
	};
};
