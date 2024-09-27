#pragma once
#include "client/TrooperType_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CAI_CitadelNPCVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAI_NPC_TrooperVData : public server::CAI_CitadelNPCVData
	{
	public:
		client::TrooperType_t m_TrooperType; // 0xf58		
		float m_flTrooperDamageResistPct; // 0xf5c		
		float m_flT1BossDamageResistPct; // 0xf60		
		float m_flT2BossDamageResistPct; // 0xf64		
		float m_flBarrackGuardianDamageResistPct; // 0xf68		
		float m_flNearDeathDuration; // 0xf6c		
		float m_flFlySpeed; // 0xf70		
		float m_flFlyHeight; // 0xf74		
		float m_flMeleeDamage; // 0xf78		
		float m_flMeleeDuration; // 0xf7c		
		float m_flMeleeChargeRange; // 0xf80		
		float m_flAttackT1BossMaxRange; // 0xf84		
		float m_flAttackTrooperMaxRange; // 0xf88		
		float m_flShieldDamageResistPct; // 0xf8c		
		float m_flHealthBarOffsetDucking; // 0xf90		
		// MPropertyStartGroup "Trooper DPS"
		// MPropertyDescription "Trooper vs Trooper DPS"
		float m_flTrooperDPS; // 0xf94		
		// MPropertyDescription "Trooper vs Player DPS"
		float m_flPlayerDPS; // 0xf98		
		// MPropertyDescription "Trooper vs T1 Guardian DPS"
		float m_flT1BossDPS; // 0xf9c		
		// MPropertyDescription "Trooper vs T2 Guardian DPS"
		float m_flT2BossDPS; // 0xfa0		
		// MPropertyDescription "Trooper vs T3 Guardian DPS"
		float m_flT3BossDPS; // 0xfa4		
		// MPropertyDescription "Trooper vs Barrack Guardian DPS"
		float m_flBarrackBossDPS; // 0xfa8		
		// MPropertyDescription "Trooper vs Generator DPS"
		float m_flGeneratorBossDPS; // 0xfac		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle; // 0xfb0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle; // 0x1090		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle; // 0x1170		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle; // 0x1250		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle; // 0x1330		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle; // 0x1410		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sPlayerLastHitSound; // 0x15d0		
		CSoundEventName m_sCelebrationSound; // 0x15e0		
		CSoundEventName m_sZiplineContainerBreakSound; // 0x15f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_NearDeathModifier; // 0x1600		
		CEmbeddedSubclass<server::CCitadelModifier> m_TrooperBossInvulnModifier; // 0x1610		
	};
};
