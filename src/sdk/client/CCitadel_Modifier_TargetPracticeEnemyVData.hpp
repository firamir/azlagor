#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "client/CCitadel_Modifier_Base_Buildup.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x908
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_TargetPracticeEnemyVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuildupCompleteModifier; // 0x618		
		CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier; // 0x628		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle; // 0x638		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x718		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadParticle; // 0x7f8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strTargetHitSound; // 0x8d8		
		CSoundEventName m_strTargetHeadShotHitSound; // 0x8e8		
		CSoundEventName m_strTargetCompleteSound; // 0x8f8		
	};
};
