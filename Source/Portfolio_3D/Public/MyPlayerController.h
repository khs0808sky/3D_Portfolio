#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UCLASS()
class PORTFOLIO_3D_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	//빙의 됐을때
	virtual void OnPossess(APawn* aPawn) override;

	//서버에서 상태 변경시
	virtual void OnRep_PlayerState() override;
};
