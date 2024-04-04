#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedSpotLight.generated.h"

class USpotLightComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AEmulatedSpotLight : public AEmulatedLight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
public:
    AEmulatedSpotLight(const FObjectInitializer& ObjectInitializer);

};

