#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x110
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_CatAnimatingVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x28		
		Color m_cGlowColor; // 0x108		
	};
};