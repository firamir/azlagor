#pragma once
#include "client/ENeutralTrooperType.hpp"
#include "client/MoveType_t.hpp"
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
	// Size: 0x12c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_TrooperNeutralVData : public server::CAI_CitadelNPCVData
	{
	public:
		client::ENeutralTrooperType m_eTrooperType; // 0xf58		
		float m_flGoldReward; // 0xf5c		
		float m_flGoldRewardBonusPercentPerMinute; // 0xf60		
		bool m_bGiveGoldOnHit; // 0xf64		
		bool m_bOrbDropper; // 0xf65		
		bool m_bCapSimultanousAttackers; // 0xf66		
	private:
		[[maybe_unused]] uint8_t __pad0f67[0x1]; // 0xf67
	public:
		float m_flShieldReactivateDelay; // 0xf68		
		float m_flDyingDuration; // 0xf6c		
		// MPropertyStartGroup "Behavior"
		// MPropertyFriendlyName "Damaged by Bullets?"
		bool m_bDamagedByBullets; // 0xf70		
		// MPropertyFriendlyName "Damaged by Melee?"
		bool m_bDamagedByMelee; // 0xf71		
		// MPropertyFriendlyName "Damaged by Abilities?"
		bool m_bDamagedByAbilities; // 0xf72		
		// MPropertyFriendlyName "Fixed Melee Damage?"
		bool m_bFixedMeleeDamage; // 0xf73		
	private:
		[[maybe_unused]] uint8_t __pad0f74[0x4]; // 0xf74
	public:
		// MPropertyStartGroup "Shield FX"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle; // 0xf78		
		// MPropertyStartGroup "Retaliation Attack"
		// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
		float m_flRetaliateDamage; // 0x1058		
		float m_flRetaliateCooldown; // 0x105c		
		// MPropertyDescription "Particle to play when dealing retaliate damage"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle; // 0x1060		
		// MPropertyStartGroup "AOE Attack"
		bool m_bHasAOEAttack; // 0x1140		
	private:
		[[maybe_unused]] uint8_t __pad1141[0x3]; // 0x1141
	public:
		float m_flAOERadius; // 0x1144		
		float m_flAOEDamage; // 0x1148		
		float m_flAOEAttackCooldown; // 0x114c		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle; // 0x1150		
		CEmbeddedSubclass<server::CCitadelModifier> m_AOEDebuffToApply; // 0x1230		
		CSoundEventName m_AOEInitiateSound; // 0x1240		
		CSoundEventName m_AOESound; // 0x1250		
		float m_AOEDebuffDuration; // 0x1260		
	private:
		[[maybe_unused]] uint8_t __pad1264[0x4]; // 0x1264
	public:
		// MPropertyStartGroup "Body"
		CUtlVector<CUtlString> m_vecRandomBodyGroup; // 0x1268		
		CUtlVector<CUtlString> m_vecRandomSkin; // 0x1280		
		// MPropertyStartGroup "Visuals"
		float m_flHullCapsuleRadius; // 0x1298		
		float m_flHullCapsuleHeight; // 0x129c		
		// MPropertyStartGroup "Idles"
		bool m_bFaceEnemyWhileIdle; // 0x12a0		
	private:
		[[maybe_unused]] uint8_t __pad12a1[0x7]; // 0x12a1
	public:
		CSoundEventName m_IdleLoopSound; // 0x12a8		
		// MPropertyStartGroup "Movement"
		client::MoveType_t m_MoveType; // 0x12b8		
	};
};
