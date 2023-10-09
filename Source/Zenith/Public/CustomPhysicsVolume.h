#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "ECustomMovementMode.h"
#include "CustomPhysicsVolume.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Abstract)
class ZENITH_API ACustomPhysicsVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(EditAnywhere)
    ECustomMovementMode CustomMovementMode;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bPhysicsVolumeEnabled;
    
public:
    ACustomPhysicsVolume();
    UFUNCTION(BlueprintPure)
    bool IsPhysicsVolumeEnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPriority() const;
    
};

