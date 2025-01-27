#pragma once
#include "client/CRemapFloat.hpp"
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
	// Size: 0x1b78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityTangoTetherVData : public server::CitadelAbilityVData
	{
	public:
		float m_flJumpFallSpeedMax; // 0x1540		
		float m_flJumpAirDrag; // 0x1544		
		float m_flJumpAirSpeedMax; // 0x1548		
		float m_flJumpSpeed; // 0x154c		
		float m_flJumpPitch; // 0x1550		
		float m_flDashSpeed; // 0x1554		
		float m_flDashCloseEnoughToTarget; // 0x1558		
		float m_flDashLockOntoTargetDist; // 0x155c		
		float m_flVelocityTurnSpringStrength; // 0x1560		
		client::CRemapFloat m_flAngleToSpeedScale; // 0x1564		
		float m_flBackswingDuration; // 0x1574		
		float m_flAnimToStrikePointTime; // 0x1578		
		float m_flGrappleShotFloatTime; // 0x157c		
		float m_flGrappleShotDelayToFlyOnHit; // 0x1580		
		float m_flGrappleSpeed; // 0x1584		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_TetherModifier; // 0x1588		
		CEmbeddedSubclass<server::CBaseModifier> m_GrappleTargetModifier; // 0x1598		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle; // 0x15a8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1688		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle; // 0x1768		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle; // 0x1848		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle; // 0x1928		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDamageTarget; // 0x1a08		
		CSoundEventName m_strStartDash; // 0x1a18		
		CSoundEventName m_strStartAttack; // 0x1a28		
		CSoundEventName m_strGrappleHitTarget; // 0x1a38		
		CSoundEventName m_strGrappleHitWorld; // 0x1a48		
		CSoundEventName m_strGrappleHitNothing; // 0x1a58		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a68		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1af0		
	};
};
