#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CNPC_TrooperNeutralVData.hpp"
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x12e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_TrooperNeutralNodeMoverVData : public client::CNPC_TrooperNeutralVData
	{
	public:
		// MPropertyStartGroup "Node Movement"
		bool m_bEnableMovementToNodes; // 0x12c0		
	private:
		[[maybe_unused]] uint8_t __pad12c1[0x3]; // 0x12c1
	public:
		tier2::CRangeFloat m_flExposedDuration; // 0x12c4		
		tier2::CRangeFloat m_flHideDuration; // 0x12cc		
	private:
		[[maybe_unused]] uint8_t __pad12d4[0x4]; // 0x12d4
	public:
		CEmbeddedSubclass<client::CCitadelModifier> m_HidingModifier; // 0x12d8		
	};
};