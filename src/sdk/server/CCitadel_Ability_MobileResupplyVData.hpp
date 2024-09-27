#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_MobileResupplyVData : public server::CitadelAbilityVData
	{
	public:
		float m_flResupplyForceScale; // 0x1540		
		float m_flResupplyUp; // 0x1544		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strKilledSound; // 0x1548		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_AuraModifier; // 0x1558		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_DispenserModel; // 0x1568		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprayParticle; // 0x1648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyedParticle; // 0x1728		
	};
};
