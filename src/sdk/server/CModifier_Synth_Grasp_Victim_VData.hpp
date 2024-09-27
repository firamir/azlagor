#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Synth_Grasp_Victim_VData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strVictimTetheredSound; // 0x608		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GraspVictimParticle; // 0x618		
	};
};
