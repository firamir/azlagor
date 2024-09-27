#pragma once
#include "particles/CBaseRendererSource2.hpp"
#include "particles/ParticleOrientationChoiceList_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x2d80
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CBaseTrailRenderer : public particles::CBaseRendererSource2
	{
	public:
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "orientation type"
		// MPropertySortPriority "750"
		particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2aa8		
		// MPropertyFriendlyName "orientation control point"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		int32_t m_nOrientationControlPoint; // 0x2aac		
		// MPropertyStartGroup "Screenspace Fading and culling"
		// MPropertyFriendlyName "minimum visual screen-size"
		// MPropertySortPriority "900"
		float m_flMinSize; // 0x2ab0		
		// MPropertyFriendlyName "maximum visual screen-size"
		// MPropertySortPriority "900"
		float m_flMaxSize; // 0x2ab4		
		// MPropertyFriendlyName "start fade screen-size"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2ab8		
		// MPropertyFriendlyName "end fade and cull screen-size"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2c18		
		// MPropertyStartGroup "Trail UV Controls"
		// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
		// MPropertySortPriority "800"
		bool m_bClampV; // 0x2d78		
	};
};
