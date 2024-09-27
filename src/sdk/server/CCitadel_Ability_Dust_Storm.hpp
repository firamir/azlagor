#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadel_Ability_Spinning_Blade;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	class CCitadel_Ability_Dust_Storm : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadel_Ability_Spinning_Blade> m_hSpinningBladeAbility; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0aec[0x4]; // 0xaec
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vTargets; // 0xaf0		
	};
};
