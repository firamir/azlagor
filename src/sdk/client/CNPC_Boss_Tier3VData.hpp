#pragma once
#include "client/CAI_CitadelNPCVData.hpp"
#include "client/CBaseModifier.hpp"
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
	// Size: 0x1858
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_Boss_Tier3VData : public client::CAI_CitadelNPCVData
	{
	public:
		int32_t m_nPhase2Health; // 0xf58		
		float m_flEyeZOffset; // 0xf5c		
		float m_flDefaultMoveSpeed; // 0xf60		
		float m_flNoShieldMoveSpeed; // 0xf64		
		float m_flDyingMoveSpeed; // 0xf68		
		float m_flMovingToFinalPositionSpeed; // 0xf6c		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle; // 0xf70		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle; // 0x1050		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle; // 0x1130		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle; // 0x1210		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName; // 0x12f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DyingSmallExplosion; // 0x13d0		
		CSoundEventName m_AvatarKilledSound; // 0x13e0		
		CSoundEventName m_AvatarBecomePatronSound; // 0x13f0		
		CSoundEventName m_PatronLandedSound; // 0x1400		
		CSoundEventName m_PatronKilledSound; // 0x1410		
		CSoundEventName m_LaserSound; // 0x1420		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_LaserBeamModifier; // 0x1430		
		CEmbeddedSubclass<client::CBaseModifier> m_DyingModifier; // 0x1440		
		CEmbeddedSubclass<client::CBaseModifier> m_VulnerableModifier; // 0x1450		
		CEmbeddedSubclass<client::CBaseModifier> m_Phase1Modifier; // 0x1460		
		CEmbeddedSubclass<client::CBaseModifier> m_Phase2Modifier; // 0x1470		
		CEmbeddedSubclass<client::CBaseModifier> m_BackdoorProtection; // 0x1480		
		CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveRegen; // 0x1490		
		// MPropertyStartGroup "Laser"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle; // 0x14a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect; // 0x1580		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect; // 0x1660		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect; // 0x1740		
		float m_flLaserTargetingZOffset; // 0x1820		
		float m_flLaserTrackingSpeed; // 0x1824		
		float m_flLaserTrackingMaxSpeed; // 0x1828		
		float m_flLaserCastingTrackSpeed; // 0x182c		
		float m_flLaserCastingTrackMaxSpeed; // 0x1830		
		float m_flLaserDPSToPlayers; // 0x1834		
		float m_flLaserDPSToNPCs; // 0x1838		
		float m_flNoShieldLaserTrackingSpeed; // 0x183c		
		float m_flNoShieldLaserTrackingMaxSpeed; // 0x1840		
		float m_flNoShieldLaserCastingTrackSpeed; // 0x1844		
		float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1848		
		float m_flNoShieldLaserDPSToPlayers; // 0x184c		
		float m_flNoShieldLaserDPSToNPCs; // 0x1850		
	};
};
