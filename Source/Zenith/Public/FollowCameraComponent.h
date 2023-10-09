#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FollowCameraComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFollowCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float DistanceFromCamera;
    
    UPROPERTY(Transient)
    AActor* Owner;
    
public:
    UFollowCameraComponent();
};

