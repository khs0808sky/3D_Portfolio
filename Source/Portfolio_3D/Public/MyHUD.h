#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

UCLASS()
class PORTFOLIO_3D_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	//TSubclassOf 해당 클래스만 드래그 가능하게 UHUDWidget 우리가 만든거 상속받은애만
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|UI")
	TSubclassOf<class UHUDWidget> UIHUDWidgetClass;//원본

	UPROPERTY(BlueprintReadWrite, Category = "RPG|UI")
	class UHUDWidget* UIHUDWidget; //위에 원본 기준으로 생성된 UI

public:
	void CreateHUD();
	class UHUDWidget* GetHUD();
	void SpawnPlayerStateSetting(class APortfolio_3DCharacter* player);
};
