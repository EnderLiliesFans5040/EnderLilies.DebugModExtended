#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EmulatedLightDetector.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UEmulatedLightDetector : public UActorComponent {
    GENERATED_BODY()
public:
    UEmulatedLightDetector();
    UFUNCTION(BlueprintCallable)
    void RefreshEmulatedLights();
    
};

