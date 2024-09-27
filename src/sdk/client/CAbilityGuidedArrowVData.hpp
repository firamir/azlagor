#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1a30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityGuidedArrowVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x1540		
		client::CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x15c8		
		float m_flCameraHoldAtExplosion; // 0x1650		
		float m_flFadeToBlackTime; // 0x1654		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle; // 0x1658		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle; // 0x1738		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GuidedArrowChannelParticle; // 0x1818		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ProjectileModel; // 0x18f8		
		float m_ArrowOffsetX; // 0x19d8		
		float m_ArrowCameraDistance; // 0x19dc		
		float m_ArrowCameraHeightOffset; // 0x19e0		
		float m_ArrowInitialPitch; // 0x19e4		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier; // 0x19e8		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x19f8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1a08		
		// MPropertyStartGroup "Gameplay"
		float m_flTrackAmount; // 0x1a18		
		float m_flSpeedAccel; // 0x1a1c		
		float m_flSpeedDeccel; // 0x1a20		
		float m_flBaseProjectileSpeed; // 0x1a24		
		float m_flMaxProjectileSpeed; // 0x1a28		
		float m_flArrowModelTurnSpringStrength; // 0x1a2c		
	};
};
