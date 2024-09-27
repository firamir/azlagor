#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1720
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_SettingSun_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamTargetParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle; // 0x1620		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_SettingSunThinkerModifier; // 0x1700		
		float m_flSSCameraPreviewOffset; // 0x1710		
		float m_flSSCameraPreviewSpeed; // 0x1714		
		float m_flSSCameraPreviewDistance; // 0x1718		
	};
};
