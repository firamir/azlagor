#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_BaseBulletPreRollProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x838
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Mirage_SandPhantom_Passive_VData : public server::CCitadel_Modifier_BaseBulletPreRollProcVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_PassiveVictimModifier; // 0x738		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x748		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x828		
	};
};
