#pragma once
#include "materialsystem2/MaterialParam_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct MaterialParamTexture_t : public materialsystem2::MaterialParam_t
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pValue; // 0x8		
	};
};