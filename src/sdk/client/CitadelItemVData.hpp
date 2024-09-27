#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "client/EModTier_t.hpp"
#include "client/EShopFilters_t.hpp"
#include "client/ItemSectionInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1588
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CitadelItemVData : public client::CitadelAbilityVData
	{
	private:
		[[maybe_unused]] uint8_t __pad1540[0x4]; // 0x1540
	public:
		client::EModTier_t m_iItemTier; // 0x1544		
		int8_t m_nUpgradeSlotCost; // 0x1545		
		bool m_bWarnIfNoAffectedAbilities; // 0x1546		
		bool m_bRequiresChargedAbility; // 0x1547		
		bool m_bRequiresChanelledAbility; // 0x1548		
	private:
		[[maybe_unused]] uint8_t __pad1549[0x7]; // 0x1549
	public:
		CUtlVector<CSubclassName<4>> m_vecComponentItems; // 0x1550		
		bool m_bShowTextDescription; // 0x1568		
		bool m_bIsDefensiveItem; // 0x1569		
		client::EShopFilters_t m_eShopFilters; // 0x156a		
	private:
		[[maybe_unused]] uint8_t __pad156c[0x4]; // 0x156c
	public:
		// MPropertyFriendlyName "Item Tooltips"
		CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo; // 0x1570		
	};
};
