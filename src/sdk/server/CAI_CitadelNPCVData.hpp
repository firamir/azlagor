#pragma once
#include "client/CCitadelWeaponInfo.hpp"
#include "client/EAbilitySlots_t.hpp"
#include "resourcesystem/InfoForResourceTypeCNmGraphVariation.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CAI_BaseNPCVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	class CAI_CitadelNPCVData : public server::CAI_BaseNPCVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphVariation>> m_sAG2VariationName; // 0x230		
		CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities; // 0x310		
		float m_flSightRangePlayers; // 0x338		
		float m_flSightRangeNPCs; // 0x33c		
		CGlobalSymbol m_MeleeAnimName; // 0x340		
		float m_flMeleeAttemptRange; // 0x348		
		float m_flMeleeHitRange; // 0x34c		
		CUtlVector<float> m_MeleeAttackPoints; // 0x350		
		float m_flMaxHealthBarDrawDistance; // 0x368		
		// MPropertyStartGroup "Movement"
		float m_flWalkSpeed; // 0x36c		
		float m_flRunSpeed; // 0x370		
		float m_flTurnRate; // 0x374		
		float m_flAcceleration; // 0x378		
		float m_flStepHeight; // 0x37c		
		int8_t m_navHull; // 0x380		
		bool m_bFaceTargetEvenWhenMoving; // 0x381		
	private:
		[[maybe_unused]] uint8_t __pad0382[0x6]; // 0x382
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_BeamStartSound; // 0x388		
		CSoundEventName m_BeamStopSound; // 0x398		
		CSoundEventName m_BeamPointStartLoopSound; // 0x3a8		
		CSoundEventName m_BeamPointEndLoopSound; // 0x3b8		
		CSoundEventName m_BeamPointClosestLoopSound; // 0x3c8		
		CSoundEventName m_strAmbientLoopSound; // 0x3d8		
		CSoundEventName m_DeathSound; // 0x3e8		
		CSoundEventName m_strLastHitSound; // 0x3f8		
		bool m_bPlayLastHitSound; // 0x408		
	private:
		[[maybe_unused]] uint8_t __pad0409[0x7]; // 0x409
	public:
		CSoundEventName m_MeleeHitSound; // 0x410		
		CSoundEventName m_MeleeHitPlayerSound; // 0x420		
		// MPropertyStartGroup "Visuals"
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sDefaultMaterialGroupName; // 0x430		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sEnemyMaterialGroupName; // 0x438		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sTeam1MaterialGroupName; // 0x440		
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
		CUtlString m_sTeam2MaterialGroupName; // 0x448		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle; // 0x450		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle; // 0x530		
		float m_flModelScale; // 0x610		
	private:
		[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
	public:
		// MPropertyDescription "Particle to play instead of doing a ragdoll"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle; // 0x618		
		// MPropertyStartGroup "Health Bar"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle; // 0x6f8		
		CUtlString m_sHealthBarAttachment; // 0x7d8		
		Color m_HealthBarColorFriend; // 0x7e0		
		Color m_HealthBarColorEnemy; // 0x7e4		
		Color m_HealthBarColorTeam1; // 0x7e8		
		Color m_HealthBarColorTeam2; // 0x7ec		
		Color m_HealthBarColorTeamNeutral; // 0x7f0		
		// MPropertyStartGroup "Misc"
		float m_flHealthBarOffset; // 0x7f4		
		// MPropertyStartGroup "Beam Weapon"
		float m_flBeamWeaponWidth; // 0x7f8		
		float m_flBeamTurnRate; // 0x7fc		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle; // 0x800		
		// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
		float m_flPhysicsImpulseMultiplier; // 0x8e0		
	private:
		[[maybe_unused]] uint8_t __pad08e4[0x4]; // 0x8e4
	public:
		client::CCitadelWeaponInfo m_WeaponInfo; // 0x8e8		
	};
};
