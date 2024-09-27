#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_VoidSphereVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportModelParticle; // 0x8a8		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_BuffModifier; // 0x988		
		// MPropertyGroupName "Misc"
		float m_flPreTeleportDuration; // 0x998		
	private:
		[[maybe_unused]] uint8_t __pad099c[0x4]; // 0x99c
	public:
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x9a0		
	};
};
