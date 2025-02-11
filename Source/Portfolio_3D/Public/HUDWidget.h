#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidget.generated.h"

UCLASS()
class PORTFOLIO_3D_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//BlueprintImplementableEvent 블루프린트에서 코드 구현
	//BlueprintCallable 블루프린트에서 c++ 함수 호출 가능
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPlayer(class APortfolio_3DCharacter* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(float CurrentHealth);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float MaxHealth);
};
