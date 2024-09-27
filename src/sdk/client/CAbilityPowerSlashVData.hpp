#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadelYamatoBaseVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1a68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPowerSlashVData : public client::CCitadelYamatoBaseVData
	{
	public:
		float m_flAirDrag; // 0x1548		
		float m_flMaxPowerPadding; // 0x154c		
		float m_flEffectGroundTrace; // 0x1550		
		float m_flWhizbyMaxRange; // 0x1554		
		float m_flStartPosTestCapsuleLength; // 0x1558		
		// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
		Vector m_vecLongEffectOffset; // 0x155c		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle; // 0x1568		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle; // 0x1648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1728		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1808		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle; // 0x18e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStartSound; // 0x19c8		
		CSoundEventName m_strDamageImpactSound; // 0x19d8		
		CSoundEventName m_strDamageImpactVictimSound; // 0x19e8		
		CSoundEventName m_strPowerUp1Sounds; // 0x19f8		
		CSoundEventName m_strPowerUp2Sounds; // 0x1a08		
		CSoundEventName m_strPowerUp3Sounds; // 0x1a18		
		CSoundEventName m_strWhizbySound; // 0x1a28		
		CSoundEventName m_strSlashSound; // 0x1a38		
		CSoundEventName m_strSlashFullSound; // 0x1a48		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier; // 0x1a58		
	};
};
