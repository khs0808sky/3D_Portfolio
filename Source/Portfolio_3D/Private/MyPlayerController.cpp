#include "MyPlayerController.h"
#include "Portfolio_3D/Portfolio_3DCharacter.h"
#include "MyHUD.h"

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	//컨트롤러의 주인이 내꺼가 아니면 생성 안하도록
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

	//컨트롤러 주인이 내꺼가 아닐때는 안만들게
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

