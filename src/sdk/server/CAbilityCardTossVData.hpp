#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1730
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCardTossVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard; // 0x1620		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCardTossSound; // 0x1700		
		CSoundEventName m_strCardSummonSound; // 0x1710		
		// MPropertyStartGroup "+Card Toss Properties"
		float m_flSummonedCardStartSideOffset; // 0x1720		
		float m_flSummonedCardSideOffsetStep; // 0x1724		
		float m_flSummonedCardForwardOffset; // 0x1728		
		float m_flSummonedCardVerticalOffset; // 0x172c		
	};
};
