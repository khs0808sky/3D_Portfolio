#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "MyAbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

struct FGameplayEffectModCallbackData;

//��������Ʈ �Ķ���� �ΰ�¥��, �Ӽ� ����ɶ� �Ӽ� ��(float),StackCount(������) �̰� �ΰ� �ش�.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttributeChangeDelegate, float, Attr, int32, StackCount);

UCLASS()
class PORTFOLIO_3D_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UMyAttributeSet();

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	//Health ���� ����ɶ� ReplicatedUsing�Ӽ��� �־��� �Լ� ����
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health); //ü�°��� �Լ� �ٸ������

	//���� ü�� ����� ȣ���� �Լ� ��������Ʈ
	FAttributeChangeDelegate HealthChaneDelegate;

	//########################################################################################
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	//Health ���� ����ɶ� ReplicatedUsing�Ӽ��� �־��� �Լ� ����
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, MaxHealth); //ü�°��� �Լ� �ٸ������

	//���� ü�� ����� ȣ���� �Լ� ��������Ʈ
	FAttributeChangeDelegate MaxHealthChaneDelegate;

	//########################################################################################
	//��������Ʈ�� ��Ʈ, �̰� �־�� �� ����� ȣ�� ����
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	
};
