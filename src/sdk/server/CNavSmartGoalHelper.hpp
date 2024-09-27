#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	class CNavSmartGoalHelper
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xa8]; // 0x0
	public:
		bool m_bExecuteQueuedGoal; // 0xa8		
		
		// Datamap fields:
		// void m_pNPC; // 0x8
		// void m_pGoalAutoDoor; // 0x10
		// void m_pGoalPrimary; // 0x20
		// void m_pQueuedSmartGoal; // 0x30
	};
};
