#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "MyAbilitySystemComponent.generated.h"

UCLASS()
class PORTFOLIO_3D_API UMyAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	//�ʱ� ����Ʈ ���� �ѹ��� �ߴ��� üũ�Ϸ��� ���� ����
	bool StartUpEffectApplied = false;
};
