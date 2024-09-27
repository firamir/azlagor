#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xbf8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bHoldingBall"
	class CCitadel_Ability_WreckingBall : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		client::ParticleIndex_t m_nBallParticle; // 0xaf0		
		client::ParticleIndex_t m_nCastCompleteParticle; // 0xaf4		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetsHit; // 0xaf8		
	private:
		[[maybe_unused]] uint8_t __pad0b10[0xe0]; // 0xb10
	public:
		// MNetworkEnable
		bool m_bHoldingBall; // 0xbf0		
	};
};
