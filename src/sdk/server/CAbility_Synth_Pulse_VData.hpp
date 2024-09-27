#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1978
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Synth_Pulse_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_EscapeModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1550		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEParticle; // 0x1560		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EffectParticle; // 0x1640		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle; // 0x1720		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1800		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExpireSound; // 0x18e0		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceInSatchel; // 0x18f0		
	};
};
