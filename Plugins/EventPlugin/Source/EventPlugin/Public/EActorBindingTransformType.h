#pragma once
#include "CoreMinimal.h"
#include "EActorBindingTransformType.generated.h"

UENUM()
enum class EActorBindingTransformType : uint8 {
    Absolute,
    Local,
};

