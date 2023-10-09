#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedPointLight.generated.h"

class UPointLightComponent;

UCLASS(Abstract)
class ZENITH_API AEmulatedPointLight : public AEmulatedLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ActorAffectRadiusOffset;
    
    AEmulatedPointLight();
};

