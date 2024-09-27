#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadelYamatoBaseVData.hpp"
#include "client/CRemapFloat.hpp"
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
	// Size: 0x1b88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityFlyingStrikeVData : public client::CCitadelYamatoBaseVData
	{
	public:
		// MPropertyStartGroup "+Cast Properties"
		float m_flJumpFallSpeedMax; // 0x1548		
		float m_flJumpAirDrag; // 0x154c		
		float m_flJumpAirSpeedMax; // 0x1550		
		// MPropertyStartGroup "+Dash Properties"
		float m_flDashSpeed; // 0x1554		
		float m_flDashCloseEnoughToTarget; // 0x1558		
		float m_flDashLockOntoTargetDist; // 0x155c		
		float m_flTargetMinSpeedToStopChasing; // 0x1560		
		float m_flVelocityTurnSpringStrength; // 0x1564		
		client::CRemapFloat m_flAngleToSpeedScale; // 0x1568		
		// MPropertyStartGroup "+Attack Properties"
		float m_flAnimToStrikePointTime; // 0x1578		
		// MPropertyStartGroup "+Grapple Properties"
		float m_flGrappleShotFloatTime; // 0x157c		
		float m_flGrappleShotDelayToFlyOnHit; // 0x1580		
		float m_flGrappleSpeed; // 0x1584		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier; // 0x1588		
		CEmbeddedSubclass<client::CBaseModifier> m_GrappleTargetModifier; // 0x1598		
		CEmbeddedSubclass<client::CBaseModifier> m_WeaponBuffModifier; // 0x15a8		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle; // 0x15b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1698		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle; // 0x1778		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle; // 0x1858		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle; // 0x1938		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDamageTarget; // 0x1a18		
		CSoundEventName m_strStartDash; // 0x1a28		
		CSoundEventName m_strStartAttack; // 0x1a38		
		CSoundEventName m_strGrappleHitTarget; // 0x1a48		
		CSoundEventName m_strGrappleHitWorld; // 0x1a58		
		CSoundEventName m_strGrappleHitNothing; // 0x1a68		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a78		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1b00		
	};
};
