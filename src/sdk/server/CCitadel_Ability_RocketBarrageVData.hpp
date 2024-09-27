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
	// Size: 0x16e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_RocketBarrageVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BarrageModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_MoveSlowModifier; // 0x1550		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1560		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1640		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x1650		
		// MPropertyStartGroup "+Rocket Barrage Properties"
		float m_flMoveSpeedReductionPct; // 0x16d8		
		float m_flHeightTestDistance; // 0x16dc		
	};
};
