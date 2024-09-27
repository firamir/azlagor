#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x9d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_StickyBombAttachedVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BombAttachedParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunAttachedParticle; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BombAttachedVictimTeamParticle; // 0x8a8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x988		
		CSoundEventName m_strTickTockSound; // 0x998		
		CSoundEventName m_strTickTockFastSound; // 0x9a8		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x9b8		
		float m_DetonateWarningTime; // 0x9c8		
	};
};
