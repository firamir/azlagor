#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd88
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecStartPos"
	// MNetworkVarNames "Vector m_vecPosition"
	// MNetworkVarNames "Vector m_vecInitialPosition"
	// MNetworkVarNames "GameTime_t m_CastTime"
	// MNetworkVarNames "Vector m_vecDirection"
	// MNetworkVarNames "Vector m_vecLeft"
	// MNetworkVarNames "float m_Length"
	// MNetworkVarNames "bool m_bTraveling"
	// MNetworkVarNames "bool m_bPreview"
	class CCitadel_Ability_FissureWall : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x10]; // 0xc70
	public:
		CUtlVector<client::ParticleIndex_t> m_vecWallPreviewParticles; // 0xc80		
	private:
		[[maybe_unused]] uint8_t __pad0c98[0xa8]; // 0xc98
	public:
		// MNetworkEnable
		Vector m_vecStartPos; // 0xd40		
		// MNetworkEnable
		Vector m_vecPosition; // 0xd4c		
		// MNetworkEnable
		Vector m_vecInitialPosition; // 0xd58		
		// MNetworkEnable
		entity2::GameTime_t m_CastTime; // 0xd64		
		// MNetworkEnable
		Vector m_vecDirection; // 0xd68		
		// MNetworkEnable
		Vector m_vecLeft; // 0xd74		
		// MNetworkEnable
		float m_Length; // 0xd80		
		// MNetworkEnable
		// MNetworkChangeCallback "PreviewModeChanged"
		bool m_bTraveling; // 0xd84		
		// MNetworkEnable
		// MNetworkChangeCallback "PreviewModeChanged"
		bool m_bPreview; // 0xd85		
	};
};
