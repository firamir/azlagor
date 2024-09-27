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
	// Size: 0x1c48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityViscousBowlingVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx; // 0x1700		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx; // 0x17e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle; // 0x18c0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle; // 0x19a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle; // 0x1a80		
		float m_flVerticalCameraOffsetLerpTime; // 0x1b60		
		float m_flVerticalCameraOffsetBias; // 0x1b64		
		float m_flVerticalCameraOffset; // 0x1b68		
		float m_flDistanceCameraOffsetLerpTime; // 0x1b6c		
		float m_flDistanceCameraOffsetBias; // 0x1b70		
		float m_flDistanceCameraOffset; // 0x1b74		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strPopGraphParamter; // 0x1b78		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_BallJumpSound; // 0x1b80		
		CSoundEventName m_EnterBallSound; // 0x1b90		
		CSoundEventName m_BallLoopSound; // 0x1ba0		
		CSoundEventName m_ExitBallSound; // 0x1bb0		
		CSoundEventName m_WallImpactSound; // 0x1bc0		
		CSoundEventName m_PlayerImpactSound; // 0x1bd0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier; // 0x1be0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DamagePreventionModifier; // 0x1bf0		
		CEmbeddedSubclass<client::CCitadelModifier> m_RollingModifier; // 0x1c00		
		// MPropertyStartGroup "+Ball Parameters"
		float m_flTransformToBallTime; // 0x1c10		
		float m_flTransformFromBallTime; // 0x1c14		
		float m_flAirTurnRatio; // 0x1c18		
		float m_flWallTurnRatioMax; // 0x1c1c		
		float m_flWallTurnRatioMin; // 0x1c20		
		float m_flTurnRatio; // 0x1c24		
		float m_flDefaultBallSpeed; // 0x1c28		
		float m_flFastBallSpeed; // 0x1c2c		
		float m_flSpeedAccel; // 0x1c30		
		float m_flSpeedDeccel; // 0x1c34		
		float m_flElasticity; // 0x1c38		
		float m_flWallCheckGroundOffset; // 0x1c3c		
		float m_flWallPauseTime; // 0x1c40		
		float m_flWallAngleMin; // 0x1c44		
	};
};
