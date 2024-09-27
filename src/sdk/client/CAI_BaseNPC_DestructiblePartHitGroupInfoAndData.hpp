#pragma once
#include "client/CAI_BaseNPC_DestructiblePartData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CAI_BaseNPC_DestructiblePartHitGroupInfoAndData
	{
	public:
		// MPropertyDescription "Name for this destructible part."
		CUtlString m_sName; // 0x0		
		// MPropertyDescription "Do we disable the hitgroup when all sub parts are destroyed?"
		bool m_bDisableHitGroupWhenDestroyed; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
	public:
		// MPropertyDescription "Data for this destructible part."
		// MPropertyAutoExpandSelf
		CUtlVector<client::CAI_BaseNPC_DestructiblePartData> m_DestructiblePartsData; // 0x10		
	};
};
