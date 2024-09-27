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
	// Size: 0x8f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Bebop_LaserBeamVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x608		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle; // 0x618		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal; // 0x6f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle; // 0x7d8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strLaserStartSound; // 0x8b8		
		CSoundEventName m_strLaserEndSound; // 0x8c8		
		CSoundEventName m_strLaserLoopSound; // 0x8d8		
		CSoundEventName m_strLaserHitSound; // 0x8e8		
	};
};
