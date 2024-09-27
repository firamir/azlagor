#pragma once
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
	// Size: 0xd38
	// Has VTable
	// 
	// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
	class CCitadel_Ability_GooGrenade : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		CUtlVector<CHandle<server::CBaseEntity>> m_vecPuddleModifiers; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0b00[0x230]; // 0xb00
	public:
		entity2::GameTime_t m_LastDetonateTime; // 0xd30		
	};
};
