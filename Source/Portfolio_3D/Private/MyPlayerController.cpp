#include "MyPlayerController.h"
#include "Portfolio_3D/Portfolio_3DCharacter.h"
#include "MyHUD.h"

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	//��Ʈ�ѷ��� ������ ������ �ƴϸ� ���� ���ϵ���
	if (!IsLocalPlayerController())
		return;

	AHUD* hud = GetHUD();
	if (IsValid(hud))
	{
		AMyHUD* myhud = Cast<AMyHUD>(hud);
		if (IsValid(myhud))
		{
			myhud->CreateHUD();
			myhud->SpawnPlayerStateSetting(Cast< APortfolio_3DCharacter>(aPawn));
		}
	}
}
void AMyPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//��Ʈ�ѷ� ������ ������ �ƴҶ��� �ȸ����
	if (!IsLocalPlayerController())
		return;

	AHUD* hud = GetHUD();
	if (IsValid(hud))
	{
		AMyHUD* myhud = Cast<AMyHUD>(hud);
		if (IsValid(myhud))
		{
			myhud->CreateHUD();
			myhud->SpawnPlayerStateSetting(Cast< APortfolio_3DCharacter>(GetCharacter()));
		}
	}
}

