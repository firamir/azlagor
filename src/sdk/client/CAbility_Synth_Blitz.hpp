#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ShotID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe38
	// Has VTable
	// 
	// MNetworkVarNames "int m_nFastFireBulletsLeft"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
	class CAbility_Synth_Blitz : public client::C_CitadelBaseAbility
	{
	public:
		CUtlVector<client::ShotID_t> m_vecSpecialShots; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int32_t m_nFastFireBulletsLeft; // 0xc88		
	private:
		[[maybe_unused]] uint8_t __pad0c8c[0x4]; // 0xc8c
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xc90		
		bool m_bCanApplyTechAmp; // 0xca8		
		bool m_bCanLifesteal; // 0xca9		
	};
};
