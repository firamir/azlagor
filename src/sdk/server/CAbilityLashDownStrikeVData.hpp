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
	// Size: 0x1a30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityLashDownStrikeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle; // 0x1540		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1620		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle; // 0x1630		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle; // 0x1710		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle; // 0x17f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle; // 0x18d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_StompExplosionSound; // 0x19b0		
		CSoundEventName m_StompEnemyImpactSound; // 0x19c0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DownStrikeModifier; // 0x19d0		
		CEmbeddedSubclass<server::CBaseModifier> m_ImpactModifier; // 0x19e0		
		// MPropertyStartGroup "+Down Strike Params"
		float m_flHeightUILingerTime; // 0x19f0		
		float m_flDamageFrustumHalfWidth; // 0x19f4		
		float m_flDamageFrustumAngle; // 0x19f8		
		float m_flDamageWaveSpeed; // 0x19fc		
		float m_flDamageTraceProbeDamageRadius; // 0x1a00		
		float m_flDamageTraceProbeWorldRadius; // 0x1a04		
		float m_flDamageTraceProbeStepUpHeight; // 0x1a08		
		float m_flDamageTraceProbeStepDownHeight; // 0x1a0c		
		float m_flDamageTraceProbeDropDownRate; // 0x1a10		
		float m_flInitialDamageRadiusInMeters; // 0x1a14		
		int32_t m_nGroundCrackGap; // 0x1a18		
		float m_flGroupLengthTolerance; // 0x1a1c		
		float m_flDamageEffectScaleMin; // 0x1a20		
		float m_flDamageEffectScaleMax; // 0x1a24		
		float m_flTrackAmount; // 0x1a28		
	};
};
