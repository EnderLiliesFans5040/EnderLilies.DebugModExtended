#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAbilityEffectQueue.h"
#include "EAbilityTargetTypes.h"
#include "EFaction.h"
#include "HitInfos.h"
#include "Templates/SubclassOf.h"
#include "AbilityEffectComponent.generated.h"

class AActor;
class UState;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAbilityEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityEffectQueue AbilityEffectQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyApplyIfTargetAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyApplyOnPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreIfTargetHasAnyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreIfTargetGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreIfTargetJustGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreIfTargetParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityTargetTypes TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction FactionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApplicationProbability;
    
public:
    UAbilityEffectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalizeEffect(AActor* From, AActor* To, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyEffect(AActor* From, AActor* To, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbilityLaunched();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete(float TotalExecutionTime, float& out_OverTime) const;
    
};

