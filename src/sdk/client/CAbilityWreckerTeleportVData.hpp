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
	// Size: 0x1918
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityWreckerTeleportVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x17e0		
		float m_ArrowOffsetX; // 0x18c0		
		float m_ArrowCameraDistance; // 0x18c4		
		float m_ArrowCameraHeightOffset; // 0x18c8		
		float m_ArrowInitialPitch; // 0x18cc		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier; // 0x18d0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x18e0		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x18f0		
		// MPropertyStartGroup "Gameplay"
		float m_flTrackAmount; // 0x1900		
		float m_flSpeedAccel; // 0x1904		
		float m_flSpeedDeccel; // 0x1908		
		float m_flBaseProjectileSpeed; // 0x190c		
		float m_flMaxProjectileSpeed; // 0x1910		
	};
};
