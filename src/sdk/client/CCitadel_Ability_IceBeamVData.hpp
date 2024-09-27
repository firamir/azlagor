#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_Base_Buildup.hpp"
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
	// Size: 0x1780
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_IceBeamVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1620		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x1700		
		CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier; // 0x1710		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuildupProcModifier; // 0x1720		
		// MPropertyStartGroup "Sound"
		CSoundEventName m_BeamStartSound; // 0x1730		
		CSoundEventName m_BeamStopSound; // 0x1740		
		CSoundEventName m_BeamPointStartLoopSound; // 0x1750		
		CSoundEventName m_BeamPointEndLoopSound; // 0x1760		
		CSoundEventName m_BeamPointClosestLoopSound; // 0x1770		
	};
};
