#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedPointLight.generated.h"

class UPointLightComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AEmulatedPointLight : public AEmulatedLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorAffectRadiusOffset;
    
    AEmulatedPointLight(const FObjectInitializer& ObjectInitializer);

};

