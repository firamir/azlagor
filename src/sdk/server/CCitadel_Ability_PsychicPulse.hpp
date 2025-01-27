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
	// Size: 0xb38
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_vecPulseTargets"
	class CCitadel_Ability_PsychicPulse : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x38]; // 0xae8
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecPulseTargets; // 0xb20		
	};
};
