#pragma once
#include "client/C_CitadelBaseAbility.hpp"
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
	// Size: 0xe58
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hHookVictim"
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "Vector m_vecHookTargetStartPos"
	class CCitadel_Ability_Hook : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "HookVictimChanged"
		CHandle<client::C_BaseEntity> m_hHookVictim; // 0xc70		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hProjectile; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecHookTargetStartPos; // 0xc78		
	};
};
