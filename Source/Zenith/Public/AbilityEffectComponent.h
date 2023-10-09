#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EAbilityEffectQueue.h"
#include "EAbilityTargetTypes.h"
#include "EFaction.h"
#include "HitInfos.h"
#include "AbilityEffectComponent.generated.h"

class UState;
class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bActive;
    
    UPROPERTY(EditDefaultsOnly)
    EAbilityEffectQueue AbilityEffectQueue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyApplyIfTargetAlive;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyApplyOnPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> IgnoreIfTargetHasAnyState;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreIfTargetGuard;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreIfTargetJustGuard;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreIfTargetParry;
    
    UPROPERTY(EditDefaultsOnly)
    EAbilityTargetTypes TargetType;
    
    UPROPERTY(EditDefaultsOnly)
    EFaction FactionFilter;
    
    UPROPERTY(EditDefaultsOnly)
    float ApplicationProbability;
    
public:
    UAbilityEffectComponent();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnFinalizeEffect(AActor* From, AActor* To, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnApplyEffect(AActor* From, AActor* To, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAbilityLaunched();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEffectActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsComplete(float TotalExecutionTime, float& out_OverTime) const;
    
};

