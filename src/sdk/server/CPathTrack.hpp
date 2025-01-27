#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
#include "server/TrackOrientationType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x530
	// Has VTable
	class CPathTrack : public server::CPointEntity
	{
	public:
		server::CPathTrack* m_pnext; // 0x4d8		
		server::CPathTrack* m_pprevious; // 0x4e0		
		server::CPathTrack* m_paltpath; // 0x4e8		
		float m_flRadius; // 0x4f0		
		float m_length; // 0x4f4		
		CUtlSymbolLarge m_altName; // 0x4f8		
		int32_t m_nIterVal; // 0x500		
		server::TrackOrientationType_t m_eOrientationType; // 0x504		
		entity2::CEntityIOOutput m_OnPass; // 0x508		
		
		// Static fields:
		static int32_t &Get_s_nCurrIterVal(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bIsIterating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->GetStaticFields()[1]->m_pInstance);};
		
		// Datamap fields:
		// void InputPass; // 0x0
		// void InputEnableAlternatePath; // 0x0
		// void InputDisableAlternatePath; // 0x0
		// void InputToggleAlternatePath; // 0x0
		// void InputEnablePath; // 0x0
		// void InputDisablePath; // 0x0
		// void InputTogglePath; // 0x0
	};
};
