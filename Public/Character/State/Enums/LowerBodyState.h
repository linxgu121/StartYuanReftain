
#pragma once

#include "CoreMinimal.h"

/**
 * 角色下半身运动状态
 */
enum class ELowerBodyState : uint8
{
	//  待机状态
	Idle = 0,

	// 走
	Walk,

	// 冲刺
	Sprint,

	// 跳跃
	Jump,

	// 下落
	Fall,

	// 着陆
	Land,

    // 下蹲
	Crouch,

	// 滑铲
	Slide

};
