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
	// Size: 0xe40
	// Has VTable
	class CCitadel_Ability_Tokamak_HotShot : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x178]; // 0xc70
	public:
		float m_flDPS; // 0xde8		
		entity2::GameTime_t m_flNextDamageTick; // 0xdec		
		Vector m_vStart; // 0xdf0		
		Vector m_vEnd; // 0xdfc		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit; // 0xe08		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnFlameAnglesChanged"
		QAngle m_angBeamAngles; // 0xe20		
	private:
		[[maybe_unused]] uint8_t __pad0e2c[0xc]; // 0xe2c
	public:
		bool m_bNeedsBeamReset; // 0xe38		
	};
};
