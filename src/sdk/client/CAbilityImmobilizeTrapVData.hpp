#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x1950
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityImmobilizeTrapVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrapHighlightParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle; // 0x17e0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strTripSound; // 0x18c0		
		CSoundEventName m_strExplodeSound; // 0x18d0		
		CSoundEventName m_strExpiredSound; // 0x18e0		
		CSoundEventName m_strImmobilizeTargetSound; // 0x18f0		
		CSoundEventName m_strArmingSound; // 0x1900		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TrapModifier; // 0x1910		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1920		
		CEmbeddedSubclass<client::CCitadelModifier> m_DotModifier; // 0x1930		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x1940		
	};
};
