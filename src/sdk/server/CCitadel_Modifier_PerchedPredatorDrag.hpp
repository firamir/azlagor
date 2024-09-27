#pragma once
#include "server/CCitadelModifier.hpp"
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
	// Size: 0x150
	// Has VTable
	class CCitadel_Modifier_PerchedPredatorDrag : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		QAngle m_qRelativeOffset; // 0x130		
		float m_flRelativeDist; // 0x13c		
		Vector m_vecOffsetDir; // 0x140		
		CHandle<server::CBaseEntity> m_hFollowEnt; // 0x14c		
	};
};
