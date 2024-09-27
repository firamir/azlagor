#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseShivAbility.hpp"
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
	// Size: 0xef8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "EHANDLE m_hCurrentTarget"
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDeparturePosition"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
	// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
	class CCitadel_Ability_Shiv_KillingBlow : public server::CCitadelBaseShivAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x1c0]; // 0xae8
	public:
		// MNetworkEnable
		bool m_bActive; // 0xca8		
	private:
		[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hCurrentTarget; // 0xcac		
		// MNetworkEnable
		Vector m_vStartPosition; // 0xcb0		
		// MNetworkEnable
		Vector m_vDeparturePosition; // 0xcbc		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flDepartureTime; // 0xcc8		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flArrivalTime; // 0xce0		
		Vector m_vLastKnownSafePos; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0d04[0x4]; // 0xd04
	public:
		client::ParticleIndex_t m_ChannelParticle; // 0xd08		
	private:
		[[maybe_unused]] uint8_t __pad0d0c[0xc]; // 0xd0c
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flDrainSuppressEndTime; // 0xd18		
	private:
		[[maybe_unused]] uint8_t __pad0d1c[0x1c4]; // 0xd1c
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_BuffModifier; // 0xee0		
	};
};
