#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x17c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Synth_PlasmaFlux_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_WeaponDamageBonusModifier; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1630		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCasterLoopingSound; // 0x1710		
		CSoundEventName m_strProjectileExpireSound; // 0x1720		
		CSoundEventName m_strImpactSound; // 0x1730		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x1740		
	};
};
