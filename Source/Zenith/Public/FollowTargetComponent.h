#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraShake.h"
#include "UObject/NoExportTypes.h"
#include "FollowTargetComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFollowTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUpdateOwnerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OscillationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalSpaceOffset;
    
private:
    UPROPERTY(Transient)
    AActor* Owner;
    
public:
    UFollowTargetComponent();
    UFUNCTION(BlueprintCallable)
    void TeleportToTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetFollowTarget(USceneComponent* NewFollowTarget, bool bSnapToTarget);
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFollowTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFollowTargetForward() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFollowTargetDeltaLocation() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetFollowTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearFollowTarget();
    
};

