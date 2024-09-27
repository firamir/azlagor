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
	// Size: 0x818
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierNikumanVData : public client::CCitadelModifierAuraVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SelfParticle; // 0x648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEFriendParticle; // 0x728		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x808		
	};
};
