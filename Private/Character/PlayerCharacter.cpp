#include "Character/PlayerCharacter.h"

#include "Components/InputComponent.h"

APlayerCharacter::APlayerCharacter()
{
	// Root负责统一分发每帧角色逻辑
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;

	// 明确开启角色及移动的网络复制
	bReplicates = true;
	SetReplicateMovement(true);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	InitializeCharacterSystems();
}

void APlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	DispatchCharacterUpdate(DeltaSeconds);
}

void APlayerCharacter::SetupPlayerInputComponent(
	UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 后续只在这里绑定输入，回调负责写入输入意图
}

void APlayerCharacter::InitializeCharacterSystems()
{
	// 下一阶段在这里创建状态协调器和具体状态对象
}

void APlayerCharacter::DispatchCharacterUpdate(float DeltaSeconds)
{
	// 下一阶段在这里按顺序更新分层状态机
}
