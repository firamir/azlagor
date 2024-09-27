#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x16d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Upgrade_MagicCarpetVData : public server::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle; // 0x1588		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_FlyingCarpetModifier; // 0x1668		
		CEmbeddedSubclass<server::CCitadelModifier> m_SummonFlyingCarpetModifier; // 0x1678		
		CEmbeddedSubclass<server::CCitadelModifier> m_SummonFlyingCarpetVisualModifier; // 0x1688		
		CEmbeddedSubclass<server::CCitadelModifier> m_FlyingCarpetVisualModifier; // 0x1698		
		CEmbeddedSubclass<server::CCitadelModifier> m_ShieldModifier; // 0x16a8		
		// MPropertyStartGroup "Gameplay"
		float m_flSummonVisualDuration; // 0x16b8		
		float m_flBurstSpeedBonus; // 0x16bc		
		float m_flBurstSpeedMin; // 0x16c0		
		float m_flBurstSpeedDuration; // 0x16c4		
		float m_flMinDistanceAboveGround; // 0x16c8		
	};
};
