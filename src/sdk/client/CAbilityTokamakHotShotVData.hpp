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
	// Size: 0x1910
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityTokamakHotShotVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_LaserModifier; // 0x1540		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strLaserStartSound; // 0x1550		
		CSoundEventName m_strLaserEndSound; // 0x1560		
		CSoundEventName m_strLaserLoopSound; // 0x1570		
		CSoundEventName m_strLaserHitSound; // 0x1580		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle; // 0x1590		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle; // 0x1670		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1750		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle; // 0x1830		
	};
};
