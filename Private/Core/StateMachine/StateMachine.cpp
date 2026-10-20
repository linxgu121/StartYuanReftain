#include "Core/StateMachine/StateMachine.h"

void FStateMachine::InitialState(FStateBase* StartState)
{
	CurrentState = StartState;
	if (CurrentState)
	{
		CurrentState->Enter();
	}

}

void FStateMachine::ChangeState(FStateBase* NewState)
{
	if(NewState == nullptr || NewState == CurrentState)
	{
		return;
	}

	if (CurrentState != nullptr)
	{
		CurrentState->Exit();
	}

	CurrentState = NewState;
	CurrentState->Enter();
}
