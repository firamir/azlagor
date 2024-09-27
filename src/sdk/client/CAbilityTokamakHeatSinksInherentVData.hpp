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
	// Size: 0x1730
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityTokamakHeatSinksInherentVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotTracerParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotWeaponFxParticle; // 0x1620		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHotWeaponShootSound; // 0x1700		
		CSoundEventName m_strOverheatRed; // 0x1710		
		CSoundEventName m_strOverheatFull; // 0x1720		
	};
};
