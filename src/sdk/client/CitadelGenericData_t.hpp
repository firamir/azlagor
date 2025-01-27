#pragma once
#include "client/CRemapFloat.hpp"
#include "client/CurrencySound_t.hpp"
#include "client/DOFDesc_t.hpp"
#include "client/DamageFlashSettings_t.hpp"
#include "client/DamageIndicatorSounds_t.hpp"
#include "client/DamageReceivedSounds_t.hpp"
#include "client/EAbilityResourceType.hpp"
#include "client/ECurrencyType.hpp"
#include "client/EDamageFlashType.hpp"
#include "client/EStatsType.hpp"
#include "client/EUISound.hpp"
#include "client/GlitchSettings_t.hpp"
#include "client/HealingReceivedSounds_t.hpp"
#include "client/HeroAbilityResourceDef_t.hpp"
#include "client/IdolParams_t.hpp"
#include "client/LaneDesc_t.hpp"
#include "client/NewPlayerMetrics_t.hpp"
#include "client/RejuvinatorParams_t.hpp"
#include "client/TeleporterParams_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe60
	// 
	// MVDataRoot
	// MVDataSingleton
	// MGetKV3ClassDefaults
	struct CitadelGenericData_t
	{
	public:
		CUtlOrderedMap<client::EDamageFlashType,client::DamageFlashSettings_t> m_mapDamageFlash; // 0x0		
		client::GlitchSettings_t m_GlitchSettings; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
	public:
		CUtlOrderedMap<client::ECurrencyType,client::CurrencySound_t> m_CurrencyTypeSounds; // 0x58		
		CUtlOrderedMap<client::EUISound,CSoundEventName> m_UISounds; // 0x80		
		client::DamageReceivedSounds_t m_DamageReceivedSounds; // 0xa8		
		client::HealingReceivedSounds_t m_HealingReceivedSounds; // 0x108		
		client::DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x138		
		CSoundEventName m_strExitCombatSound; // 0x198		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShoppingEffect; // 0x1a8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MinimapZiplinesParticle; // 0x288		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillStreakFireParticle; // 0x368		
		client::LaneDesc_t m_LaneInfo[6]; // 0x448		
		client::LaneDesc_t m_NoLaneZip; // 0x508		
		Color m_MinimapTeamRebelsColor; // 0x528		
		Color m_MinimapTeamCombineColor; // 0x52c		
		client::NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x530		
		int32_t m_nItemPricePerTier[5]; // 0x5f0		
	private:
		[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
	public:
		CUtlVector<CSubclassName<4>> m_HeroTestingTargetDummyUpgrades; // 0x608		
	private:
		[[maybe_unused]] uint8_t __pad0620[0x58]; // 0x620
	public:
		client::DOFDesc_t m_DefaultDOF; // 0x678		
		client::RejuvinatorParams_t m_RejuvParams; // 0x688		
		client::IdolParams_t m_IdolParams; // 0x6a8		
		client::TeleporterParams_t m_TeleporterParams; // 0xc00		
		CUtlOrderedMap<client::EStatsType,CUtlString> m_mapStatTypeImages; // 0xdf0		
		// MPropertyDescription "Remap camera angle delta to aim spring strength"
		client::CRemapFloat m_AimSpringStrength; // 0xe18		
		// MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
		client::CRemapFloat m_TargetingSpringStrength; // 0xe28		
		CUtlOrderedMap<client::EAbilityResourceType,client::HeroAbilityResourceDef_t> m_mapResourceTypes; // 0xe38		
	};
};
