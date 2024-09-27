#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
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
	// Size: 0x1700
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityBullChargeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x1540		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierTossAirControlLockout; // 0x15c8		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierWeaponPowerIncrease; // 0x15d8		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierChargeDragEnemy; // 0x15e8		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierBullCharging; // 0x15f8		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle; // 0x1608		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWallSlamSound; // 0x16e8		
		// MPropertyStartGroup "GamePlay"
		float m_flWallStunLookAheadDist; // 0x16f8		
	};
};
