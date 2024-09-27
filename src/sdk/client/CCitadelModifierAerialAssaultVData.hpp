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
	// Size: 0x7f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAerialAssaultVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_FireRateModifier; // 0x608		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x618		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle; // 0x6f8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x7d8		
		// MPropertyStartGroup "Gameplay"
		float m_flAirDrag; // 0x7e8		
		float m_flAirSpeed; // 0x7ec		
		float m_flFallSpeed; // 0x7f0		
	};
};
