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
	// Size: 0x700
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierAirLiftGrabVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GrabEffect; // 0x608		
		// MPropertyStartGroup "Gameplay"
		float m_flLiftHorizontal; // 0x6e8		
		float m_flLiftHeight; // 0x6ec		
		float m_flFollowDampingFactor; // 0x6f0		
		float m_flFollowDistance; // 0x6f4		
		float m_flAllyGrabCancelTime; // 0x6f8		
		float m_flAllyPossibleStuckDistance; // 0x6fc		
	};
};