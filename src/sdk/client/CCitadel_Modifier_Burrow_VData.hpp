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
	class CCitadel_Modifier_Burrow_VData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowPlayerParticle; // 0x608		
		float m_flDesatAmount; // 0x6e8		
		Color m_DesatTint; // 0x6ec		
		Color m_SatTint; // 0x6f0		
		Color m_Outline; // 0x6f4		
	};
};
