#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1840
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityExplosiveBarrelVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelExplodeParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MirvExplodeParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelBurnParticle; // 0x1700		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x17e0		
		CSoundEventName m_strMirvExplodeSound; // 0x17f0		
		CSoundEventName m_strRiccochetSound; // 0x1800		
		CSoundEventName m_strBarrelSoundLp; // 0x1810		
		CSoundEventName m_strBarrelLaunchSound; // 0x1820		
		CSoundEventName m_strBarrelMeleedSound; // 0x1830		
	};
};
