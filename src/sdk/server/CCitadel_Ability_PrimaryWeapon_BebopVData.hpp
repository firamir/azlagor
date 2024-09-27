#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x16c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_BebopVData : public server::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWindupSound; // 0x1590		
		CSoundEventName m_strBeamStartSound; // 0x15a0		
		CSoundEventName m_strBeamLoopSound1; // 0x15b0		
		CSoundEventName m_strBeamLoopSound2; // 0x15c0		
		CSoundEventName m_strBeamStopSound; // 0x15d0		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szWeaponBeamParticle; // 0x15e0		
		// MPropertyStartGroup "Misc"
		float m_flWindupRepeatCycle; // 0x16c0		
	};
};
