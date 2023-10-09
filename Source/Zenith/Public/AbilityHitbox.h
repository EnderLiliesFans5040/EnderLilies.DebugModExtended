#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "Ability.h"
#include "Engine/EngineTypes.h"
#include "HitInfos.h"
#include "AbilityHitbox.generated.h"

class UState;
class AActor;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Abstract)
class ZENITH_API AAbilityHitbox : public AAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanHitHitboxes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeHitByHitboxes;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> HadContactActors;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> InContactActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCollideInvoker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCollideInvokerFaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopOnPawnCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopOnHitboxCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopOnNonPawnCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> BlockingCollisionChannels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreReentry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RetriggerContactAfter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> SkipCollisionIfTargetHasAnyStates;
    
    UPROPERTY(Transient)
    TMap<AActor*, FHitInfos> HitInfosForActors;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AAbilityHitbox();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool bEnableCollision);
    
    UFUNCTION()
    void ProcessActorExit(AActor* ExitActor);
    
    UFUNCTION()
    void ProcessActorEnter(AActor* EnterActor, const FHitInfos& HitInfos);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPawnExit(AActor* ExitActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPawnEnter(AActor* EnterActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnNonPawnEnter();
    
    UFUNCTION()
    void OnActorOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnActorOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

