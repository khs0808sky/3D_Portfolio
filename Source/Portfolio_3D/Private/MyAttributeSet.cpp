#include "MyAttributeSet.h"
#include "Net/UnrealNetwork.h" //�𸮾� ��Ʈ��ũ ���
#include "GameplayEffect.h" //�ɷ�ġ ���޿� ����Ʈ,�±�, �׷��� ���� �����
#include "GameplayEffectExtension.h" //Ȯ���

UMyAttributeSet::UMyAttributeSet()
{
}

void UMyAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, Health, OldHealth);
}

void UMyAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, MaxHealth, OldMaxHealth);
}

//���Լ��� �־�� multicast ���� ����
void UMyAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UMyAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMyAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

//���� ������ ȣ�� �Ǵ� �̺�Ʈ Ȯ���ϴ� �κ�
void UMyAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute()) //ü���� ����ȰŸ� ��
	{
		//GetHealth() ���� ����� �� ��
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));; //0~1000���̷� ü�� ����
		HealthChaneDelegate.Broadcast(GetHealth(), Data.EffectSpec.StackCount);
		//ü�� ����� ��������Ʈ�� �ִ� ��� �Լ��� ü�� ���� ��Ƽĳ��Ʈ
	}

	if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute()) //ü���� ����ȰŸ� ��
	{
		//GetHealth() ���� ����� �� ��
		SetHealth(FMath::Clamp(GetMaxHealth(), 0.f,5000.f));; //0~1000���̷� ü�� ����
		HealthChaneDelegate.Broadcast(GetMaxHealth(), Data.EffectSpec.StackCount);
		//ü�� ����� ��������Ʈ�� �ִ� ��� �Լ��� ü�� ���� ��Ƽĳ��Ʈ
	}
}