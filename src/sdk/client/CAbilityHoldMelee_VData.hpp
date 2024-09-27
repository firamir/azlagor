#pragma once
#include "client/AttackData_t.hpp"
#include "client/CAbilityMeleeVData.hpp"
#include "client/CCitadelModifier.hpp"
#include "client/CRemapFloat.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/EMeleeHold_AttackType.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1980
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHoldMelee_VData : public client::CAbilityMeleeVData
	{
	public:
		CUtlOrderedMap<client::EMeleeHold_AttackType,client::AttackData_t> m_mapAttacks; // 0x1558		
		float m_flNextAttackOnParry; // 0x1580		
		float m_flParryWindow; // 0x1584		
		float m_flParryStunTime; // 0x1588		
		float m_flParryCooldown; // 0x158c		
		client::CRemapFloat m_AirMeleeUpScale; // 0x1590		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBeginEffect; // 0x15a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle; // 0x1680		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryActivateParticle; // 0x1760		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x1840		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x18c8		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play when starting the hold"
		CSoundEventName m_strHoldBegin; // 0x1950		
		CSoundEventName m_strSuccessfulParrySound; // 0x1960		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier; // 0x1970		
	};
};
