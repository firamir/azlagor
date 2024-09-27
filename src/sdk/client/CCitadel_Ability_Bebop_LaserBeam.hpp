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
	// Size: 0xdf0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	// MNetworkVarNames "Vector m_vBeamAimPos"
	class CCitadel_Ability_Bebop_LaserBeam : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x150]; // 0xc70
	public:
		bool m_bZoomed; // 0xdc0		
		// MNetworkEnable
		bool m_bAirCast; // 0xdc1		
	private:
		[[maybe_unused]] uint8_t __pad0dc2[0x2]; // 0xdc2
	public:
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0xdc4		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
		QAngle m_angBeamAngles; // 0xdd0		
	private:
		[[maybe_unused]] uint8_t __pad0ddc[0xc]; // 0xddc
	public:
		bool m_bNeedsBeamReset; // 0xde8		
	};
};
