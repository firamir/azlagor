#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xda8
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angFacing"
	class CCitadel_Ability_Bounce_Pad : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vForward; // 0xc70		
		bool m_bShouldDeploy; // 0xc7c		
		bool m_bAnglesSet; // 0xc7d		
		bool m_bCanCancel; // 0xc7e		
	private:
		[[maybe_unused]] uint8_t __pad0c7f[0x119]; // 0xc7f
	public:
		// MNetworkEnable
		QAngle m_angFacing; // 0xd98		
	};
};
