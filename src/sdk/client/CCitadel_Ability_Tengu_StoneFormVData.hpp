#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tengu_StoneFormVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StoneFormParticle; // 0x1700		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_CastTargetSound; // 0x17e0		
		CSoundEventName m_strImpactSound; // 0x17f0		
		// MPropertyDescription "Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strTrueFormModel; // 0x1800		
		// MPropertyStartGroup "+Stone Form Params"
		float m_flLandHoldTime; // 0x18e0		
		float m_flRisingTime; // 0x18e4		
	};
};
