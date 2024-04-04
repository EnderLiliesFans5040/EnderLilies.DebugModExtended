#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitStopEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "HitStopComponent.generated.h"

class UMovementComponent;
class USpineSkeletonAnimationComponent;
class UState;
class UStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> AdditionalHitStopStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovementComponent* MovementComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitStopEvent OnHitStopStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitStopEvent OnHitStopEnd;
    
    UHitStopComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LaunchHitStop(float HitStopDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHitStop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitStopFactor() const;
    
};

