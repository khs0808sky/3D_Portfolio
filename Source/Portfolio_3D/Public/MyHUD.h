#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

UCLASS()
class PORTFOLIO_3D_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	//TSubclassOf �ش� Ŭ������ �巡�� �����ϰ� UHUDWidget �츮�� ����� ��ӹ����ָ�
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|UI")
	TSubclassOf<class UHUDWidget> UIHUDWidgetClass;//����

	UPROPERTY(BlueprintReadWrite, Category = "RPG|UI")
	class UHUDWidget* UIHUDWidget; //���� ���� �������� ������ UI

public:
	void CreateHUD();
	class UHUDWidget* GetHUD();
	void SpawnPlayerStateSetting(class APortfolio_3DCharacter* player);
};
