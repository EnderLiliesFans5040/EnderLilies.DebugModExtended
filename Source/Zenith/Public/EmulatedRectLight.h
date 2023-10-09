#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedRectLight.generated.h"

class URectLightComponent;

UCLASS(Abstract)
class ZENITH_API AEmulatedRectLight : public AEmulatedLight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    URectLightComponent* RectLightComponent;
    
public:
    AEmulatedRectLight();
};

