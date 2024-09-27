#pragma once
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
	// Size: 0x1808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPerchedPredatorVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeBaseParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFriendlyParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeEnemyParticle; // 0x1700		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x17e0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ModifierDragEnemy; // 0x17f0		
		// MPropertyStartGroup "Gameplay"
		float m_flOnHitDetonateTimer; // 0x1800		
		float m_flTraceTravelRadius; // 0x1804		
	};
};
