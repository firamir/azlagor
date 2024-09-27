#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc20
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angFacing"
	class CCitadel_Ability_Bounce_Pad : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vForward; // 0xae8		
		bool m_bShouldDeploy; // 0xaf4		
		bool m_bAnglesSet; // 0xaf5		
		bool m_bCanCancel; // 0xaf6		
	private:
		[[maybe_unused]] uint8_t __pad0af7[0x119]; // 0xaf7
	public:
		// MNetworkEnable
		QAngle m_angFacing; // 0xc10		
	};
};
