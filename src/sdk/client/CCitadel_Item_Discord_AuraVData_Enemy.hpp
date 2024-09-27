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
	// Size: 0x8e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_Discord_AuraVData_Enemy : public client::CCitadelModifierAuraVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectEnemy; // 0x648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectFriendly; // 0x728		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectSelf; // 0x808		
	};
};
