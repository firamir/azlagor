#pragma once
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
	// Size: 0x1150
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_MidBossVData : public server::CAI_CitadelNPCVData
	{
	public:
		int32_t m_iStartingHealth; // 0xf58		
		int32_t m_iHealthGainPerMinute; // 0xf5c		
		float m_flAggroTime; // 0xf60		
	private:
		[[maybe_unused]] uint8_t __pad0f64[0x4]; // 0xf64
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingSmallExplosion; // 0xf68		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingFinalExplosion; // 0x1048		
		float m_flDyingDuration; // 0x1128		
	private:
		[[maybe_unused]] uint8_t __pad112c[0x4]; // 0x112c
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_KnockbackAura; // 0x1130		
		CEmbeddedSubclass<server::CCitadelModifier> m_AggroEnemy; // 0x1140		
	};
};
