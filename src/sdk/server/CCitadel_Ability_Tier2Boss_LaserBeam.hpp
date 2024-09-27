#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelBaseAbilityServerOnly.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb40
	// Has VTable
	class CCitadel_Ability_Tier2Boss_LaserBeam : public server::CCitadelBaseAbilityServerOnly
	{
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_pBeamModifier; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0b00[0x38]; // 0xb00
	public:
		modellib::AttachmentHandle_t m_hAttackPosHigh; // 0xb38		
		modellib::AttachmentHandle_t m_hAttackPosLow; // 0xb39		
		modellib::AttachmentHandle_t m_hAttackPosLeft; // 0xb3a		
		modellib::AttachmentHandle_t m_hAttackPosRight; // 0xb3b		
	};
};
