#pragma once
#include "server/CCitadelModifier.hpp"
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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Unstoppable : public server::CCitadelModifier
	{
	public:
		CUtlVector<server::CCitadelModifier*> m_vecCheckedModifiers; // 0xc0		
	};
};
