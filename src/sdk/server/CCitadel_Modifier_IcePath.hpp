#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x308
	// Has VTable
	class CCitadel_Modifier_IcePath : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
	public:
		int32_t m_iShardCount; // 0x2f0		
		Vector m_vLastShardPosition; // 0x2f4		
		CHandle<server::CBaseModelEntity> m_hSurfShard; // 0x300		
	};
};
