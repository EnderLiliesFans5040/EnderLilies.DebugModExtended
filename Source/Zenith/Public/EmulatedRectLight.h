#pragma once
#include "CoreMinimal.h"
#include "EmulatedLight.h"
#include "EmulatedRectLight.generated.h"

class URectLightComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AEmulatedRectLight : public AEmulatedLight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URectLightComponent* RectLightComponent;
    
public:
    AEmulatedRectLight(const FObjectInitializer& ObjectInitializer);

};

