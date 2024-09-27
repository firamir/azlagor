#pragma once
#include "client/BuildupMode_t.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Base_BuildupVData : public server::CCitadelModifierVData
	{
	public:
		bool m_bUseBaseWeaponCycleTimeForDelay; // 0x608		
	private:
		[[maybe_unused]] uint8_t __pad0609[0x3]; // 0x609
	public:
		float m_flCycleTimeDelayAdd; // 0x60c		
		float m_flBuildUpDecayDelay; // 0x610		
		client::BuildupMode_t m_eBuildupMode; // 0x614		
		// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
		bool m_bBuildupAffectedByEffectiveness; // 0x618		
		// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
		bool m_bPassBuildupEffectivenessToFillModifier; // 0x619		
	};
};
