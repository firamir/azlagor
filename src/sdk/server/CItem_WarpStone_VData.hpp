#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1780
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CItem_WarpStone_VData : public server::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_CasterModifier; // 0x1588		
		CEmbeddedSubclass<server::CCitadelModifier> m_CasterDebuffModifier; // 0x1598		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x15a8		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle; // 0x15b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle; // 0x1698		
		// MPropertyGroupName "Gameplay"
		float m_flTeleportDistance; // 0x1778		
	};
};
