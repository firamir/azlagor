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
	// Size: 0xd90
	// Has VTable
	class CCitadel_Ability_Wrecker_Ultimate : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x20]; // 0xc70
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
		QAngle m_angBeamAngles; // 0xc90		
	private:
		[[maybe_unused]] uint8_t __pad0c9c[0xc]; // 0xc9c
	public:
		bool m_bNeedsBeamReset; // 0xca8		
	};
};
