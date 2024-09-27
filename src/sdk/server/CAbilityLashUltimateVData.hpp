#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseLockonAbilityVData.hpp"
#include "server/CCitadel_Modifier_LashGrappleEnemy_Debuff.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1940
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityLashUltimateVData : public server::CBaseLockonAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle; // 0x1560		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle; // 0x1640		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastParticle; // 0x1720		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastEnemyParticle; // 0x1800		
		// MPropertyStartGroup "Animation"
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x18e0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadel_Modifier_LashGrappleEnemy_Debuff> m_GrappleEnemyModifier; // 0x18e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_GrabSound; // 0x18f8		
		CSoundEventName m_MissSound; // 0x1908		
		CSoundEventName m_ThrowSound; // 0x1918		
		// MPropertyStartGroup "+Ultimate Properties"
		float m_flAirSpeedMax; // 0x1928		
		float m_flFallSpeedMax; // 0x192c		
		float m_flAirDrag; // 0x1930		
		float m_flMaxPitchRangeScale; // 0x1934		
		float m_flThrowAnimTossPoint; // 0x1938		
	};
};
