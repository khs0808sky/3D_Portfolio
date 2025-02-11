#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidget.generated.h"

UCLASS()
class PORTFOLIO_3D_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//BlueprintImplementableEvent �������Ʈ���� �ڵ� ����
	//BlueprintCallable �������Ʈ���� c++ �Լ� ȣ�� ����
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPlayer(class APortfolio_3DCharacter* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(float CurrentHealth);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float MaxHealth);
};
