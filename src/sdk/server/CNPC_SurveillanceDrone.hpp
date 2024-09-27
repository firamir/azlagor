#pragma once
#include "server/CNPC_FlyingDrone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x16b8
	// Has VTable
	class CNPC_SurveillanceDrone : public server::CNPC_FlyingDrone
	{
	public:
		int32_t m_iMinionHealth; // 0x1658		
		float m_flLifetime; // 0x165c		
	private:
		[[maybe_unused]] uint8_t __pad1660[0xc]; // 0x1660
	public:
		Vector m_vecHome; // 0x166c		
	private:
		[[maybe_unused]] uint8_t __pad1678[0x10]; // 0x1678
	public:
		int32_t m_nAbilityLevel; // 0x1688		
	};
};
