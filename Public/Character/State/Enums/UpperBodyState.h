
#pragma once

#include "CoreMinimal.h"

/**
 *  上半身状态
 */
enum class EUpperBodyState : uint8
{
	// 空手
	EmptyHands,

	// 持有物品
	HoldItem,

	// 不可用
	Unavailable
};
