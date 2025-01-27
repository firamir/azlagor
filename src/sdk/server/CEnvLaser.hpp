#pragma once
#include "server/CBeam.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CSprite;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x830
	// Has VTable
	class CEnvLaser : public server::CBeam
	{
	public:
		CUtlSymbolLarge m_iszLaserTarget; // 0x808		
		server::CSprite* m_pSprite; // 0x810		
		CUtlSymbolLarge m_iszSpriteName; // 0x818		
		Vector m_firePosition; // 0x820		
		float m_flStartFrame; // 0x82c		
		
		// Datamap fields:
		// void CEnvLaserStrikeThink; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputToggle; // 0x0
		// float width; // 0x7fffffff
		// int32_t NoiseAmplitude; // 0x7fffffff
		// int32_t TextureScroll; // 0x7fffffff
		// CUtlString texture; // 0x7fffffff
	};
};
