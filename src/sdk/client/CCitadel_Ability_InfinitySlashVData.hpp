#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelYamatoBaseVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x17d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_InfinitySlashVData : public client::CCitadelYamatoBaseVData
	{
	public:
		float m_flRiseSpeed; // 0x1548		
		float m_flRiseDuration; // 0x154c		
		float m_flSpeedDecayScale; // 0x1550		
		float m_flExplodeHoldTime; // 0x1554		
		float m_flExplosionShakeAmplitude; // 0x1558		
		float m_flExplosionShakeFrequency; // 0x155c		
		float m_flExplosionShakeDuration; // 0x1560		
	private:
		[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect; // 0x1568		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect; // 0x1648		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1728		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x17b0		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffTimerModifier; // 0x17c0		
	};
};
