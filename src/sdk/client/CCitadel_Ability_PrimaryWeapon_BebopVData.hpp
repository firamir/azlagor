#pragma once
#include "client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x16c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_BebopVData : public client::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWindupSound; // 0x1588		
		CSoundEventName m_strBeamStartSound; // 0x1598		
		CSoundEventName m_strBeamLoopSound1; // 0x15a8		
		CSoundEventName m_strBeamLoopSound2; // 0x15b8		
		CSoundEventName m_strBeamStopSound; // 0x15c8		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szWeaponBeamParticle; // 0x15d8		
		// MPropertyStartGroup "Misc"
		float m_flWindupRepeatCycle; // 0x16b8		
	};
};
