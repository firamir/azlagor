#pragma once
#include "client/AmbientParticleSettings_t.hpp"
#include "client/CFootstepTableHandle.hpp"
#include "client/CitadelStatsDisplay_t.hpp"
#include "client/EAbilityResourceType.hpp"
#include "client/EAbilitySlots_t.hpp"
#include "client/EItemSlotTypes_t.hpp"
#include "client/EModifierValue.hpp"
#include "client/EStatsType.hpp"
#include "client/HeroAnimGraphDefaultValueOverride_t.hpp"
#include "client/HeroID_t.hpp"
#include "client/HeroLevel_t.hpp"
#include "client/HeroPurchaseBonus_t.hpp"
#include "client/HeroScalingStat_t.hpp"
#include "client/HeroStatsDisplay_t.hpp"
#include "client/HeroStatsUI_t.hpp"
#include "client/ItemSlotInfo_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeCVSoundEventScriptList.hpp"
#include "resourcesystem/InfoForResourceTypeIAnimGraphModelBinding.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataAssociatedFile
	// MVDataOverlayType "1"
	struct CitadelHeroData_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlVector<client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
	public:
		client::HeroID_t m_HeroID; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		// MPropertyStartGroup "Screen Space Particle FX"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle; // 0x30		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle; // 0x110		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle; // 0x1f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle; // 0x2d0		
		// MPropertyStartGroup "Visuals"
		CPanoramaImageName m_strSelectionImage; // 0x3b0		
		CPanoramaImageName m_strIconImageSmall; // 0x3c0		
		CPanoramaImageName m_strIconHeroCard; // 0x3d0		
		CPanoramaImageName m_strMinimapImage; // 0x3e0		
		CPanoramaImageName m_strTopBarImage; // 0x3f0		
		CPanoramaImageName m_strTopBarVertical; // 0x400		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle; // 0x410		
		Color m_colorUI; // 0x4f0		
	private:
		[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hAmbientParticle; // 0x4f8		
		CUtlVector<client::AmbientParticleSettings_t> m_vecAmbientParticleSettings; // 0x5d8		
		Color m_colorGlowFriendly; // 0x5f0		
		Color m_colorGlowEnemy; // 0x5f4		
		Color m_colorGlowTeam1; // 0x5f8		
		Color m_colorGlowTeam2; // 0x5fc		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strModelName; // 0x600		
		int32_t m_nModelSkin; // 0x6e0		
	private:
		[[maybe_unused]] uint8_t __pad06e4[0x4]; // 0x6e4
	public:
		// MPropertyDescription "If specified, this model will be used in steam public universe only."
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strPublicModelName; // 0x6e8		
		// MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName; // 0x7c8		
		// MPropertyStartGroup "UI"
		// MPropertyDescription "AnimGraph for UI"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding>> m_strUIAnimGraph; // 0x8a8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding>> m_strUIShopAnimGraph; // 0x988		
		// MPropertyAttributeEditor "AssetBrowse( vmap )"
		CUtlString m_strUIPortraitMap; // 0xa68		
		// MPropertyAttributeEditor "AssetBrowse( vmap )"
		CUtlString m_strUIShoppingMap; // 0xa70		
		client::HeroStatsUI_t m_heroStatsUI; // 0xa78		
		client::HeroStatsDisplay_t m_heroStatsDisplay; // 0xaa8		
		client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0xb38		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDeathSound; // 0xbe0		
		CSoundEventName m_strLastHitSound; // 0xbf0		
		CSoundEventName m_strRosterSelectedSound; // 0xc00		
		CSoundEventName m_strRosterRemovedSound; // 0xc10		
		CSoundEventName m_strFootstepSoundEventDefault; // 0xc20		
		CSoundEventName m_strLowHealthSound; // 0xc30		
		CSoundEventName m_strHeroSpecificLowHealthSound; // 0xc40		
		CSoundEventName m_strMovementLoop; // 0xc50		
		// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
		client::CFootstepTableHandle m_hFootstepSounds; // 0xc60		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript; // 0xc68		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript; // 0xd48		
		float m_flFootstepSoundTravelDistanceMeters; // 0xe28		
		float m_flStealthSpeedMetersPerSecond; // 0xe2c		
		float m_flStepSoundTime; // 0xe30		
		float m_flStepSoundTimeSprinting; // 0xe34		
		// MPropertyStartGroup
		float m_flCollisionRadius; // 0xe38		
		float m_flCollisionHeight; // 0xe3c		
		float m_flStepHeight; // 0xe40		
		bool m_bInDevelopment; // 0xe44		
		bool m_bAssignedPlayersOnly; // 0xe45		
		bool m_bBotSelectable; // 0xe46		
		bool m_bNewPlayerRecommended; // 0xe47		
		bool m_bLaneTestingRecommended; // 0xe48		
		bool m_bNeedsTesting; // 0xe49		
		bool m_bLimitedTesting; // 0xe4a		
		bool m_bDisabled; // 0xe4b		
		bool m_bPlayerSelectable; // 0xe4c		
	private:
		[[maybe_unused]] uint8_t __pad0e4d[0x3]; // 0xe4d
	public:
		int32_t m_nComplexity; // 0xe50		
		int32_t m_nReadability; // 0xe54		
		// MPropertyStartGroup "Low Health Settings"
		// MPropertyDescription "Percentage of health to be considered low health"
		// MPropertyAttributeRange "0 1"
		float m_flMinLowHealthPercentage; // 0xe58		
		// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
		// MPropertyAttributeRange "0 1"
		float m_flMaxLowHealthPercentage; // 0xe5c		
		// MPropertyDescription "Percentage of health to be considered mid health"
		// MPropertyAttributeRange "0 1"
		float m_flMinMidHealthPercentage; // 0xe60		
		// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
		// MPropertyAttributeRange "0 1"
		float m_flMaxMidHealthPercentage; // 0xe64		
		// MPropertyDescription "Min Max Health for Remapped Value"
		float m_flMinHealthForThreshold; // 0xe68		
		// MPropertyDescription "Max Max Health for remapped value"
		float m_flMaxHealthForThreshold; // 0xe6c		
		// MPropertyStartGroup
		CUtlOrderedMap<client::EStatsType,float> m_mapStartingStats; // 0xe70		
		CUtlOrderedMap<client::EStatsType,client::HeroScalingStat_t> m_mapScalingStats; // 0xe98		
	private:
		[[maybe_unused]] uint8_t __pad0ec0[0x18]; // 0xec0
	public:
		CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities; // 0xed8		
		CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities; // 0xf00		
		CUtlOrderedMap<client::EItemSlotTypes_t,client::ItemSlotInfo_t> m_mapItemSlotInfo; // 0xf28		
		CUtlVector<CSubclassName<4>> m_RecommendedUpgrades; // 0xf50		
	private:
		[[maybe_unused]] uint8_t __pad0f68[0x70]; // 0xf68
	public:
		CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder; // 0xfd8		
	private:
		[[maybe_unused]] uint8_t __pad0ff0[0x18]; // 0xff0
	public:
		client::EAbilityResourceType m_eAbilityResourceType; // 0x1008		
	private:
		[[maybe_unused]] uint8_t __pad100c[0x1c]; // 0x100c
	public:
		CUtlOrderedMap<client::EModifierValue,float> m_mapStandardLevelUpUpgrades; // 0x1028		
		CUtlOrderedMap<int32_t,client::HeroLevel_t> m_mapLevelInfo; // 0x1050		
		CUtlOrderedMap<client::EItemSlotTypes_t,CUtlVector<client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses; // 0x1078		
	};
};
