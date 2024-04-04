#pragma once
#include "CoreMinimal.h"
#include "EFadeTypes.generated.h"

UENUM(BlueprintType)
enum class EFadeTypes : uint8 {
    None,
    FadeIn,
    FadeOut,
};

