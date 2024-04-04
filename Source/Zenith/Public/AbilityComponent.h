#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESpineBone.h"
#include "AbilityDescription.h"
#include "AbilityParams.h"
#include "EAbilityStopReason.h"
#include "ObjectArray.h"
#include "Templates/SubclassOf.h"
#include "AbilityComponent.generated.h"

class AAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAbility*> RunningAbilities;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AAbility>> RunningFireAndForgetAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AAbility>, FObjectArray> AvailableAbilities;
    
public:
    UAbilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllAbilities(EAbilityStopReason AbilityStopReason, bool bStopFireAndForgetAbilities);
    
    UFUNCTION(BlueprintCallable)
    void StopAbility(AAbility* Ability, EAbilityStopReason AbilityStopReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeAbility(AAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbilityFromDescription(const FAbilityDescription& AbilityDescription, const FTransform& Offset);
    
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbilityAbsolute(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform AbilityTransform, bool bFireAndForget);
    
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbility(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform Offset, ESpineBone SpawnBone, FName CustomSpawnBone, bool bFollowSpawnBoneRotation, ESpineBone AttachBone, FName CustomAttachBone, bool bFollowAttachBoneRotation, bool bFireAndForget);
    
};

