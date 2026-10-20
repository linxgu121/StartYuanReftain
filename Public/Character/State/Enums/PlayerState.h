#pragma once

#include "CoreMinimal.h"

/**
 *   玩家角色状态
 */
enum class EPlayerState : uint8
{
	// 以下为上身尚未持有状态

	EmptyHandsIdle,

	EmptyHandsWalk,

	EmptyHandsSprint,

	EmptyHandsJump,

	EmptyHandsFall,

	EmptyHandsLand,

	EmptyHandsCrount,

	EmptyHandsSlide,

	//以下为上半身叠加下半身状态

	HoldItemIdle,

	HoldItemWalk,

	HoldItemSprint,

	HoldItemJump,

	HoldItemFall,

	HoldItemLand,

	HoldItemCrount,

	HoldItemSlide,

	// 以下为全身动作

	Roll,

	Vault,

	Death
};
