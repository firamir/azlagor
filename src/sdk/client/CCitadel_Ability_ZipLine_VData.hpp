#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/DOFDesc_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1e28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ZipLine_VData : public client::CitadelAbilityVData
	{
	public:
		float m_flMinButtonHoldTimeToActivate; // 0x1540		
		float m_flCrouchDropSpeedFraction; // 0x1544		
		float m_flCrouchDropAirDragSuppressDuration; // 0x1548		
		float m_flDetachDisallowedTime; // 0x154c		
		float m_flCameraWobbleIntensity; // 0x1550		
		// MPropertyDescription "The DOF settings to apply while riding the zipline."
		client::DOFDesc_t m_DOFWhileZiplining; // 0x1554		
	private:
		[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle; // 0x1568		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle; // 0x1648		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle; // 0x1728		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle; // 0x1808		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle; // 0x18e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle; // 0x19c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle; // 0x1aa8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strZipLineSummonSound; // 0x1b88		
		CSoundEventName m_strZipLineLatchedSound; // 0x1b98		
		CSoundEventName m_strZipLineStartSound; // 0x1ba8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_RidingZipLineModifier; // 0x1bb8		
		CEmbeddedSubclass<client::CCitadelModifier> m_KnockedOffSlowModifier; // 0x1bc8		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineIntroModifier; // 0x1bd8		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineKnockdownImmuneModifier; // 0x1be8		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineSlowModifier; // 0x1bf8		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1c08		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c90		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1d18		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1da0		
	};
};
