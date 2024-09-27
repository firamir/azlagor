#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_BaseBulletPreRollProcVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x838
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Mirage_SandPhantom_Passive_VData : public client::CCitadel_Modifier_BaseBulletPreRollProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PassiveVictimModifier; // 0x738		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x748		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x828		
	};
};
