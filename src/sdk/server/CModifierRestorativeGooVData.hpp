#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x758
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierRestorativeGooVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooEndParticle; // 0x608		
		float m_flDistanceCameraOffsetLerpTime; // 0x6e8		
		float m_flDistanceCameraOffsetBias; // 0x6ec		
		float m_flDistanceCameraOffset; // 0x6f0		
	private:
		[[maybe_unused]] uint8_t __pad06f4[0x4]; // 0x6f4
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BreakoutProgressBarModifier; // 0x6f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_PostCubeBuffModifier; // 0x708		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_NonTargetLoopingSound; // 0x718		
		CSoundEventName m_TargetLoopingSound; // 0x728		
		CSoundEventName m_LightMeleeImpact; // 0x738		
		CSoundEventName m_HeavyMeleeImpact; // 0x748		
	};
};
