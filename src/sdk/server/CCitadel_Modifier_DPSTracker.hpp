#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe8
	// Has VTable
	class CCitadel_Modifier_DPSTracker : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x18]; // 0xc0
	public:
		float m_flInterval; // 0xd8		
		float m_flProgress; // 0xdc		
		float m_flDistToTarget; // 0xe0		
		
		// Static fields:
		static float &Get_k_flHighestDPS(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Modifier_DPSTracker")->GetStaticFields()[0]->m_pInstance);};
	};
};
