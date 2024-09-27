#pragma once
#include "server/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelModifier;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_UltCombo_Target : public server::CCitadel_Modifier_Stunned
	{
	public:
		QAngle m_angles; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
	public:
		server::CCitadelModifier* m_pAttachmentModifier; // 0xd8		
	};
};
