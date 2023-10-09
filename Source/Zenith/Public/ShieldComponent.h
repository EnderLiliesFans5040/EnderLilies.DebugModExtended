#pragma once
#include "CoreMinimal.h"
#include "RegenerativeParamComponent.h"
#include "ShieldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UShieldComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
    UShieldComponent();
};

