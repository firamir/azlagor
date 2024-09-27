#pragma once
#include "client/CRemapFloat.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x18a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityJumpVData : public server::CitadelAbilityVData
	{
	public:
		float m_flShootingLockoutAfterJump; // 0x1540		
	private:
		[[maybe_unused]] uint8_t __pad1544[0x4]; // 0x1544
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle; // 0x1548		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle; // 0x1628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle; // 0x1708		
		// MPropertyStartGroup "Air Jump"
		CSoundEventName m_AirJumpExecutedSound; // 0x17e8		
		float m_flMantleRefundWindow; // 0x17f8		
		float m_flZiplineRefundWindow; // 0x17fc		
		float m_flLateJumpGraceWindow; // 0x1800		
		// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
		float m_flMaxSpeedDelta; // 0x1804		
		// MPropertyStartGroup "Roll Jump"
		CSoundEventName m_strDashJumpActivate; // 0x1808		
		float m_flDashJumpStartTime; // 0x1818		
		float m_flDashJumpEndTime; // 0x181c		
		// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
		float m_flDashJumpDistanceInMeters; // 0x1820		
	private:
		[[maybe_unused]] uint8_t __pad1824[0x4]; // 0x1824
	public:
		float m_flDashJumpVerticalSpeed; // 0x1828		
		float m_flDashJumpMissMaxSpeed; // 0x182c		
		float m_flDashJumpMantleDisableTime; // 0x1830		
	private:
		[[maybe_unused]] uint8_t __pad1834[0x4]; // 0x1834
	public:
		// MPropertyStartGroup "Wall Jump"
		CSoundEventName m_WallJumpExecutedSound; // 0x1838		
		// MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
		float m_flCollidedWallMaxDist; // 0x1848		
		// MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
		client::CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x184c		
		// MPropertyDescription "Speed to apply away from the wall"
		float m_flWallJumpNormalSpeed; // 0x185c		
		// MPropertyDescription "Air-Drag after using a wall jump"
		CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1860		
		// MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
		float m_flMaxWallYawOffset; // 0x18a0		
	};
};
