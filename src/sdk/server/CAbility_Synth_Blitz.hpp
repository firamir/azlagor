#pragma once
#include "client/ShotID_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcb0
	// Has VTable
	// 
	// MNetworkVarNames "int m_nFastFireBulletsLeft"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
	class CAbility_Synth_Blitz : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<client::ShotID_t> m_vecSpecialShots; // 0xae8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nFastFireBulletsLeft; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		server::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xb08		
		bool m_bCanApplyTechAmp; // 0xb20		
		bool m_bCanLifesteal; // 0xb21		
	};
};
