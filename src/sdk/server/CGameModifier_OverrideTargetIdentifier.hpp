#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
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
	class CGameModifier_OverrideTargetIdentifier : public server::CCitadelModifier
	{
	public:
		CGlobalSymbol m_sTargetIdentifier; // 0xc0		
		CHandle<server::CBaseEntity> m_hTarget; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		CGlobalSymbol m_sAttachmentName; // 0xd0		
		modellib::AttachmentHandle_t m_hAttachment; // 0xd8		
	};
};
