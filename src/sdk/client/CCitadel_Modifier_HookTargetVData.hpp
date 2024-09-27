#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x738
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_HookTargetVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
		float m_flApproachingWhooshAnticipationTime; // 0x608		
		float m_flCloseEnoughDistance; // 0x60c		
		float m_flTossUpSpeed; // 0x610		
	private:
		[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x618		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle; // 0x628		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strRetractSound; // 0x708		
		CSoundEventName m_strRetractSoundEnd; // 0x718		
		CSoundEventName m_strApproachingWhooshSound; // 0x728		
	};
};
