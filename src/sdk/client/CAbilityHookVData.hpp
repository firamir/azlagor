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
	class CAbilityHookVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SelfModifier; // 0x1540		
		CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier; // 0x1550		
		CEmbeddedSubclass<client::CCitadelModifier> m_BulletAmpModifier; // 0x1560		
		CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier; // 0x1570		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle; // 0x1580		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHookSuccessSound; // 0x1660		
		CSoundEventName m_strHookAllySound; // 0x1670		
		CSoundEventName m_strHookMissSound; // 0x1680		
		CSoundEventName m_strHookImpactGeoSound; // 0x1690		
		CSoundEventName m_SelfBuffCastSound; // 0x16a0		
	};
};