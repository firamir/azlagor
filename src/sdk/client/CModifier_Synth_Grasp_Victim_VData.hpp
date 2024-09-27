#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x6f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Synth_Grasp_Victim_VData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strVictimTetheredSound; // 0x608		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GraspVictimParticle; // 0x618		
	};
};
