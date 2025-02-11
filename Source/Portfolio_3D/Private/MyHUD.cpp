#include "MyHUD.h"
#include "HUDWidget.h"
#include "Portfolio_3D/Portfolio_3DCharacter.h"

void AMyHUD::CreateHUD()
{
	if (UIHUDWidget != nullptr) //이미 있으면 안함
		return;

	//에디터에서 넣은 원본 클래스 무조건 있어야됨
	if (UIHUDWidgetClass == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("%s()Missing UIHUDWidgetClass."),
			*FString(__FUNCTION__));//호출한 함수 이름으로에러 메시지 출력
		return;
	}

	//위젯 만들어서
	UIHUDWidget = CreateWidget<UHUDWidget>(GetWorld(), UIHUDWidgetClass);
	UIHUDWidget->AddToViewport(); //뷰포트에 넣어서 화면 출력
	
}

UHUDWidget* AMyHUD::GetHUD()
{
	return UIHUDWidget;
}


void AMyHUD::SpawnPlayerStateSetting(APortfolio_3DCharacter* player)
{
	if (player && UIHUDWidget)
	{
		UIHUDWidget->SetPlayer(player);
		//UIHUDWidget->SetCurrentHealth(player->GetHealth());
		//UIHUDWidget->SetMaxHealth(player->GetMaxHealth());
	}
}

