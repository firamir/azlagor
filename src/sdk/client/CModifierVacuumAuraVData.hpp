#pragma once
#include "client/CCitadelModifierAuraVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVacuumAuraVData : public client::CCitadelModifierAuraVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FinishParticle; // 0x648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AlliedParticle; // 0x728		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyParticle; // 0x808		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x8e8		
	};
};
