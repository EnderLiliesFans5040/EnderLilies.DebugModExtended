#pragma once
#include "CoreMinimal.h"
#include "EActorBindingTransformType.generated.h"

UENUM(BlueprintType)
enum class EActorBindingTransformType : uint8 {
    Absolute,
    Local,
};

