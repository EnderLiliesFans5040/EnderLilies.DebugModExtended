#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedSpotLight.generated.h"

class USpotLightComponent;

UCLASS(Abstract)
class ZENITH_API AEmulatedSpotLight : public AEmulatedLight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USpotLightComponent* SpotLightComponent;
    
public:
    AEmulatedSpotLight();
};

