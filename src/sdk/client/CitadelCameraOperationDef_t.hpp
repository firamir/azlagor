#pragma once
#include "client/CameraOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// Is Abstract
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CitadelCameraOperationDef_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::CameraOperation m_eCameraOperation; // 0x8		
		// MPropertySuppressExpr "m_eCameraOperation == k_ECameraOp_Lag"
		// MPropertyDescription "All operation source and target values are considered relative to the default values"
		bool m_bValuesAreRelative; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
	public:
		float m_flDelay; // 0x10		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Maintain"
		// MPropertyDescription "How long to hold the current value"
		float m_flMaintainDuration; // 0x14		
		// MPropertySuppressExpr "m_bMaintainCurrent == true || m_eCameraOperation != k_ECameraOp_Maintain"
		// MPropertyDescription "What float value to maintain"
		float m_flMaintainFloat; // 0x18		
		// MPropertySuppressExpr "m_bMaintainCurrent == true || m_eCameraOperation != k_ECameraOp_Maintain"
		// MPropertyDescription "What vector value to maintain"
		Vector m_vecMaintainVector; // 0x1c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Maintain"
		// MPropertyDescription "Maintain the current value. NOTE: This should only really be used for positions, when wanting to stay at a certain spot, like after guided arrow, otherwise it will break when multiple contexts change."
		bool m_bMaintainCurrent; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
	public:
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "How fast to approach the target value"
		float m_flApproachSpeed; // 0x2c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "Acceleration as we approach the target value"
		float m_flApproachAcceleration; // 0x30		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "Minimum time to try approaching"
		float m_flApproachMinDuration; // 0x34		
		// MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam == 4"
		// MPropertyDescription "The target value"
		float m_flApproachTarget; // 0x38		
		// MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam != 4"
		// MPropertyDescription "The target value"
		Vector m_vApproachTarget; // 0x3c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "If true, approaches the dafault value.  If false, allows specifying a target value"
		bool m_bApproachDefault; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
	public:
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Strength of the spring.  Larger is stronger"
		float m_flSpringStrength; // 0x4c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Minimum speed of the spring.  Useful is the spring strength is low or the target is near."
		float m_flSpringMinSpeed; // 0x50		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Maximum time to spring to the target"
		float m_flSpringMaxDuration; // 0x54		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "If true, spring to the default value.  If false, allows specifing the target value"
		bool m_bSpringToDefault; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
	public:
		// MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam == 4"
		// MPropertyDescription "The target value to spring to"
		float m_flSpringTarget; // 0x5c		
		// MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam != 4"
		// MPropertyDescription "The target value to spring to"
		Vector m_vSpringTarget; // 0x60		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "If true, start lerping from the current value.  If false, allows specifying the start lerp value"
		bool m_bLerpStartAtCurrent; // 0x6c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "If true, lerp to the default value.  If false, allows specifying the end lerp value"
		bool m_bLerpEndAtDefault; // 0x6d		
	private:
		[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
	public:
		// MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
		// MPropertyDescription "The start lerp value"
		float m_flLerpStart; // 0x70		
		// MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
		// MPropertyDescription "The end lerp value"
		float m_flLerpEnd; // 0x74		
		// MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
		// MPropertyDescription "The start lerp value"
		Vector m_vLerpStart; // 0x78		
		// MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
		// MPropertyDescription "The end lerp value"
		Vector m_vLerpEnd; // 0x84		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "A bias on the lerp"
		float m_flLerpBias; // 0x90		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "A gain on the lerp"
		float m_flLerpGain; // 0x94		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "How long to lerp from start to end"
		float m_flLerpDuration; // 0x98		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "Minimum time to have the spring active"
		float m_flLagMinDuration; // 0x9c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "How long to let the value lag behind before springing to the default value"
		float m_flLagTime; // 0xa0		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "While lagging behind, the max value we can approach the target value."
		float m_flLagMaxSpeed; // 0xa4		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "Once the lag period is over, how strong the spring is that pulls the current value to the default value"
		float m_flLagSpringStrength; // 0xa8		
	};
};
