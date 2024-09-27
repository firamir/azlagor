#pragma once
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x738
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertySuppressBaseClassField
	class CCitadel_Modifier_BaseBulletPreRollProcVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
		bool m_bRollOnceForAllBulletsInAShot; // 0x638		
	private:
		[[maybe_unused]] uint8_t __pad0639[0x3]; // 0x639
	public:
		// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
		float m_flMaxBulletsToProcInShot; // 0x63c		
		// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
		bool m_bCanProcMultipleTimesFromSameShot; // 0x640		
		// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
		bool m_bRequiresTargetFilter; // 0x641		
	private:
		[[maybe_unused]] uint8_t __pad0642[0x6]; // 0x642
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle; // 0x648		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
		CSoundEventName m_OnBulletRolledProcSound; // 0x728		
	};
};
