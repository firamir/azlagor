#pragma once
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xca8
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angBeamAngles"
	class CCitadel_Ability_Tokamak_HotShot : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x178]; // 0xae8
	public:
		float m_flDPS; // 0xc60		
		entity2::GameTime_t m_flNextDamageTick; // 0xc64		
		Vector m_vStart; // 0xc68		
		Vector m_vEnd; // 0xc74		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit; // 0xc80		
		// MNetworkEnable
		QAngle m_angBeamAngles; // 0xc98		
	};
};
