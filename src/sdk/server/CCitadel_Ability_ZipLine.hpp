#pragma once
#include "client/CNetworkVelocityVector.hpp"
#include "client/EAttachState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0x1040
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flTimeStartZipping"
	// MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
	// MNetworkVarNames "GameTime_t m_flTimeStopZipping"
	// MNetworkVarNames "float m_flCasterSpeed"
	// MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
	// MNetworkVarNames "Vector m_vecAttachPoint"
	// MNetworkVarNames "EHANDLE m_pPrevNode"
	// MNetworkVarNames "EHANDLE m_pNextNode"
	// MNetworkVarNames "GameTime_t m_flTimeEnterState"
	// MNetworkVarNames "GameTime_t m_flLatchTime"
	// MNetworkVarNames "GameTime_t m_flDamagedTime"
	// MNetworkVarNames "EAttachState_t m_eAttachState"
	// MNetworkVarNames "int m_iAttachedZipLineLane"
	// MNetworkVarNames "bool m_bDroppedFromZipline"
	// MNetworkVarNames "Vector m_vAttachZipLineOffset"
	class CCitadel_Ability_ZipLine : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x4d0]; // 0xae8
	public:
		entity2::GameTime_t m_flActivatePressTime; // 0xfb8		
		bool m_bThinking; // 0xfbc		
		bool m_bMoveCollidedPushUp; // 0xfbd		
	private:
		[[maybe_unused]] uint8_t __pad0fbe[0x6]; // 0xfbe
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTimeStartZipping; // 0xfc4		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeForKnockdownProtection; // 0xfc8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flTimeStopZipping; // 0xfcc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flCasterSpeed; // 0xfd0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkVelocityVector m_vecInitialVel; // 0xfd4		
	private:
		[[maybe_unused]] uint8_t __pad0ffc[0xc]; // 0xffc
	public:
		// MNetworkEnable
		Vector m_vecAttachPoint; // 0x1008		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_pPrevNode; // 0x1014		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_pNextNode; // 0x1018		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flTimeEnterState; // 0x101c		
		// MNetworkEnable
		entity2::GameTime_t m_flLatchTime; // 0x1020		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDamagedTime; // 0x1024		
		// MNetworkEnable
		// MNetworkChangeCallback "ZiplingAttachStateChanged"
		client::EAttachState_t m_eAttachState; // 0x1028		
		// MNetworkEnable
		int32_t m_iAttachedZipLineLane; // 0x102c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bDroppedFromZipline; // 0x1030		
		modellib::AttachmentHandle_t m_hAttachZipLine; // 0x1031		
	private:
		[[maybe_unused]] uint8_t __pad1032[0x2]; // 0x1032
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vAttachZipLineOffset; // 0x1034		
	};
};
