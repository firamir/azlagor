#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcb0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flDomeStartTime"
	// MNetworkVarNames "GameTime_t m_flDomeEndTime"
	class CCitadel_Ability_IceDome : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x38]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDomeStartTime; // 0xca8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDomeEndTime; // 0xcac		
	};
};
