#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include "server/CCitadelModifier.hpp"
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
	// Size: 0xbb8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iBonusHealth"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
	class CCitadel_Ability_UltCombo : public server::CCitadelBaseAbility
	{
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_hTargetComboModifier; // 0xae8		
		entity2::GameTime_t m_flLastAttackTime; // 0xb00		
		int32_t m_nAttackNum; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b08[0xa8]; // 0xb08
	public:
		// MNetworkEnable
		int32_t m_iBonusHealth; // 0xbb0		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTarget; // 0xbb4		
	};
};
