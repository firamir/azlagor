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
	// Size: 0x1188
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vBeamAimPos"
	// MNetworkVarNames "QAngle m_angBeamAngles"
	class CCitadel_Ability_IceBeam : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x618]; // 0xae8
	public:
		entity2::GameTime_t m_flNextDamageTick; // 0x1100		
		Vector m_vStart; // 0x1104		
		Vector m_vEnd; // 0x1110		
	private:
		[[maybe_unused]] uint8_t __pad111c[0x3c]; // 0x111c
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit; // 0x1158		
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0x1170		
		// MNetworkEnable
		QAngle m_angBeamAngles; // 0x117c		
	};
};
