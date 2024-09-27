#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierAuraVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVacuumAuraVData : public server::CCitadelModifierAuraVData
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
