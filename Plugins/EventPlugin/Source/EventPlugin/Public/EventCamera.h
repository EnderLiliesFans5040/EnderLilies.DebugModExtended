#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "UObject/NoExportTypes.h"
#include "EventCamera.generated.h"

class AActor;

UCLASS()
class EVENTPLUGIN_API AEventCamera : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> LockedTarget;
    
    UPROPERTY()
    FTransform LockedTargetOffset;
    
public:
    AEventCamera();
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    void LockToTarget(AActor* TargetToLock, FTransform Offset);
    
};

