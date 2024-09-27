#pragma once
#include "client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "client/ECitadelDamageType.hpp"
#include "client/TakeDamageFlags_t.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BaseEventProcVData : public server::CCitadelModifierVData
	{
	public:
		bool m_bProcChanceAffectedByEffectiveness; // 0x608		
		bool m_bShouldApplyAbilityCooldown; // 0x609		
		// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
		bool m_bCanProcMultipleTimesOnOneTarget; // 0x60a		
		bool m_bCanProcByOtherObjects; // 0x60b		
		client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x60c		
		client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x610		
	private:
		[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
	public:
		CUtlVector<client::ECitadelDamageType> m_vecProcDamageTypes; // 0x618		
		client::TakeDamageFlags_t m_nRequiredDamageFlags; // 0x630		
	};
};
