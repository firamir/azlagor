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
	// Size: 0x828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierChronoPulseGrenadePulseAreaVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x618		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle; // 0x628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaEffect; // 0x708		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strArmingSound; // 0x7e8		
		CSoundEventName m_strArmedSound; // 0x7f8		
		CSoundEventName m_strLoopingSound; // 0x808		
		CSoundEventName m_strHitSound; // 0x818		
	};
};
