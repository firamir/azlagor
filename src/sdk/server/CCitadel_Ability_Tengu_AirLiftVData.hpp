#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x17d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tengu_AirLiftVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_FlyingModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_GrabModifier; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_HoldBombModifier; // 0x1560		
		CEmbeddedSubclass<server::CCitadelModifier> m_DroppedBuffModifier; // 0x1570		
		CEmbeddedSubclass<server::CCitadelModifier> m_ExplodingAllyModifier; // 0x1580		
		CEmbeddedSubclass<server::CCitadelModifier> m_AoEModifier; // 0x1590		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle; // 0x15a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect; // 0x1680		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1760		
		// MPropertyStartGroup "Gameplay"
		float m_flAirDrag; // 0x1770		
		float m_flMaxFallSpeed; // 0x1774		
		float m_flTargetAirSpeedFast; // 0x1778		
		float m_flTargetAirSpeedBase; // 0x177c		
		float m_flAcceleration; // 0x1780		
		float m_flDecceleration; // 0x1784		
		float m_flAirSideSpeedPercent; // 0x1788		
		float m_flBoostTime; // 0x178c		
		float m_flBoostSpeedUp; // 0x1790		
		float m_flMinFlyHeight; // 0x1794		
		float m_flMaxFlyHeight; // 0x1798		
		float m_flMaxPitchUp; // 0x179c		
		float m_flMaxPitchDown; // 0x17a0		
		float m_flAllyDelayedBoostTime; // 0x17a4		
		float m_flChannelingAirDrag; // 0x17a8		
		float m_flChannelingMaxFallSpeed; // 0x17ac		
		float m_flBombReleaseSpeed; // 0x17b0		
		float m_flBombReleasePitch; // 0x17b4		
		float m_flBombDropReleaseOffset; // 0x17b8		
		float m_flHoldBombOffsetX; // 0x17bc		
		float m_flHoldBombOffsetY; // 0x17c0		
		float m_flHoldBombOffsetZ; // 0x17c4		
		float m_flAnglePitchBias; // 0x17c8		
		float m_flTrackAmount; // 0x17cc		
		float m_flMoveCollideSpeed; // 0x17d0		
	};
};
