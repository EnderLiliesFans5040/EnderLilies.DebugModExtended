#pragma once
#include "CoreMinimal.h"
#include "Engine/Light.h"
#include "EmulatedLight.generated.h"

UCLASS(Abstract)
class ZENITH_API AEmulatedLight : public ALight {
    GENERATED_BODY()
public:
    AEmulatedLight();
};

