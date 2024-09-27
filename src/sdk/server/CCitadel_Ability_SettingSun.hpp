#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd48
	// Has VTable
	class CCitadel_Ability_SettingSun : public server::CCitadelBaseAbility
	{
	public:
		bool m_bProjectileActive; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0ae9[0x18f]; // 0xae9
	public:
		CUtlVector<client::ParticleIndex_t> m_TargetPreviews; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c90[0xb0]; // 0xc90
	public:
		bool m_bWasSelected; // 0xd40		
	};
};
