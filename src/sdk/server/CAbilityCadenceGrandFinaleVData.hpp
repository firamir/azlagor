#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1640
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCadenceGrandFinaleVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_StageModel; // 0x1540		
		float m_flStageModelHeight; // 0x1620		
		float m_flStageModelWidth; // 0x1624		
		float m_flStageModelLength; // 0x1628		
		float m_flStageModelScale; // 0x162c		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_GrandFinaleAOEModifier; // 0x1630		
	};
};
