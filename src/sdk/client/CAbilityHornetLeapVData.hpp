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
	// Size: 0x1800
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHornetLeapVData : public client::CitadelAbilityVData
	{
	public:
		float m_flChannelingAirDrag; // 0x1540		
		float m_flChannelingMaxFallSpeed; // 0x1544		
		float m_flVerticalMoveSpeedTarget; // 0x1548		
		float m_flAirDrag; // 0x154c		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier; // 0x1550		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle; // 0x1560		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle; // 0x1640		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x1720		
	};
};
