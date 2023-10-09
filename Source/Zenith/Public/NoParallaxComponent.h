#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NoParallaxComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UNoParallaxComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseParentZOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseMovementFactorOverride;
    
    UPROPERTY(EditAnywhere)
    float MovementFactorOverride;
    
public:
    UNoParallaxComponent();
};

