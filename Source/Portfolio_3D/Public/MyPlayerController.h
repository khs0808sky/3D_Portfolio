#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UCLASS()
class PORTFOLIO_3D_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	//���� ������
	virtual void OnPossess(APawn* aPawn) override;

	//�������� ���� �����
	virtual void OnRep_PlayerState() override;
};
