#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x688
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Wrecker_UltimateVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_EnemyGrabModifier; // 0x608		
		CEmbeddedSubclass<client::CCitadelModifier> m_EnemyThrowModifier; // 0x618		
		CEmbeddedSubclass<client::CCitadelModifier> m_EnemyDamageModifier; // 0x628		
		CEmbeddedSubclass<client::CCitadelModifier> m_InvincibleModifier; // 0x638		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_StartSound; // 0x648		
		CSoundEventName m_AmbientLoopingSound; // 0x658		
		CSoundEventName m_GrabSound; // 0x668		
		CSoundEventName m_ThrowSound; // 0x678		
	};
};
