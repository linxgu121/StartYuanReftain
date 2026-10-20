#pragma once

#include "CoreMinimal.h"

/*
 *  角色状态基类
 */
class FStateBase
{
public:
	// 保证通过基类指针销毁派生状态时正确调用派生类析构函数
	virtual ~FStateBase() = default;

	// 进入状态
	virtual void Enter() = 0;

	//逻辑更新
	virtual void LogicUpdate(float DeltaTime) = 0;

	//物理更新
	virtual void PhysicsUpdate() = 0;

	//退出状态
	virtual void Exit() = 0;
};
