#pragma once
#include "client/WeakPointParams_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CAI_CitadelNPCVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1438
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_Boss_Tier2VData : public server::CAI_CitadelNPCVData
	{
	public:
		float m_flPlayerInitialSightRange; // 0xf58		
	private:
		[[maybe_unused]] uint8_t __pad0f5c[0x4]; // 0xf5c
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName; // 0xf60		
		// MPropertyStartGroup "Weak Points"
		CUtlVector<client::WeakPointParams_t> m_vecWeakPoints; // 0x1040		
		// MPropertyStartGroup "Electric Beam (Laser)"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect; // 0x1058		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect; // 0x1138		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect; // 0x1218		
		// MPropertyStartGroup "Stomp"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect; // 0x12f8		
		float m_flTossSpeed; // 0x13d8		
		float m_flStompDamage; // 0x13dc		
		float m_flStompTossUpMagnitude; // 0x13e0		
		float m_flStunDuration; // 0x13e4		
		float m_flStompImpactRadius; // 0x13e8		
		float m_flStompImpactHeight; // 0x13ec		
		float m_flSweepRadius; // 0x13f0		
		float m_flSweepSpeed; // 0x13f4		
		float m_flSweepZScale; // 0x13f8		
		float m_flSweepMaxAngle; // 0x13fc		
		float m_flSweepMaxRange; // 0x1400		
		float m_flSweepAdjustSpeed; // 0x1404		
		// MPropertyStartGroup "Gun"
		float m_flBurstDuration; // 0x1408		
		float m_flBurstCooldown; // 0x140c		
		// MPropertyStartGroup "Modifiers"
		// MPropertyDescription "Backdoor Protection Modifier"
		CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier; // 0x1410		
		CEmbeddedSubclass<server::CCitadelModifier> m_InvulModifier; // 0x1420		
		float m_flInvulModifierRange; // 0x1430		
	};
};
