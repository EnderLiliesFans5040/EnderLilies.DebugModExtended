#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ObjectArray.h"
#include "EAbilityStopReason.h"
#include "ESpineBone.h"
#include "AbilityParams.h"
#include "AbilityDescription.h"
#include "UObject/NoExportTypes.h"
#include "AbilityComponent.generated.h"


class AAbility;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AAbility*> RunningAbilities;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AAbility>> RunningFireAndForgetAbilities;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<AAbility>, FObjectArray> AvailableAbilities;
    
public:
    UAbilityComponent();
    UFUNCTION(BlueprintCallable)
    void StopAllAbilities(EAbilityStopReason AbilityStopReason, bool bStopFireAndForgetAbilities);
    
    UFUNCTION(BlueprintCallable)
    void StopAbility(AAbility* Ability, EAbilityStopReason AbilityStopReason);
    
private:
    UFUNCTION()
    void OnGameMapSwitch();
    
    UFUNCTION()
    void OnDisposeAbility(AAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbilityFromDescription(const FAbilityDescription& AbilityDescription, const FTransform& Offset);
    
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbilityAbsolute(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform AbilityTransform, bool bFireAndForget);
    
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbility(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform Offset, ESpineBone SpawnBone, FName CustomSpawnBone, bool bFollowSpawnBoneRotation, ESpineBone AttachBone, FName CustomAttachBone, bool bFollowAttachBoneRotation, bool bFireAndForget);
    
};

