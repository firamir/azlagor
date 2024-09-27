#pragma once
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
	// Size: 0xc50
	// Has VTable
	class CCitadel_Ability_Ghost_BloodShards : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x150]; // 0xae8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecDamagedTargets; // 0xc38		
	};
};
