#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x16b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMeleeParryVData : public client::CitadelAbilityVData
	{
	public:
		float m_flWhiffDuration; // 0x1540		
		float m_flMovementRestrictionTime; // 0x1544		
		float m_flActiveTime; // 0x1548		
		float m_flParryEndVisualTime; // 0x154c		
		float m_flSuccessActiveTime; // 0x1550		
		float m_flBossVictimNoMeleeTime; // 0x1554		
		float m_flBossVictimCalmTime; // 0x1558		
	private:
		[[maybe_unused]] uint8_t __pad155c[0x4]; // 0x155c
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle; // 0x1560		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSuccessfulParrySound; // 0x1640		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryActiveModifier; // 0x1650		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier; // 0x1660		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryCooldownModifier; // 0x1670		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryEndVisualModifier; // 0x1680		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimNoMeleeModifier; // 0x1690		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimCalmModifier; // 0x16a0		
	};
};
