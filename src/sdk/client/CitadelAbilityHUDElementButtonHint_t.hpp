#pragma once
#include "client/EHUDElementButtonHintLocType_t.hpp"
#include "client/EHUDElementButtonHintSide_t.hpp"
#include "client/EHUDElementButtonHint_t.hpp"
#include "client/EHUDElementButtonType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	// MPropertyArrayElementNameKey "m_strContext"
	struct CitadelAbilityHUDElementButtonHint_t
	{
	public:
		CUtlString m_strContext; // 0x0		
		// MPropertyDescription "Why type of input is required for this hint"
		client::EHUDElementButtonType_t m_eButtonHintType; // 0xc		
		// MPropertyDescription "What button is used in this hint"
		client::EHUDElementButtonHint_t m_eButton1; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		// MPropertySuppressExpr "m_eButton != EButtonHint_AbilityKey"
		// MPropertyDescription "The default slot's binding might not be right, so you can set an override button to use here"
		CUtlString m_strBindingOverride1; // 0x18		
		// MPropertyDescription "What's the 2nd button used in this hint"
		client::EHUDElementButtonHint_t m_eButton2; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
	public:
		// MPropertySuppressExpr "m_eButton != EButtonHint_AbilityKey || m_eButtonHintType != EButtonHintType_TwoButtonCombination"
		// MPropertyDescription "The default slot's binding might not be right, so you can set an override button to use here"
		CUtlString m_strBindingOverride2; // 0x28		
		// MPropertyDescription "'Cast' and 'Alt-Cast' will look at the ability vdata for the loc tokens for casting.  'Custom' allows entering a loc token on this hint"
		client::EHUDElementButtonHintLocType_t m_eHintLocType; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
	public:
		// MPropertyDescription "The loc string to display.  Don't forget the #!"
		// MPropertySuppressExpr "m_eHintLocType != EButtonHintLocType_Custom"
		CUtlString m_strLocToken; // 0x38		
		// MPropertyDescription "On which side of the crosshair should this hint show"
		client::EHUDElementButtonHintSide_t m_eHintSide; // 0x40		
		// MPropertyAttributeRange "0 2"
		// MPropertyDescription "How close to the crosshair to be.  Hints are next to the crosshair when by themselves, but get ordered by this priority when multiple are active on the same side.  0 is highest priority (closest to crosshair)"
		int32_t m_nPriority; // 0x44		
		// MPropertyDescription "Should show ability icon on the hint?"
		bool m_bShowAbilityIcon; // 0x48		
		// MPropertyDescription "Is the hint shown while on cooldown?"
		bool m_bIsHintShownWhileOnCooldown; // 0x49		
	};
};
