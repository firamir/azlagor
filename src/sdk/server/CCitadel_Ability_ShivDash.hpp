#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseShivAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CPointModifierThinker;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd88
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDashDirection"
	// MNetworkVarNames "bool m_bIsDashing"
	// MNetworkVarNames "bool m_bStartedInAir"
	class CCitadel_Ability_ShivDash : public server::CCitadelBaseShivAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStartPosition; // 0xae8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vDashDirection; // 0xaf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bIsDashing; // 0xb00		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bStartedInAir; // 0xb01		
	private:
		[[maybe_unused]] uint8_t __pad0b02[0x6]; // 0xb02
	public:
		CUtlVector<CEntityIndex> m_vecHitEnemies; // 0xb08		
		Vector m_vecLastPosition; // 0xb20		
		int32_t m_nReductionsLeft; // 0xb2c		
	private:
		[[maybe_unused]] uint8_t __pad0b30[0x230]; // 0xb30
	public:
		entity2::GameTime_t m_flStuckTime; // 0xd60		
		CHandle<server::CPointModifierThinker> m_hEchoThinker; // 0xd64		
		entity2::GameTime_t m_EchoStartTime; // 0xd68		
		bool m_bLetEchoPlay; // 0xd6c		
	};
};
