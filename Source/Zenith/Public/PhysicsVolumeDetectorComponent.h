#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsVolumeDetectorEventDelegate.h"
#include "PhysicsVolumeDetectorComponent.generated.h"

class AActor;
class ACustomPhysicsVolume;
class UZenithCharacterMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UPhysicsVolumeDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPhysicsVolumeDetectorEvent OnBeginVolumeOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FPhysicsVolumeDetectorEvent OnEndVolumeOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FPhysicsVolumeDetectorEvent OnActivateVolume;
    
    UPROPERTY(BlueprintAssignable)
    FPhysicsVolumeDetectorEvent OnDeactivateVolume;
    
private:
    UPROPERTY(Transient)
    AActor* Owner;
    
    UPROPERTY(Instanced, Transient)
    UZenithCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Transient)
    TArray<ACustomPhysicsVolume*> PhysicsVolumes;
    
public:
    UPhysicsVolumeDetectorComponent();
private:
    UFUNCTION()
    void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

