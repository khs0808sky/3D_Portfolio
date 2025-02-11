#include "MyHUD.h"
#include "HUDWidget.h"
#include "Portfolio_3D/Portfolio_3DCharacter.h"

void AMyHUD::CreateHUD()
{
	if (UIHUDWidget != nullptr) //�̹� ������ ����
		return;

	//�����Ϳ��� ���� ���� Ŭ���� ������ �־�ߵ�
	if (UIHUDWidgetClass == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("%s()Missing UIHUDWidgetClass."),
			*FString(__FUNCTION__));//ȣ���� �Լ� �̸����ο��� �޽��� ���
		return;
	}

	//���� ����
	UIHUDWidget = CreateWidget<UHUDWidget>(GetWorld(), UIHUDWidgetClass);
	UIHUDWidget->AddToViewport(); //����Ʈ�� �־ ȭ�� ���
	
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

