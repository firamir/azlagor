#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "client/DOFDesc_t.hpp"
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
	class CCitadel_Ability_PrimaryWeaponVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyDescription "The DOF settings to apply while zoomed in."
		client::DOFDesc_t m_DOFWhileZoomed; // 0x1540		
		// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
		bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1550		
	private:
		[[maybe_unused]] uint8_t __pad1551[0x7]; // 0x1551
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyFriendlyName "Fire while disarmed sound"
		CSoundEventName m_sDisarmedSound; // 0x1558		
		float m_flMinDisarmedSoundInterval; // 0x1568		
	private:
		[[maybe_unused]] uint8_t __pad156c[0x4]; // 0x156c
	public:
		CSoundEventName m_sObstructedShotSound; // 0x1570		
		// MPropertyStartGroup "Action Reload"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
		float m_flActionReloadTimingStart; // 0x1580		
		// MPropertyDescription "If we have action reloads, how long is the window"
		float m_flActionReloadTimingDuration; // 0x1584		
	};
};
