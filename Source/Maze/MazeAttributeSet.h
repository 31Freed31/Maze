// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MazeAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class MAZE_API UMazeAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMazeAttributeSet, Health)

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMazeAttributeSet, MaxHealth)

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UMazeAttributeSet, Stamina)

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UMazeAttributeSet, MaxStamina)

	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData&Data) override;

};
