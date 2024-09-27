#pragma once
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
	class CCitadel_Ability_Thumper_1 : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xae8		
		Vector m_vecAimPos; // 0xb00		
		Vector m_vecAimNormal; // 0xb0c		
		float m_flPushForce; // 0xb18		
	};
};
