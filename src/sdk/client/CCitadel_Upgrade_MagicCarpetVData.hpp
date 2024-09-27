#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x16d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Upgrade_MagicCarpetVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle; // 0x1588		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetModifier; // 0x1668		
		CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetModifier; // 0x1678		
		CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetVisualModifier; // 0x1688		
		CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetVisualModifier; // 0x1698		
		CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier; // 0x16a8		
		// MPropertyStartGroup "Gameplay"
		float m_flSummonVisualDuration; // 0x16b8		
		float m_flBurstSpeedBonus; // 0x16bc		
		float m_flBurstSpeedMin; // 0x16c0		
		float m_flBurstSpeedDuration; // 0x16c4		
		float m_flMinDistanceAboveGround; // 0x16c8		
	};
};
