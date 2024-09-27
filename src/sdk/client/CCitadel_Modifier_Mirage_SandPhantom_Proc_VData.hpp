#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertySuppressBaseClassField
	class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
		bool m_bRollOnceForAllBulletsInAShot; // 0x608		
	private:
		[[maybe_unused]] uint8_t __pad0609[0x3]; // 0x609
	public:
		// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
		float m_flMaxBulletsToProcInShot; // 0x60c		
		// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
		bool m_bCanProcMultipleTimesFromSameShot; // 0x610		
		// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
		bool m_bRequiresTargetFilter; // 0x611		
	private:
		[[maybe_unused]] uint8_t __pad0612[0x6]; // 0x612
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PassiveVictimModifier; // 0x618		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcReadyParticle; // 0x628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle; // 0x708		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x7e8		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
		CSoundEventName m_OnBulletRolledProcSound; // 0x8c8		
		CSoundEventName m_ExplodeSound; // 0x8d8		
	};
};
