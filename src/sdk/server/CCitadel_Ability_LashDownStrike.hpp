#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xdb8
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vStrikeVel"
	// MNetworkVarNames "float m_flStartHeight"
	class CCitadel_Ability_LashDownStrike : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0xa8]; // 0xae8
	public:
		entity2::GameTime_t m_ImpactTime; // 0xb90		
		Vector m_vDamagePos; // 0xb94		
		Vector m_vDamageDir; // 0xba0		
	private:
		[[maybe_unused]] uint8_t __pad0bac[0x4]; // 0xbac
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vHitEnemies; // 0xbb0		
	private:
		[[maybe_unused]] uint8_t __pad0bc8[0x1c]; // 0xbc8
	public:
		client::ParticleIndex_t m_PreviewEffect; // 0xbe4		
	private:
		[[maybe_unused]] uint8_t __pad0be8[0x1c0]; // 0xbe8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStrikeVel; // 0xda8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flStartHeight; // 0xdb4		
	};
};
