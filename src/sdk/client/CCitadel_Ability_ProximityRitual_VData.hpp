#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x1ac0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ProximityRitual_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle; // 0x17e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle; // 0x18c0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle; // 0x19a0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strRecallSound; // 0x1a80		
		CSoundEventName m_strKilledSound; // 0x1a90		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PredatoryStatueModifier; // 0x1aa0		
		// MPropertyStartGroup "Gameplay"
		float m_flHeavyMeleeDmg; // 0x1ab0		
		float m_flLightMeleeDmg; // 0x1ab4		
		float m_flAbilityDamageScale; // 0x1ab8		
		float m_flNPCDamageMax; // 0x1abc		
	};
};
