#pragma once

#include "CoreMinimal.h"
#include "Core/StateMachine/StateBase.h"

/**
 * 状态机
 */
class FStateMachine
{
public:
	// 当前状态
	FStateBase* GetCurrentState() const { return CurrentState; }

	// 初始化
	void InitialState(FStateBase* StartState);

	// 切换状态
	void ChangeState(FStateBase* NewState);

private:
	FStateBase* CurrentState = nullptr;
};
