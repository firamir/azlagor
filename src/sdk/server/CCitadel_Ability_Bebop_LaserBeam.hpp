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
	// Size: 0xc58
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	// MNetworkVarNames "Vector m_vBeamAimPos"
	// MNetworkVarNames "QAngle m_angBeamAngles"
	class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x150]; // 0xae8
	public:
		bool m_bZoomed; // 0xc38		
		// MNetworkEnable
		bool m_bAirCast; // 0xc39		
	private:
		[[maybe_unused]] uint8_t __pad0c3a[0x2]; // 0xc3a
	public:
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0xc3c		
	private:
		[[maybe_unused]] uint8_t __pad0c48[0x4]; // 0xc48
	public:
		// MNetworkEnable
		QAngle m_angBeamAngles; // 0xc4c		
	};
};
