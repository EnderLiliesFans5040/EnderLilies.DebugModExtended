#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AutoClimbEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "AutoClimbComponent.generated.h"

class UBoxComponent;
class AZenithCharacter;
class UState;
class UCommandAction;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAutoClimbComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAutoClimbEvent OnAutoClimb;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float AllowedMaxZVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAngleForClimb;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D BoxExtentsXY;
    
    UPROPERTY(EditDefaultsOnly)
    float ForwardOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float TraceSphereRadius;
    
    UPROPERTY(EditAnywhere)
    float MinHeightForAutoClimbHigh;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightForAutoClimbHigh;
    
    UPROPERTY(EditAnywhere)
    float MinHeightForAutoClimbMiddle;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightForAutoClimbMiddle;
    
    UPROPERTY(EditAnywhere)
    float MinHeightForAutoClimbLow;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightForAutoClimbLow;
    
    UPROPERTY(EditAnywhere)
    float DistanceAboveHeadToCheck;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> IgnoreAutoClimbStates;
    
    UPROPERTY(Instanced, Transient)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(Transient)
    AZenithCharacter* CharacterOwner;
    
public:
    UAutoClimbComponent();
private:
    UFUNCTION()
    void OnStartCommand(UCommandAction* CommandAction);
    
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnoreActorUntilNextCommand(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    FVector GetLastTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardOffset() const;
    
};

