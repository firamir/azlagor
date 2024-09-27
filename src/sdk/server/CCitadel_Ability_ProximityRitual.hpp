#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Nano_Predatory_Statue;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xca0
	// Has VTable
	class CCitadel_Ability_ProximityRitual : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x4]; // 0xae8
	public:
		CHandle<server::CCitadel_Nano_Predatory_Statue> m_hStatue; // 0xaec		
		entity2::GameTime_t m_tCatRecallTime; // 0xaf0		
		int32_t m_iCatRecallHealth; // 0xaf4		
		Vector m_vLaunchPosition; // 0xaf8		
		QAngle m_qLaunchAngle; // 0xb04		
	};
};
