#pragma once
#include "server/CAI_NPC_TrooperVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1690
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_TrooperBossVData : public server::CAI_NPC_TrooperVData
	{
	public:
		bool m_bMitigateDamageFromPlayers; // 0x1620		
		bool m_bBarracksGuardian; // 0x1621		
	private:
		[[maybe_unused]] uint8_t __pad1622[0x2]; // 0x1622
	public:
		float m_flPlayerAutoAttackRange; // 0x1624		
		float m_flMinMeleeAttackTime; // 0x1628		
	private:
		[[maybe_unused]] uint8_t __pad162c[0x4]; // 0x162c
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier; // 0x1630		
		CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier; // 0x1640		
		CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen; // 0x1650		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sAngryStart; // 0x1660		
		CSoundEventName m_sAngryLoop; // 0x1670		
		CSoundEventName m_sAngryStop; // 0x1680		
	};
};
