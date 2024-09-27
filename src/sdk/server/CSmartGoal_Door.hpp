#pragma once
#include "client/MoveType_t.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/INavSmartGoal.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	class CSmartGoal_Door : public server::INavSmartGoal
	{
	public:
		CHandle<server::CBaseEntity> m_hDoor; // 0x10		
		CHandle<server::CBaseEntity> m_hPathCornerGoalPostDoor; // 0x14		
		CModifierHandleTyped<server::CCitadelModifier> m_hModifierInteractionIKLock; // 0x18		
		Vector m_vGoalPostDoor; // 0x30		
		client::MoveType_t m_PrevMoveType; // 0x3c		
	private:
		[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
	public:
		float m_flDoorSpeed; // 0x40		
		bool m_bUseAnimatedInteraction; // 0x44		
		bool m_bOpenAway; // 0x45		
	private:
		[[maybe_unused]] uint8_t __pad0046[0x2]; // 0x46
	public:
		int32_t m_nState; // 0x48		
		bool m_bInterrupted; // 0x4c		
	};
};
