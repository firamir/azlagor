#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0x258
	// Has VTable
	class CCitadel_Modifier_ChronoSwap_BubbleMove : public server::CCitadelModifier
	{
	public:
		bool m_bOtherIsInFrontAtStart; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
	public:
		Vector m_vOtherToDest; // 0xc4		
		Vector m_vStart; // 0xd0		
		Vector m_vDest; // 0xdc		
		CHandle<server::CBaseEntity> m_hOther; // 0xe8		
		Vector m_vLastSafePos; // 0xec		
		int32_t m_nNumTicks; // 0xf8		
		int32_t m_nTicksLeft; // 0xfc		
		client::ParticleIndex_t m_nBeamIndex; // 0x100		
	};
};