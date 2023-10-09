#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EAptitudeType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "WallGrabComponent.generated.h"

class UBoxComponent;
class ACharacter;
class UCommandAction;
class UState;
class UCommandQueueComponent;
class UZenithInputComponent;
class UStateComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UWallGrabComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float MinVerticalityForWallGrab;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceToWallGrabOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxZVelocityForGrab;
    
    UPROPERTY(EditDefaultsOnly)
    EAptitudeType NecessaryAptitude;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ActivationBoxExtents;
    
    UPROPERTY(EditDefaultsOnly)
    FVector ActivationBoxLocalSpaceOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector LocalSpaceWallGrabLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommandAction> WallGrabCommandActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> NoWallGrabStates;
    
    UPROPERTY(Transient)
    ACharacter* CharacterOwner;
    
    UPROPERTY(Instanced, Transient)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(Instanced, Transient)
    UCommandQueueComponent* CommandQueueComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UZenithInputComponent* InputComponent;
    
public:
    UWallGrabComponent();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnWallGrab();
    
private:
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsGrabingWall() const;
    
};

