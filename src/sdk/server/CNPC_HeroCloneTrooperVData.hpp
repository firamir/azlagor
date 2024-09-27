#pragma once
#include "server/CAI_CitadelNPCVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_HeroCloneTrooperVData : public server::CAI_CitadelNPCVData
	{
	public:
		bool m_bMeleeOnly; // 0xf58		
		bool m_bChargeForward; // 0xf59		
	private:
		[[maybe_unused]] uint8_t __pad0f5a[0x2]; // 0xf5a
	public:
		float m_flMeleeChargeRange; // 0xf5c		
		bool m_bCloneOwnerWeapon; // 0xf60		
	};
};
