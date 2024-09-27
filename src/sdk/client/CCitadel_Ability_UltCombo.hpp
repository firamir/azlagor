#pragma once
#include "client/C_CitadelBaseAbility.hpp"
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
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "int m_iBonusHealth"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
	class CCitadel_Ability_UltCombo : public client::C_CitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastAttackTime; // 0xc70		
		int32_t m_nAttackNum; // 0xc74		
	private:
		[[maybe_unused]] uint8_t __pad0c78[0xa8]; // 0xc78
	public:
		// MNetworkEnable
		int32_t m_iBonusHealth; // 0xd20		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0xd24		
	};
};
