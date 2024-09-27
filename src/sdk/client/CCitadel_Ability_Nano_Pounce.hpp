#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf38
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "EHANDLE m_hCurrentTarget"
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDeparturePosition"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
	class CCitadel_Ability_Nano_Pounce : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x268]; // 0xc70
	public:
		// MNetworkEnable
		bool m_bActive; // 0xed8		
	private:
		[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hCurrentTarget; // 0xedc		
		// MNetworkEnable
		Vector m_vStartPosition; // 0xee0		
		// MNetworkEnable
		Vector m_vDeparturePosition; // 0xeec		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flDepartureTime; // 0xef8		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flArrivalTime; // 0xf10		
		Vector m_vLastKnownSafePos; // 0xf28		
	};
};
