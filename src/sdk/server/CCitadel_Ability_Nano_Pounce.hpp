#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
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
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "EHANDLE m_hCurrentTarget"
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDeparturePosition"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
	class CCitadel_Ability_Nano_Pounce : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x268]; // 0xae8
	public:
		// MNetworkEnable
		bool m_bActive; // 0xd50		
	private:
		[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hCurrentTarget; // 0xd54		
		// MNetworkEnable
		Vector m_vStartPosition; // 0xd58		
		// MNetworkEnable
		Vector m_vDeparturePosition; // 0xd64		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flDepartureTime; // 0xd70		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flArrivalTime; // 0xd88		
		Vector m_vLastKnownSafePos; // 0xda0		
	private:
		[[maybe_unused]] uint8_t __pad0dac[0x4]; // 0xdac
	public:
		client::ParticleIndex_t m_CastStartParticle; // 0xdb0		
	};
};
