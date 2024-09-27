#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x828
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierChronoPulseGrenadePulseAreaVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x618		
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
