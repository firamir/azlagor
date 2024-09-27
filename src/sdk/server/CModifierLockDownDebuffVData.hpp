#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierLockDownDebuffVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleCaster; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleEnemy; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleOthers; // 0x8a8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strFollowLoop; // 0x988		
		CSoundEventName m_strExplodeSound; // 0x998		
		CSoundEventName m_strEscapedSound; // 0x9a8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_RootModifier; // 0x9b8		
		CEmbeddedSubclass<server::CCitadelModifier> m_BulletResistModifier; // 0x9c8		
	};
};
