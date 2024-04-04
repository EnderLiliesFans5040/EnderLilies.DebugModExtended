#pragma once
#include "CoreMinimal.h"
#include "RegenerativeParamComponent.h"
#include "ShieldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UShieldComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
    UShieldComponent(const FObjectInitializer& ObjectInitializer);

};

