#pragma once

#include "CoreMinimal.h"

/**
 *  全身状态
 */
enum class EFullBodyState : uint8
{
	// 翻滚
	Roll,

	// 翻越
	Vault,

	// 死亡
	Death

};
