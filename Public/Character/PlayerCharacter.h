#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

/**
 *  第三人称角色系统的根节点
 *  负责组件整合、生命周期管理与时序分发
 *  不包含具体游戏状态逻辑
 */
UCLASS()
class STARTYUANREFTAIN_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	APlayerCharacter();

	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	// 初始化由角色持有的普通C++系统
	void InitializeCharacterSystems();

	// 按固定顺序分发角色逻辑更新
	void DispatchCharacterUpdate(float DeltaSeconds);
};
