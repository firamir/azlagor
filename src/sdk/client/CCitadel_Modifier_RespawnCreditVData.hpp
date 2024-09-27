#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/ERejuvenatorRespawnMechanic.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_RespawnCreditVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Respawn Settings"
		client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x608		
		// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
		// MPropertyDescription "Respawn time is set to this fixed duration after dying."
		float m_flRespawnDelay; // 0x60c		
		// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
		// MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
		float m_flPercentOfNormalRespawn; // 0x610		
		// MPropertyStartGroup "Buff Values"
		float m_flBonusClipSize; // 0x614		
		float m_flBonusFirerate; // 0x618		
		float m_flBonusHealth; // 0x61c		
		float m_flBonusMoveSpeedMeterPerSecond; // 0x620		
	private:
		[[maybe_unused]] uint8_t __pad0624[0x4]; // 0x624
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sExpireSound; // 0x628		
	};
};
